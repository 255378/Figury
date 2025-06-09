#include "circle.h"
#include "math.h"
Circle ::Circle(string name, float r) : Figure(name)
{
    m_r = r;
    m_area = m_r * m_r * M_PI;
    m_perimeter = 2*m_r*M_PI;
}

float Circle ::Area() const
{
    return m_area;
}

float Circle::Perimeter() const
{
    return m_perimeter;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Dimensions: " " Radius: " << m_r << endl;
    cout << "Area: " << m_area << endl;
    cout << "Perimeter: " << m_perimeter << endl;
}