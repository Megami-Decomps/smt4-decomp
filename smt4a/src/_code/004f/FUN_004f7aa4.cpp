/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004f7aa4` (_code @ 0x4f7aa4, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ea58(int, unsigned int);

extern unsigned int DAT_005737f4; /* 0x5737f4 */
extern unsigned int DAT_005737f8; /* 0x5737f8 */

/* Supplied declaration required: FUN_0030ea58. */


int FUN_004f7aa4(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  piVar4 = (int *)(param_1 + 0x1f54);
  if (*piVar4 != 0) {
    temp_v2 = 0;
    if (0 < param_2) {
      do {
        temp_v0 = *piVar4 + temp_v2 * 0x16 + 0x108;
        FUN_0030ea58(temp_v0,DAT_005737f8);
        if (temp_v0 == 0) {
          return *piVar4 + temp_v2 * 0x16 + 0x108;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 4);
    }
    temp_v2 = 0;
    do {
      temp_v0 = *piVar4 + temp_v2 * 0x16 + 0x108;
      if ((temp_v0 != 0) &&
         ((temp_v1 = temp_v0, FUN_0030ea58(temp_v0,DAT_005737f4), temp_v1 == 0 ||
          (FUN_0030ea58(temp_v0,DAT_005737f8), temp_v0 == 0)))) {
        return *piVar4 + temp_v2 * 0x16 + 0x108;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}

} /* extern "C" */
