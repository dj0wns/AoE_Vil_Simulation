// This class holds conditions for commands - when the conditions are met, then
// the command will execute
#pragma once

#include "enums.h"

class Game;
class Player;

class Condition {
  public:
    Condition(Enums::ConditionType condition, double value) :
      condition(condition), value(value) {}

    bool evaluate_condition(Game& game, Player& player);

  private:
    Enums::ConditionType condition;
    double value;

}
