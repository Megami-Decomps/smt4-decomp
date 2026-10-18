/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002736e8` (_code @ 0x2736e8, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002737d4; /* 0x2737d4 */
extern unsigned char LAB_002737ec; /* 0x2737ec */

extern int FUN_0019e0c0(int);
/* Supplied declaration required: FUN_00289508. */
/* Supplied declaration required: FUN_002900d0. */
/* Supplied declaration required: FUN_0029016c. */
extern unsigned int FUN_002903f0(void);
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_00297468. */


unsigned int FUN_002736e8(int *param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = *param_1;
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 == 2) {
        temp_v0 = FUN_0019e0c0(param_1[5]);
        if (temp_v0 != 2) {
          return 0;
        }
        temp_v1 = FUN_002903f0();
        FUN_0029016c(temp_v1,0);
        FUN_002900d0();
        FUN_00289508();
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
    FUN_00297060();
    param_1[5] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    FUN_00296f4c(param_1[5],param_1[1]);
    temp_v0 = 2;
  }
  else {
    FUN_00297468(&LAB_002737d4,param_1 + 3,0);
    FUN_00297468(&LAB_002737ec,param_1 + 4,0);
    temp_v0 = 1;
  }
  *param_1 = temp_v0;
  return 0;
}
