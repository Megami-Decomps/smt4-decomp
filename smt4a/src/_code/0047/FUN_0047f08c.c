/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047f08c` (_code @ 0x47f08c, 0x90 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern unsigned int FUN_0014af98(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_001628c0. */
/* Supplied declaration required: FUN_0047e690. */


void FUN_0047f08c(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 == 0x16c) {
    temp_v0 = FUN_0014af98(0x16c,param_2,param_2);
    FUN_001628c0(0x47f12c,temp_v0,2,0);
    return;
  }
  if (param_1 == 0x16d) {
    temp_v0 = FUN_0014af98(0x16d,0,param_2);
    FUN_001628c0(0x47f120,temp_v0,2,0);
    return;
  }
  FUN_0047e690(0xffffffff,param_1);
  return;
}
