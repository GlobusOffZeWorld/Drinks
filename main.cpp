#include <iostream>
#include "Beer.h"
#include "Cognac.h"
#include "Wine.h"
#include "Milk.h"
#include "MineralWater.h"
#include "Lemonade.h"

int main() {

  Cognac cognac("belarus", 0.75, 110,  extra_old);
  std::cout << cognac.GetDrinkName() << "\n";

  return 0;
}
