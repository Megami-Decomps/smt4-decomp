/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273958` (_code @ 0x273958, 0xec bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00273a44; /* 0x273a44 */
extern unsigned char LAB_00273a5c; /* 0x273a5c */

extern int FUN_0019dfbc(int);
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_00290374. */
/* Supplied declaration required: FUN_00290410. */
extern unsigned int FUN_00290694(void);
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297704. */


unsigned int FUN_00273958(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = FUN_0019dfbc(param_1[5]);
        if (temp_v0 != 2) {
          return 0;
        }
        temp_v1 = FUN_00290694();
        FUN_00290410(temp_v1,0);
        FUN_00290374();
        FUN_00289770();
        *param_1 = 4;
        return 0;
      }
      if (temp_v0 != 4) {
        return 0;
      }
      return 1;
    }
    temp_v0 = param_1[3];
    if (temp_v0 == 0) {
      return 0;
    }
    if (param_1[4] == 0) {
      return 0;
    }
    FUN_002972f8();
    param_1[5] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    FUN_002971e4(param_1[5],param_1[1]);
    temp_v0 = 2;
  }
  else {
    FUN_00297704(&LAB_00273a44,param_1 + 3,0);
    FUN_00297704(&LAB_00273a5c,param_1 + 4,0);
    temp_v0 = 1;
  }
  *param_1 = temp_v0;
  return 0;
}
