/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fbb4` (_code @ 0x47fbb4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);

/* Supplied declaration required: FUN_00192550. */


unsigned int FUN_0047fbb4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = param_1 - 1;
  temp_v3 = temp_v1 >= 0x3b;
  temp_v2 = temp_v1 == 0x3b;
  if (temp_v1 >= 0x3c) {
    temp_v3 = param_1 - 0x79fU >= 0x3f;
    temp_v2 = param_1 - 0x79fU == 0x3f;
  }
  if ((temp_v3 && !temp_v2) ||
     (FUN_00192550(), *(char *)(param_1 + 0x41) != '\x02' && *(char *)(param_1 + 0x41) != '\x03')) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}

} /* extern "C" */
