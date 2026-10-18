/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cb438` (_code @ 0x2cb438, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_003599e8. */
/* Supplied declaration required: FUN_0035e7a4. */


void FUN_002cb438(int param_1,int param_2,int param_3)

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
    break;
  case 0xc:
    temp_v0 = 9;
  }
  FUN_0035e7a4(temp_v0,param_3 == 0);
  if (param_2 == 9) {
    FUN_00100388(temp_v1,temp_v0,*(unsigned int *)(param_1 + 0x38a0));
    FUN_0019de98(temp_v1,0xf4f4f4ff);
    FUN_003599e8(0x48c722ff,1,0x12);
    return;
  }
  FUN_0019de98();
  return;
}
