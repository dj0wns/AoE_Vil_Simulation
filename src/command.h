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
          enums::CommandObject object,
          int action_input_count,
          int action_output_count) :
        conditions(conditions),
        logical_connectives(logical_connectives),
        action(action),
        object(object),
        action_input_coun(action_input_count),
        action_output_count(action_output_count) {}
  private:
    std::vector<Condition> conditions;
    std::vector<LogicalConnective> logical_connectives;
    enums::CommandAction action;
    enums::CommandObject object;
    // These variables are specific to the action, for example these could mean 2 vils build 1 house
    int action_input_count;
    int action_output_count;

};
