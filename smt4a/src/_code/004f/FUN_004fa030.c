/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fa030` (_code @ 0x4fa030, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00573804; /* 0x573804 */

/* Supplied declaration required: FUN_0014aa78. */
/* Supplied declaration required: FUN_0030ea58. */
extern int FUN_003e8430(void);


int FUN_004fa030(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  
  FUN_0014aa78();
  temp_v0 = FUN_003e8430();
  if ((temp_v0 == 0) && (piVar3 = (int *)(param_1 + 0x1f58), *piVar3 != 0)) {
    temp_v0 = 0;
    do {
      temp_v1 = *piVar3 + temp_v0 * 0x16;
      if ((temp_v1 != 0) && (FUN_0030ea58(temp_v1,DAT_00573804), temp_v1 == 0)) {
        temp_v0 = *piVar3 + temp_v0 * 0x16;
        if (temp_v0 != 0) {
          return (int)*(short *)(temp_v0 + 0x10);
        }
        return -1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
  }
  return -1;
}
