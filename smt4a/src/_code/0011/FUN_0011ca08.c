/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011ca08` (_code @ 0x11ca08, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
} param_2_stack;

/* Supplied declaration required: FUN_002e75fa. */
/* Supplied declaration required: FUN_002eb588. */
/* Supplied declaration required: FUN_002f2da0. */
/* Supplied declaration required: FUN_002f2dec. */


void FUN_0011ca08(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [4];
  int temp_v4;
  unsigned int temp_v5;
  
  FUN_002e75fa(param_2);
  if ((*(int *)(param_2 + 0x20) == 0) && (*(int *)(param_2 + 0x1c) == 0)) {
    temp_v1 = param_2;
    temp_v0 = FUN_002f2dec(param_1 + 4,&temp_v1);
    if (temp_v0 == 0) {
      temp_v2 = param_2;
      FUN_002f2da0(temp_v3,param_1,&temp_v2);
    }
  }
  else {
    temp_v2 = param_2;
    FUN_002f2da0(temp_v3,param_1,&temp_v2);
  }
  temp_v0 = FUN_002f2dec(param_1 + 4,param_1 + 0xc);
  if (temp_v0 != 0) {
    *(unsigned int *)(param_2 + 0x1c) = *(unsigned int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 0x20) = param_2;
    *(int *)(param_1 + 4) = param_2;
  }
  else {
    *(int *)(param_1 + 4) = param_2;
    *(int *)(param_1 + 8) = param_2;
  }
  *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
  FUN_002eb588(&temp_v4);
  *(unsigned int *)(param_2 + 0x110) = temp_v4;
  *(unsigned int *)(param_2 + 0x114) = temp_v5;
  return;
}
