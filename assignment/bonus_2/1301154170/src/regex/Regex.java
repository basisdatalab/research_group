/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package regex;

import java.util.ArrayList;
import java.util.List;
import java.util.regex.*;
import java.util.Scanner;
/**
 *
 * @author aka
 */
public class Regex {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        String input = "i'm luuuuuuuke";
        
		Pattern p = Pattern.compile(".*l.*u.*k.*e");
		Matcher m = p.matcher(input);

		if (m.find()) {
			System.out.println("True");	
                }
                else
                {
                        System.out.println("False");
                }
                        
		}// TODO code application logic here
    }
