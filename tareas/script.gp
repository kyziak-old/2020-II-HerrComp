set log xy
f(x) = A*x**B
g(x) = C*x**D
A=1.0e-4; B=3
C=1.0e-4; D=3
fit f(x) 'datos.txt' via A,B
fit g(x) 'datos1.txt' via C,D
ti = sprintf("%12.5e x^{%.2f}", A,B)
li = sprintf("%12.5e x^{%.2f}", C,D)
plot 'datos.txt' w lp lw 3 t 'No-Opt', f(x) lw 3 t ti, 'datos1.txt' w lp lw 3 t 'Opt-O3', g(x) lw 3 t li
set k r b 
set xlabel 'N'
set ylabel 'CPU time (s)'
set t pdf
set o 'fig.pdf'
replot
