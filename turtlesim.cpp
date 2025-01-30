#include <simplecpp>

main_program {
    turtleSim();
    int nsides;
    repeat(nsides=40) {
        forward(400.0/nsides);
        right(360.0/nsides);
    }
    forward(5); right(90);
    penUp;
}