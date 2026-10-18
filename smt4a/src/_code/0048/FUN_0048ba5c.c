/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048ba5c` (_code @ 0x48ba5c, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_00184758. */


void FUN_0048ba5c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned int *)(param_1 + 0x12d4) = 0;
  *(unsigned int *)(param_1 + 0x12d8) = 0;
  *(unsigned char *)(param_1 + 0x12d0) = 1;
  *(unsigned char *)(param_1 + 0x12d1) = 0;
  *(unsigned char *)(param_1 + 0x12d2) = 0;
  FUN_0014e220(param_1 + 0x12dc,0x13,0x1121,0x1d,param_1 + 0xc20,0x15);
  FUN_00184758(param_1 + 0x12dc,5,0);
  return;
}
