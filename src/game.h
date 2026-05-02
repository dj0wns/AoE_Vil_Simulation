// Class that orchestrates the simulation

#include "entity.h"
#include "command.h"

class Game {

  public:
    Game();

    // step {time} seconds forward
    void work(double time);

  private:
    // All entities on the map
    std::vector<Entity> entities;
    // Queue of commands to execute
    std::vector<Command> commands;

};
