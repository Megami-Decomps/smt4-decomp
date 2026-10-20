/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001fe1a0` (_code @ 0x1fe1a0, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00384ad8(void);

/* Supplied declaration required: FUN_00384ad8. */


unsigned int FUN_001fe1a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(char *)(temp_v1 + 0x19);
  if ((temp_v0 == '\x01' || temp_v0 == '\x03') || temp_v0 == '\x04') {
    temp_v2 = 0;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x1c);
    }
    if (temp_v1 != 0 && temp_v2 != 0) {
      FUN_00384ad8();
    }
  }
  return 0;
}

} /* extern "C" */
