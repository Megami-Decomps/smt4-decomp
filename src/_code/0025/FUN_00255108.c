/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00255108` (_code @ 0x255108, 0x90 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_00255198. */


void FUN_00255108(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  
  if (*(short *)(param_1 + 0x2f1e) < 0) {
    FUN_00255198(param_1);
    return;
  }
  do {
    temp_v0 = *(short *)(param_1 + 0x2f1e) + 1;
    *(short *)(param_1 + 0x2f1e) = temp_v0;
    if (temp_v0 >= 0xc) {
      FUN_00255198(param_1);
      break;
    }
  } while (*(short *)(param_1 + temp_v0 * 2 + 0x2f06) < 0);
  if (*(short *)(param_1 + 0x2f1e) >= 0) {
    temp_v1 = *(unsigned short *)(param_1 + *(short *)(param_1 + 0x2f1e) * 2 + 0x2f06);
  }
  else {
    temp_v1 = 0xffff;
    *(unsigned short *)(param_1 + 0x2f1e) = 0;
  }
  *(unsigned short *)(param_1 + 0x1fc8) = temp_v1;
  return;
}
