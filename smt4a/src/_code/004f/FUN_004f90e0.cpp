/* NON_MATCHING: retail retains an unused incoming-r1 save and redundant always-true flag updates; reproducing these would require banned dead-code steering. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);

/* Supplied declaration required: btlGetMainState. */


unsigned int FUN_004f90e0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  while (temp_v0 = temp_v0 + 1, temp_v0 < 0x6d) {
    if (temp_v0 >= 4) {
      btlGetMainState();
    }
  }
  return 1;
}

} /* extern "C" */
