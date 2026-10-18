/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297e30` (_code @ 0x297e30, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00254228. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002e384c. */


void FUN_00297e30(int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [128];
  
  temp_v0 = 0;
  switch(param_2) {
  case 1:
    temp_v0 = 1;
    break;
  case 2:
    temp_v0 = 2;
    break;
  case 3:
    temp_v0 = 4;
    break;
  case 4:
    temp_v0 = 7;
    break;
  case 5:
    temp_v0 = 8;
    break;
  case 7:
    temp_v0 = 3;
    break;
  case 9:
    temp_v0 = 6;
    break;
  case 10:
    temp_v0 = 5;
  }
  FUN_002e384c(temp_v0,param_3 == 0);
  if (param_2 == 9) {
    FUN_002be7fc(temp_v1,temp_v0,*(unsigned int *)(param_1 + 0x306c));
    FUN_0029f10c(temp_v1,0x323232ff);
    FUN_00254228(0xa11923ff,1,0x12);
    return;
  }
  FUN_0029f10c();
  return;
}
