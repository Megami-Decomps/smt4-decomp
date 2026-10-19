/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00152530` (_code @ 0x152530, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002b8cc8. */


void FUN_00152530(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  *(unsigned short *)(param_1 + 4) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x34) = 0;
  *(unsigned int *)(param_1 + 0x30) = 0;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x28) = 0;
  *(unsigned int *)(param_1 + 0x38) = *(unsigned int *)(param_2 + 4);
  *(unsigned int *)(param_1 + 0x3c) = *(unsigned int *)(param_2 + 8);
  *(int *)(param_1 + 0x50) = param_2 + 0x10;
  *(unsigned char *)(param_1 + 0x4c) = 2;
  if (0 < *(short *)(param_1 + 0x5a)) {
    temp_v0 = 0;
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0x5a));
  }
  *(unsigned short *)(param_1 + 0x5a) = 0;
  *(unsigned int *)(param_1 + 0x54) = 0xffffffff;
  *(unsigned short *)(param_1 + 0x58) = 0xffff;
  return;
}
