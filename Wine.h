//
// Created by globus on 23.12.2020.
//

#ifndef DRINKS_CMAKE_BUILD_DEBUG_WINE_H_
#define DRINKS_CMAKE_BUILD_DEBUG_WINE_H_

#include "Alcoholic_Drinks.h"

enum wine_types { dry, semi_dry, semi_sweet, natural };

class Wine : public Alcoholic_Drinks {
 public:
  std::string GetWineType() const;

  Wine(const std::string& drink_name, double container_volume, double alcohol_value, wine_types wine_type);
  ~Wine() = default;

 private:
  wine_types wine_type_;
};

#endif //DRINKS_CMAKE_BUILD_DEBUG_WINE_H_
