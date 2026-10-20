/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047b1e4` (_code @ 0x47b1e4, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);


void FUN_0047b1e4(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00163e40(param_1[0x5e5]);
  if (temp_v0 != 0) {
    *param_1 = *param_1 & 0xfffffcff;
    FUN_001631d0(param_1[0x5e5],0);
    return;
  }
  return;
}

} /* extern "C" */
