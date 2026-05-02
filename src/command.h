// This class holds the commands that the orchestrator can give the simulation
// For the mvp this represents a build order, but additional commands and
// criteria may come in the future

#include "enums.h"

class Command {
  public:
    Command(
        double time,
        enums::CommandAction action,
        enums::CommandObject object) :
        time(time), action(action), object(object) {}
  private:
    double time;
    enums::CommandAction action;
    enums::CommandObject object;

};
