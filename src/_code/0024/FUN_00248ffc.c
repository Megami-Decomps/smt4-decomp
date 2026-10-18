/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00248ffc` (_code @ 0x248ffc, 0xe0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002c0e4c. */
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */


unsigned int FUN_00248ffc(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  FUN_002c0ec4(0x23,0);
  temp_v0 = FUN_002c0e4c();
  if (0 < temp_v0 + *(int *)(DAT_00433158 + 0x3e4)) {
    do {
      temp_v1 = FUN_002c0ec4(0x23,0);
      temp_v0 = FUN_002c0e9c();
      temp_v2 = FUN_002c0e4c(temp_v1);
      if (temp_v3 < temp_v2) {
        piVar4 = (int *)(temp_v0 + temp_v3 * 0x20);
      }
      else {
        piVar4 = (int *)0x0;
        if (temp_v3 < temp_v2 + *(int *)(DAT_00433158 + 0x3e4)) {
          piVar4 = (int *)(*(int *)(DAT_00433158 + 1000) + (temp_v3 - temp_v2) * 0x20);
        }
      }
      if ((char)piVar4[2] == -1) {
        return 0xffffffff;
      }
      if (*piVar4 == param_1) {
        return temp_v3;
      }
      temp_v3 = temp_v3 + 1;
      FUN_002c0ec4(0x23,0);
      temp_v0 = FUN_002c0e4c();
    } while ((int)temp_v3 < temp_v0 + *(int *)(DAT_00433158 + 0x3e4));
  }
  return 0xffffffff;
}
