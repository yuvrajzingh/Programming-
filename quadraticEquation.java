//Write a program to solve the quadratic eq. which is in the
//form a^2+bx+c =0. Find the square root. a,b,c - input through keyboard


import java. util.*;

public class quadraticEquation
{
public static void main(String[] args) {
Scanner sc = new Scanner (System.in);
System.out.println("Enter the value of a , b, c of the quadratic eq of the form ax^2+bx+c");
int a_190,b_190,c_190; a_190 = sc.nextInt (); b_190 = sc.nextInt (); c_190=sc.nextInt();
System.out.println(a_190+"x^2"+"+"+b_190+"x"+"+"+c_190);


float d_190= b_190*b_190-4*a_190*c_190;
double r1_190,r2_190;
if(d_190>0)
{
r1_190=(-b_190+Math.sqrt(d_190))/(2*a_190); r2_190=(-b_190-Math.sqrt(d_190))/(2*a_190);
System.out.println(r1_190+", "+r2_190);
}
else if(d_190==0)
{
r1_190=(-b_190)/(2*a_190);
System.out.println("Root is equal"+ r1_190);
}
else if(d_190<0)
{
System.out.println("Roots Are not real");
}
}
}