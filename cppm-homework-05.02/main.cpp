//
//  main.cpp
//  cppm-homework-05.02
//
//  Created by a1ex on 11/3/23.
//

#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count = 0;
    std::string name = "Figure :";
public:
     virtual void print_info ()
    {
        std::cout << name << std::endl;
        std::cout << sides_count << std::endl;
    }
};

class Triangle : public Figure
{
protected:
    int a = 0;
    int b  = 0;
    int c = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    
public:
    Triangle (int a,int b, int c, int A, int B, int C)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->A = A;
        this->B = B;
        this->C = C;
    }
    
    std::string get_sides ()
    {
        std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c);
        return all_sides;
    }
    
    std::string get_angles ()
    {
        std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C);
        return all_angles;
    }
    
   void print_info() override
    {
        std::cout << "Sides: ";
        std::cout << get_sides() << std::endl;
        std::cout << "Angles: ";
        std::cout << get_angles() << std::endl;
    }
};

class Right_triangle : public Triangle
{
public:
    Right_triangle (int a, int b, int c, int A, int B) : Triangle (a, b, c, A, B, C = 90){};
};

class Isosceles_triangle : public Triangle
{
public:
    Isosceles_triangle (int a, int b, int A, int B) : Triangle (a, b, a, A, B, A ){};
};

class Equilateral_triangle : public Triangle
{
public:
    Equilateral_triangle (int a) : Triangle (a, a, a, A = 60, B = 60, C = 60){};
};


class Quadrilateral : public Figure
{
protected:
    int a = 0;
    int b  = 0;
    int c = 0;
    int d = 0;
    int A = 0;
    int B = 0;
    int C = 0;
    int D = 0;
    
public:
    Quadrilateral (int a, int b, int c, int d, int A, int B, int C, int D)
    {
        this->a = a;
        this->b = b;
        this->c = c;
        this->d = d;
        this->A = A;
        this->B = B;
        this->C = C;
        this->D = D;
    }
    
    std::string get_sides ()
    {
        std::string all_sides = "a=" + std::to_string(a) + " b=" + std::to_string(b) + " c=" + std::to_string(c) + " d=" + std::to_string(d);
        return all_sides;
    }
    
    std::string get_angles ()
    {
        std::string all_angles = "A=" + std::to_string(A) + " B=" + std::to_string(B) + " C=" + std::to_string(C) + " D=" + std::to_string(D);
        return all_angles;
    }
    
    void print_info () override
    {
        std::cout << "Sides: ";
        std::cout << get_sides() << std::endl;
        std::cout << "Angles: ";
        std::cout << get_angles() << std::endl;
    }
};

class Rectangle : public Quadrilateral
{
public:
    Rectangle (int a, int b) : Quadrilateral (a, b, c = a, d = b, A = 90, B = A, C = A, D = A){};
};


class Square : public Rectangle
{
public:
    Square (int a) : Rectangle (a, b = a){};
};

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram (int a, int b, int A, int B) : Quadrilateral (a, b, c = a, d = b, A, B, C = A, D = B){};
};

class Rhomb : public Parallelogram
{
public:
    Rhomb (int a, int A, int B) : Parallelogram (a, b = a, A, B){};
};



int main(int argc, const char * argv[]) {
  
    Triangle triangle (25,27,38,70,65,89);
    std::cout << "Triangle:" << std::endl;
    triangle.print_info();
    std::cout << std::endl;
    
    Right_triangle right_Triangle (40,35,10,78,34);
    std::cout << "Right triangle:" << std::endl;
    right_Triangle.print_info();
    std::cout << std::endl;
    
    
    Isosceles_triangle isosceles_Triangle (45,70,50,80);
    std::cout << "Isosceles triangle:" << std::endl;
    isosceles_Triangle.print_info();
    std::cout << std::endl;
    
    Equilateral_triangle equilateral_Triangle (45);
    std::cout << "Equilateral triangle:" << std::endl;
    equilateral_Triangle.print_info();
    std::cout << std::endl;
    
    Quadrilateral quadrilateral (45,65,35,75,60,60,30,30);
    std::cout << "Quadrilateral:" << std::endl;
    quadrilateral.print_info();
    std::cout << std::endl;
    
    Rectangle rectangle (45, 65);
    std::cout << "Rectangle:" << std::endl;
    rectangle.print_info();
    std::cout << std::endl;
    
    Square square (45);
    std::cout << "Square:" << std::endl;
    square.print_info();
    std::cout << std::endl;
    
    Parallelogram parallelogram (45,75,35,55);
    std::cout << "Parallelogram:" << std::endl;
    parallelogram.print_info();
    std::cout << std::endl;
    
    Rhomb rhomb (45,35,55);
    std::cout << "Rhomb:" << std::endl;
    rhomb.print_info();
    std::cout << std::endl;
    
    
    
    
    
    
    
    
    return 0;
}
