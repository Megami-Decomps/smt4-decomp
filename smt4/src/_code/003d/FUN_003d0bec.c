/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0bec` (_code @ 0x3d0bec, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ae164. */


void FUN_003d0bec(unsigned int param_1,unsigned int *param_2,int param_3,unsigned int *param_4,unsigned int *param_5)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  FUN_002ae164();
  if (param_3 == 0) {
    return;
  }
  temp_v1 = 1;
  temp_v0 = 0;
  switch((*(unsigned int *)(param_3 + 0x28) & 0x1ff) >> 5) {
  case 0:
    if ((*param_2 & 0x10) != 0) {
      temp_v1 = 0;
    }
    *param_4 = temp_v1;
    *param_5 = temp_v0;
    return;
  case 1:
    temp_v1 = *param_2;
    break;
  case 2:
    temp_v2 = *param_2;
    temp_v1 = 1;
    if ((temp_v2 & 0x10) == 0) {
      temp_v1 = temp_v0;
    }
    *param_4 = temp_v1;
    *param_5 = temp_v0;
    return;
  case 3:
    temp_v1 = *param_2;
    goto joined_r0x003d0d10;
  case 4:
    temp_v2 = *param_2;
    temp_v1 = 1;
    if ((temp_v2 & 0x10) == 0) {
      temp_v1 = temp_v0;
    }
    *param_4 = temp_v1;
    *param_5 = temp_v0;
    return;
  case 5:
    temp_v0 = 2;
    *param_5 = temp_v0;
    return;
  case 6:
    temp_v1 = *param_2;
    break;
  case 7:
    *param_4 = (unsigned int)((*param_2 & 0x10) != 0);
    *param_5 = 0;
    return;
  case 8:
    temp_v1 = *param_2;
joined_r0x003d0d10:
    if ((temp_v1 & 0x10) != 0) {
      temp_v0 = 1;
    }
    *param_4 = temp_v0;
    *param_5 = 1;
    return;
  default:
    return;
  }
  temp_v0 = 0;
  if ((temp_v1 & 0x10) == 0) {
    temp_v0 = 1;
  }
  *param_4 = temp_v0;
  *param_5 = 1;
  return;
}
