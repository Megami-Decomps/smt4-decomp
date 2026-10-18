/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003dde9c` (_code @ 0x3dde9c, 0x80 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00434290; /* 0x434290 */

/* Supplied declaration required: FUN_00226b2c. */


void FUN_003dde9c(short param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  int *piVar1;
  unsigned char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int in_s0;
  
  temp_v0 = 0;
  temp_v1 = *(int *)(DAT_00434290 + 8);
  if (*(int *)(DAT_00434290 + 8) != 0) {
    do {
      piVar1 = (int *)(temp_v1 + 0xc);
      temp_v2 = *(char *)(temp_v1 + 4) == '\r';
      if (temp_v2) {
        temp_v1 = *(int *)(temp_v1 + 8);
      }
      if (temp_v2 && temp_v1 == param_2) {
        temp_v0 = 1;
      }
      temp_v1 = *piVar1;
    } while (*piVar1 != 0);
    if (temp_v0) {
      return;
    }
  }
  temp_v1 = DAT_00434290;
  FUN_00226b2c(DAT_00434290,(int)param_1,0,param_2);
  *(unsigned int *)(temp_v1 + 0x28) = param_3;
  *(unsigned char *)(temp_v1 + 4) = 0xd;
  *(unsigned int *)(temp_v1 + 0x30) = in_s0;
  return;
}
