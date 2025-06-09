#include "circle.h"
#include "math.h"
Circle ::Circle(string name, float r) : Figure(name)
{
    m_r = r;

}

float Circle ::Area() const
{
    return m_r * m_r * M_PI;
}

float Circle::Perimeter() const
{
    return 2*m_r*M_PI;
}

void Circle::Info() const
{
    cout << "Circle: " << Name() << endl;
    cout << "Dimensions: " " Radius: " << m_r << endl;
    cout << "Area: " << m_r * m_r * M_PI << endl;
    cout << "Perimeter: " << 2*m_r*M_PI << endl;
}