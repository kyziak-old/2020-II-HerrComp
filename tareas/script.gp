set log xy
f(x) = A*x**B
g(x) = C*x**D
A=1.0e-4; B=3
C=1.0e-4; D=3
fit f(x) 'datos.txt' via A,B
fit g(x) 'datos1.txt' via C,D
plot 'datos.txt' w l t 'No-Opt', f(x) t 'fit-No-Opt', 'datos1.txt' w l t 'Opt-O3', g(x) t 'fit-Opt-O3'
set k l t 
set xlabel 'N'
set ylabel 'CPU time (s)'
set term pdf
set o 'fig.pdf'
replot
