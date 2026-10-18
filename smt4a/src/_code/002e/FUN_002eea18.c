/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eea18` (_code @ 0x2eea18, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002eea58; /* 0x2eea58 */

extern int FUN_001107e4(unsigned int);
/* Supplied declaration required: FUN_001107fc. */
extern int FUN_002e784e(int, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002f9f12. */


void FUN_002eea18(int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*param_1 != 0) {
    FUN_002f9f12();
  }
  temp_v0 = FUN_001107e4(param_2);
  param_1[1] = temp_v0;
  temp_v0 = FUN_002e784e(temp_v0,&LAB_002eea58,0);
  *param_1 = temp_v0;
  FUN_001107fc(param_2,temp_v0,param_1[1]);
  if (param_3 != 0) {
    *(unsigned char *)((*param_1 + param_1[1]) - 1) = 0;
  }
  return;
}
