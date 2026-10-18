/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fb2f4` (_code @ 0x2fb2f4, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


unsigned int FUN_002fb2f4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  unsigned int temp_v4;
  
  FUN_002c0ec4(0x23,3);
  temp_v0 = FUN_002c0e4c();
  temp_v4 = 0;
  temp_v0 = *(int *)(DAT_00433158 + 0x3fc) + temp_v0;
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_002c0ec4(0x23,3);
      temp_v2 = FUN_002c0e9c();
      temp_v3 = FUN_002c0e4c(temp_v1);
      if (temp_v4 < temp_v3) {
        piVar5 = (int *)(temp_v2 + temp_v4 * 0x14);
      }
      else {
        piVar5 = (int *)0x0;
        if (temp_v4 < temp_v3 + *(int *)(DAT_00433158 + 0x3fc)) {
          piVar5 = (int *)(*(int *)(DAT_00433158 + 0x400) + (temp_v4 - temp_v3) * 0x14);
        }
      }
      if (*piVar5 == -1) {
        return 0xffffffff;
      }
      if (*piVar5 == param_1) {
        return temp_v4;
      }
      temp_v4 = temp_v4 + 1;
    } while ((int)temp_v4 < temp_v0);
  }
  return 0xffffffff;
}
