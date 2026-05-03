#include "unit.h"


void Unit::work(double time) {
  reload_time_remaining -= time;
  attack_delay_remaining -= time;

  if (x != destination_x || y != destination_y) {
    // TODO calculate movement vector and apply the magnitude from the move_speed function to move towards object
  }

}
