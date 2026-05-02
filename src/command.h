// This class holds the commands that the orchestrator can give the simulation
// For the mvp this represents a build order, but additional commands and
// criteria may come in the future
#pragma once

#include "enums.h"
#include "condition.h"

class Command {
  public:
    Command(
          std::vector<Condition> conditions;
          std::vector<LogicalConnective> logical_connectives;
          enums::CommandAction action,
          enums::CommandObject object) :
        conditions(conditions),
        logical_connectives(logical_connectives),
        action(action),
        object(object) {}
  private:
    std::vector<Condition> conditions;
    std::vector<LogicalConnective> logical_connectives;
    enums::CommandAction action;
    enums::CommandObject object;

};
