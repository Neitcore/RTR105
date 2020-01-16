set terminal png size 500,500
set output "lab_work3.png"

set xlabel "x"
set ylabel "y"
set grid



plot [0:2*pi] sin(x),cos(x),\
	"derivative.dat" every::1 using 1:2 with lines title "sin(x) file",\
	"derivative.dat" every::1 using 1:3 with lines title "sin'(x) fd ",\
	"derivative.dat" every::1 using 1:4 with lines title "sin'(x) af ",\
	"derivative.dat" every::1 using 1:5 with lines title "sin''(x) df ",\
	"derivative.dat" every::1 using 1:6 with lines title "sin''(x) af "


