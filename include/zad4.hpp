#include "zad1.hpp"

#include <vector>

// tutaj funkcja obliczMake

double obliczMake(const std::vector<Tagliatelle>& wek)
{
  double M = 0;
  int dl = wek.size();
  for (auto i : wek)
  {
    M = M + i.ileMaki(dl);
    dl = dl - 1;
  }
  if (M > 100)
    throw(1);
  if (M > 50 && M <= 100)
    throw(2.0);
  if (M <= 50)
    return M;
}