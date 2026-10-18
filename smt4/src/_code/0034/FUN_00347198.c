/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00347198` (_code @ 0x347198, 0xb4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002c2424. */


void FUN_00347198(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  if ((*(unsigned int *)(param_1 + 4) & 0x100) != 0) {
    if ((*(unsigned int *)(param_1 + 4) & 1) != 0 && (param_2 & 1) != 0) {
      FUN_002c2424(*(unsigned int *)(param_1 + 0x30),*(int *)(param_1 + 0xc) * 0xc);
    }
    if ((*(unsigned int *)(param_1 + 4) & 2) != 0 && (param_2 & 2) != 0) {
      FUN_002c2424(*(unsigned int *)(param_1 + 0x34),*(int *)(param_1 + 0xc) << 4);
    }
    if ((*(unsigned int *)(param_1 + 4) & 0x20) != 0 && (param_2 & 0x20) != 0) {
      FUN_002c2424(*(unsigned int *)(param_1 + 0x38),*(int *)(param_1 + 0xc) << 2);
    }
    if ((*(unsigned int *)(param_1 + 4) & 4) != 0 && (param_2 & 4) != 0) {
      FUN_002c2424(*(unsigned int *)(param_1 + 0x3c),*(int *)(param_1 + 0xc) << 3);
    }
    if ((*(unsigned int *)(param_1 + 4) & 0x80) != 0 && (param_2 & 0x80) != 0) {
      FUN_002c2424(*(unsigned int *)(param_1 + 0x48),*(int *)(param_1 + 0x18) << 1);
      return;
    }
  }
  return;
}
