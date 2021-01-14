#include "catch.hpp"
#include <string>

// Zad2
// tutaj definicja klasy Makaron
// BEZ definicji metody gotujMakaron (tylko z deklaracją)

class Makaron
{
  virtual double ileMaki(unsigned) const = 0;
  public:
  static Makaron* gotujMakaron(const std::string&);
};

// Zad1
// tutaj definicja klasy Tagliatelle


class Tagliatelle : public Makaron
{
  public:
  Tagliatelle(double l, double w, double r) : L(l), W(w), R(r) {}
  Tagliatelle() : L(0.5), W(0.5), R(0.5) {}
  override double ileMaki(unsigned P) const
  {
    double x;
    x = P*L*W*(1.-R)*C;
    return x;
  }
  private:
  double L;
  double W;
  double R;
  static const double C;
};