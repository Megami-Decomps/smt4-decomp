/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e892c` (_code @ 0x3e892c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_003f26d4. */


void FUN_003e892c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  
  if (*(short *)(param_1 + 0x301e) < 0) {
    FUN_003f26d4(param_1);
    return;
  }
  do {
    temp_v0 = *(short *)(param_1 + 0x301e) + 1;
    *(short *)(param_1 + 0x301e) = temp_v0;
    if (temp_v0 >= 0xc) {
      FUN_003f26d4(param_1);
      break;
    }
  } while (*(short *)(param_1 + temp_v0 * 2 + 0x3006) < 0);
  if (*(short *)(param_1 + 0x301e) >= 0) {
    temp_v1 = *(unsigned short *)(param_1 + *(short *)(param_1 + 0x301e) * 2 + 0x3006);
  }
  else {
    temp_v1 = 0xffff;
    *(unsigned short *)(param_1 + 0x301e) = 0;
  }
  *(unsigned short *)(param_1 + 0x2004) = temp_v1;
  return;
}
