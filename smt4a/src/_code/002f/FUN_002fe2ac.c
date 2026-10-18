/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe2ac` (_code @ 0x2fe2ac, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_002fe2ac(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00163e40(*(unsigned int *)(param_1 + 0x54));
  if (temp_v0 != 0) {
    FUN_001631d0(*(unsigned int *)(param_1 + 0x54),0);
    return;
  }
  return;
}
