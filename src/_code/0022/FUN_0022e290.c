/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022e290` (_code @ 0x22e290, 0x58 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char DAT_004022d4; /* 0x4022d4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002b7f0a. */
/* Supplied declaration required: FUN_002bcf58. */


void FUN_0022e290(short *param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int unaff_r6;
  unsigned char temp_v2;
  unsigned int temp_v3 [34];
  
  temp_v1 = (int)(char)param_1[0x5002];
  temp_v2 = SBORROW4(temp_v1,param_2);
  temp_v0 = temp_v1 - param_2;
  if (temp_v1 != param_2) {
    unaff_r6 = (int)*param_1;
    temp_v2 = SBORROW4(unaff_r6,1);
    temp_v0 = unaff_r6 - 1;
  }
  if ((temp_v1 != param_2 && unaff_r6 != 1) && temp_v0 < 0 == temp_v2) {
    *(char *)(param_1 + 0x5002) = (char)param_2;
    FUN_002bcf58(temp_v3,&DAT_004022d4,0x88);
    FUN_002b7f0a(param_1 + 2,unaff_r6,0x20,temp_v3[param_2]);
  }
  return;
}
