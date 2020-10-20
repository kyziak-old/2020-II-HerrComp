for N in 1 2 100 200 500; do
    echo -n "$N "
    ./eigenValues.x $N 2
done > datos.txt

for N in 1 2 100 200 500; do
    echo -n "$N "
    ./eigenValuesOP.x $N 2
done > datos1.txt

