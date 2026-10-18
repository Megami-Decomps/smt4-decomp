/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00307140` (_code @ 0x307140, 0x7a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern unsigned char DAT_0055a400; /* 0x55a400 */

/* Supplied declaration required: FUN_0013285c. */
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002f67bc. */
/* Supplied declaration required: FUN_003071c0. */


void FUN_00307140(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int temp_v1;
  int temp_v2;
  int uStack_18;
  
  *param_1 = (unsigned int)&DAT_0055a400;
  temp_v1 = *(unsigned int *)(param_1[0x14] + 8);
  temp_v2 = param_1[0x14];
  uStack_18 = param_4;
  FUN_003071c0(&uStack_18,param_1 + 0x10,&temp_v1,&temp_v2);
  param_1 = param_1 + 0x18;
  FUN_0013285c();
  piVar3 = (int *)(param_1 + -8);
  temp_v0 = param_1[-4];
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned int *)(temp_v0 + 8);
    temp_v2 = temp_v0;
    FUN_003071c0(&uStack_18,piVar3,&temp_v1,&temp_v2);
    temp_v0 = param_1[-4];
    *(unsigned int *)(temp_v0 + 0xc) = param_1[-7];
    param_1[-7] = temp_v0;
    while (piVar2 = (int *)*piVar3, piVar2 != (int *)0x0) {
      *piVar3 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
  }
  FUN_002f67bc(param_1 + -0x18);
  return;
}
