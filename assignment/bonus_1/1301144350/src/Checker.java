/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Budi Pradnyana
 */
public class Checker {
    public boolean RectangleChecker(Rectangle r1, Rectangle r2){
        boolean result=false;
        result = (r2.getX1() > r1.getX2()) || (r2.getY1() > r1.getY2()) || (r1.getX1() > r2.getX2()) || (r1.getY1() > r2.getY2());
        return result;
    }
}
