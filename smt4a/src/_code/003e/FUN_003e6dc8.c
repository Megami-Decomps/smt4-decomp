/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6dc8` (_code @ 0x3e6dc8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00571508; /* 0x571508 */

extern int FUN_0013def0(unsigned int);
extern unsigned int FUN_0014aa78(void);
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_00290ba4. */
/* Supplied declaration required: FUN_002ce874. */
/* Supplied declaration required: FUN_002fe2ac. */
/* Supplied declaration required: FUN_00321744. */
/* Supplied declaration required: FUN_003d9164. */
/* Supplied declaration required: FUN_003f14a0. */


int FUN_003e6dc8(unsigned int *param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = 0;
  if (param_1[4] != 0) {
    temp_v0 = param_1[6];
  }
  if (param_1[4] != 0 && temp_v0 != 0) {
    temp_v0 = FUN_0013def0(0);
    if ((temp_v0 == 3) && (temp_v0 = FUN_0013def0(1), temp_v0 == 3)) {
      temp_v1 = FUN_0014aa78();
      FUN_003f14a0();
      FUN_00321744();
      FUN_002fe2ac(temp_v1);
      FUN_002ce874(temp_v1);
      FUN_00290ba4(temp_v1);
      if (DAT_00571508 != 0) {
        FUN_003d9164();
      }
      param_1[3] = 0;
      *param_1 = 6;
      temp_v0 = param_1[4];
      FUN_00275bc8(temp_v0,param_1[6]);
      param_1[5] = temp_v0;
      *(unsigned int *)(temp_v0 + 0x108) = 1;
      FUN_00275f44(param_1[5],0);
      FUN_00275f44(param_1[5],4);
      param_1[3] = 1;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}
