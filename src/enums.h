// File holding all of the useful enums in the codebase

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

enum PlayerName {
  GAIA,
  PLAYER_ONE,
  PLAYER_TWO
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
