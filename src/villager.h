#pragma once

#include <string>

#include "enums.h"
#include "unit.h"

class Villager : public Unit {
  public:
    Villager(
        double x,
        double y,
        const Player& owning_player) :
      Unit(
          x,
          y,
          25, // TODO deal with loom
          Enums::HitboxShape::CIRCLE,
          0.25, //TODO placeholder unit collision box size
          3., // Deal with bonus damage at some point
          0.8, // Move speed
          2., // Reload time
          0., //Attack delay, no idea if this is correct
          owning_player) {}

    virtual std::string entity_type() override {
      return "Villager";
    }

    virtual void work(double time) override;

  private:
    // Used to see if the villager has maxed their backpack for the current activity
    bool at_carry_capacity();

    // Goes to the nearest dropoff point to drop off the currently held res
    void drop_off_resources();

    // If able to collect resources, does, otherwise walks to the nearest resource it can collect
    void collect_resources();

    Enums::Resources resource_held{Enums::Resources::NONE};
    double resources_held{0.};

    Enums::VillagerTasks current_task{Enums::VillagerTasks::NONE};

    const double base_carry_capacity{10};
}
