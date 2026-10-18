/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004e62b4` (_code @ 0x4e62b4, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

extern unsigned int DAT_00571168; /* 0x571168 */
extern unsigned int DAT_0057116c; /* 0x57116c */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */

/* Supplied declaration required: FUN_001568f8. */
extern int FUN_003e8430(int);
/* Supplied declaration required: FUN_003e88d8. */
/* Supplied declaration required: FUN_003f0e20. */
/* Supplied declaration required: FUN_004c3db4. */
/* Supplied declaration required: FUN_004fbc30. */


void FUN_004e62b4(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  
  puVar1 = (unsigned int *)*param_1;
  FUN_003f0e20(puVar1,param_3);
  if (puVar1 != (unsigned int *)0x0) {
    if ((puVar1[1] & DAT_0057117c) == 0 && (*puVar1 & DAT_00571178) == 0) {
      temp_v1 = (unsigned int)*(unsigned short *)(param_2 + param_3 * 0x10 + 0x9e2);
      if ((puVar1[1] & DAT_0057116c) != 0 || (DAT_00571168 & *puVar1) != 0) {
        temp_v0 = *param_1;
        FUN_001568f8(temp_v0,param_3);
        if (temp_v0 != 0) {
          FUN_004c3db4(puVar1);
          FUN_003e88d8(*param_1,(int)*(short *)(temp_v0 + 2));
        }
      }
      temp_v0 = FUN_003e8430(*param_1);
      if (temp_v0 != 0) {
        temp_v1 = param_5 + 0xf;
      }
      FUN_004fbc30(temp_v1,param_2,*(int *)(*param_1 + 0x1ed4) + param_3 * 0x1d0,0);
      return;
    }
  }
  return;
}
