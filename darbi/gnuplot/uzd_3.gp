set terminal png size 500,500
set output "uzd_3.png"
set xlabel "x"
set ylabel "y"
set grid

f(x) = x*x+2*x+1
g(x) = "plot_data_uzd_2.dat"

plot f(x) title "x^2+2*x+1",\
	'func_dati.dat' title "Plot no faila"
