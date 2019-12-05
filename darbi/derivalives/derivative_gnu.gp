set grid
plot [0:2*pi] sin(x)
replot [0:2*pi] cos(x)
replot "derative.dat" every ::1 using 1:2 with lines title "sin(x) (num)"
replot "derative.dat" every ::1 using 1:3 with lines title "sin'(x) (num)"
