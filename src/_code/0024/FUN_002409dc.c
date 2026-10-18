/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002409dc` (_code @ 0x2409dc, 0xdc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0023f56c. */
/* Supplied declaration required: FUN_0023f65c. */
/* Supplied declaration required: FUN_0023f8f8. */
/* Supplied declaration required: FUN_0023fc3c. */


void FUN_002409dc(unsigned int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(unsigned int *)(param_2 + 0x44a0) & 0x20) != 0) {
    FUN_0023f56c(param_2,1,1,0);
  }
  else {
    FUN_0023f56c(param_2,1,1);
  }
  *param_1 = 8;
  temp_v0 = param_2;
  FUN_0023fc3c(param_2,1);
  if (temp_v0 != 0) {
    FUN_0023f8f8(param_2,0x400);
    temp_v0 = 4;
    do {
      temp_v1 = *(unsigned int *)(*(int *)(param_2 + 0x1e98) + temp_v0 * 0x114 + 0x50);
      if (((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && (temp_v1 & 0x400) != 0) {
        *(char *)(param_2 + 0x1e9d) = *(char *)(param_2 + 0x1e9d) + '\x01';
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x36);
    *param_1 = 10;
    FUN_0023f65c(param_1,param_2);
    return;
  }
  return;
}
