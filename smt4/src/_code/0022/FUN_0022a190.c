/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022a190` (_code @ 0x22a190, 0x128 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_0022a07c. */
/* Supplied declaration required: FUN_0022a11c. */
extern int FUN_0022a2c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00297468. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_00385c58. */


void FUN_0022a190(unsigned int *param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  unsigned char temp_v2 [128];
  
  FUN_002c4938(temp_v1,0x80);
  FUN_002be624(temp_v1,"battle/event/%s/%s.mbm",param_2 + 0x100);
  temp_v0 = FUN_0022a2c4(DAT_00433158,*(unsigned int *)(param_2 + 0xc4));
  if (temp_v0 != 0) {
    FUN_00385c58(DAT_00433158,*(unsigned int *)(param_2 + 0xc4),param_1 + 3,temp_v1);
  }
  else {
    FUN_00297468(temp_v1,param_1 + 3,0);
  }
  *param_1 = 4;
  if (param_1[3] != 0) {
    *param_1 = 5;
    FUN_002c4938(temp_v2,0x80);
    FUN_002be624(temp_v2,"battle/event/%s/%s.bf",param_2 + 0x100);
    temp_v0 = FUN_0022a2c4(DAT_00433158,*(unsigned int *)(param_2 + 0xc4));
    if (temp_v0 != 0) {
      FUN_0022a11c(DAT_00433158,*(unsigned int *)(param_2 + 0xc4),param_1 + 4,temp_v2);
    }
    else {
      FUN_00297468(temp_v2,param_1 + 4,0);
    }
    *param_1 = 6;
    if (param_1[4] != 0) {
      *param_1 = 7;
      FUN_0022a07c(param_1,param_2);
    }
  }
  return;
}
