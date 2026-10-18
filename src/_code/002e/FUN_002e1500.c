/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1500` (_code @ 0x2e1500, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002b94b8. */
extern int FUN_002b96f0(void);
/* Supplied declaration required: FUN_002bd730. */


int FUN_002e1500(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b96f0();
  if (temp_v0 != 0) {
    FUN_002b94b8();
    if (*(int *)(temp_v0 + 8) != 0) {
      *(unsigned int *)(*(int *)(temp_v0 + 8) + 8) = 0x30000;
      *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 0x40;
      if (*(int *)(temp_v0 + 8) != 0) {
        FUN_002bd730();
        *(unsigned int *)(temp_v0 + 0x10) = *(unsigned int *)(temp_v0 + 0x10) | 4;
      }
    }
  }
  return temp_v0;
}
