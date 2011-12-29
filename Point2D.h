#ifndef _POINT_2D_H
#define _POINT_2D_H

struct AngDeg {
  AngDeg(double t) : t(t) {}
  double t;
};

struct AngRad {
  AngRad(double t) : t(t) {}
  double t;
};

class Point2D {
public:
  Point2D(double x, double y) : m_x(x), m_y(y) {}
  Point2D(double radius, AngDeg angDeg) {
    std::cout << "degrees\n";
  }
  Point2D(double radius, AngRad angRad) {
    std::cout << "radians\n";
  }

private:
  double m_x, m_y;
};

#endif
