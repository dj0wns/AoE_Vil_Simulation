// File holding all of the useful enums in the codebase
#pragma once

namespace Enums {

enum HitboxShape {
  CIRCLE,
  SQUARE
};

enum Resources {
  WOOD,
  FOOD,
  GOLD,
  STONE,
  NONE,
};

enum Technologies {
  DOUBLE_BIT_AXE,
  HORSE_COLLAR,
  GOLD_MINING,
  LOOM,
  WHEELBARROW,
};

enum PlayerName {
  GAIA,
  PLAYER_ONE,
};

enum ConditionType {
  IMMEDIATELY,
  VILLAGER_COUNT,
  TIME
};

enum LogicalConnective {
  AND,
  OR
};

enum CommandAction {
  BUILD,
  TASK,
};

enum CommandObject {
  VILLAGER,
  LUMBER_CAMP,
  MILL,
  BOAR,
  SHEEP,
  MINING_CAMP,
  STRAGGLER_TREE,
  FOREST_TREE,
  BERRIES,
};

}
