/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001db28c` (_code @ 0x1db28c, 0xa8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

/* Supplied declaration required: FUN_002b7584. */
/* Supplied declaration required: FUN_002b761c. */
/* Supplied declaration required: FUN_002b7aa8. */
/* Supplied declaration required: FUN_002bc0b4. */


void FUN_001db28c(char *param_1,int param_2)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2; 7 native warning(s); review required */
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int temp_v0;
  unsigned int in_s2;
  
  *(unsigned int *)(param_1 + 0x28) = in_s0;
  *(unsigned int *)(param_1 + 0x2c) = in_s1;
  if (param_2 == 0) {
    temp_v0 = 0x3fd55555;
  }
  else {
    temp_v0 = 0x3faaaaab;
  }
  *(unsigned int *)(param_1 + 0x30) = in_s2;
  *(unsigned int *)(param_1 + 0x34) = temp_v0;
  FUN_002b761c(param_1 + 0xa8);
  FUN_002bc0b4(param_1 + 0xa8,1);
  FUN_002b7aa8(param_1 + 0x158,param_1 + 0xa8);
  FUN_002b761c(param_1 + 0xe8);
  FUN_002bc0b4(param_1 + 0xe8,0);
  if (*param_1 == '\0') {
    return;
  }
  FUN_002b7584(param_1 + 0x4a0,param_1 + 0xe8);
  return;
}
