GNUPLOT=gnuplot
CXX=g++
CXXFLAGS=-O3
EIGEN=-I /usr/include/eigen3

all: eigenValues.x eigenValuesOP.x fig.pdf

fig.pdf: script.gp datos.txt
	$(GNUPLOT) $<

datos.txt: run.sh 
	bash run.sh

%.x: %.cpp
	$(CXX) $(EIGEN) $< -o $@

eigenValuesOP.x: eigenValues.cpp
	$(CXX) $(EIGEN) $(CXXFLAGS) $^ -o $@

clean:
	rm -rf *.out *.x
