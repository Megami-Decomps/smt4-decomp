/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00297b94` (_code @ 0x297b94, 0x108 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00253fe8. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002e38c0. */


void FUN_00297b94(int param_1,int param_2,int param_3)

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
  FUN_002e38c0(temp_v0,param_3 == 0);
  if (param_2 == 9) {
    FUN_002be624(temp_v1,temp_v0,*(unsigned int *)(param_1 + 0x306c));
    FUN_0029ee6c(temp_v1,0x323232ff);
    FUN_00253fe8(0xa11923ff,1,0x12);
    return;
  }
  FUN_0029ee6c();
  return;
}
