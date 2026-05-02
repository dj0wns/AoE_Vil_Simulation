// Class contains all player specific information

#pragma once

#include<set>

#include "enums.h"

class Player {
  public:
    // Init player with starting resources
    Player(
        double wood,
        double food,
        double gold,
        double stone) :
      wood(wood),
      food(food),
      gold(gold),
      stone(stone) {}

    double wood;
    double food;
    double gold;
    double stone;

    std::set<Enums::Technologies> researched_technologies;

    // this is to be helpful, should be calculated at the start of every loop to maintain consistency.
    int population;
    int population_space;


};
