#include "villager.h"

#include "enums.h"

bool Villager::at_carry_capacity() {
  // TODO check if at carry capacity, include wheel and job type
}

void Villager::collect_resources() {
  // TODO set destination if too far, otherwise go to resource and collect
}

void Villager::drop_off_resources() {
  // TODO set destination to nearest drop off point that accepts resources, if there, then deposit all resources.
}

void Villager::work(double time) override {
  // Execute parent work
  Unit::work(time);

  // TODO if inventory is full, collect res, otherwise go collect res/build/lure/whatever
  // If task is none, then vil is idle, waiting for a retask from the build order.
  switch(current_task) {
    case Enums::VillagerTasks::MINING:
      break;
    case Enums::VillagerTasks::LOGGING:
      break;
    case Enums::VillagerTasks::FORAGING:
      break;
    case Enums::VillagerTasks::HUNTING:
      break;
    case Enums::VillagerTasks::SHEPHERDING:
      break;
    case Enums::VillagerTasks::BUILDING:
      break;
    case Enums::VillagerTasks::LURING:
      break;


  }

}
