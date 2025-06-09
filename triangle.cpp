#include <valarray>
#include "triangle.h"

Triangle::Triangle(string name, float a, float b, float c) : Figure(name)
{
    m_a = a;
    m_b = b;
    m_c = c;
    m_s = (m_a + m_b + m_c)/2;
    m_area = sqrt(m_s*(m_s-a)*(m_s-b)*(m_s-c));
   ;
}

float Triangle::Area() const
{
    return m_area;
}

float Triangle::Perimeter() const
{
    return m_a + m_b + m_c;
}

void Triangle::Info() const
{
    cout << "Triangle: " << Name() << endl;
    cout << "Dimensions: " << m_a << " x " << m_b << " x " << m_c <<  endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " <<  m_a + m_b + m_c << endl;
}