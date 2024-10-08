

import src.StdDraw;

public class Heart {
    public static void main(String[] args) {
        StdDraw.setXscale(-1.5, +1.5);
        StdDraw.setYscale(-1.5, +1.5);
        StdDraw.setPenColor(StdDraw.PINK);

        // draw diamond
        double[] xs = { -1,  0, 1, 0 };
        double[] ys = {  0, -1, 0, 1 };
        StdDraw.filledPolygon(xs, ys);

        // circles
        StdDraw.filledCircle(+0.5, 0.5, 1 / Math.sqrt(2));
        StdDraw.filledCircle(-0.5, 0.5, 1 / Math.sqrt(2));
    }

}