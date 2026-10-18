/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032c8d0` (_code @ 0x32c8d0, 0x2c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00292310. */
extern int FUN_002c583c(unsigned int);


void FUN_0032c8d0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    FUN_00292310(0xffffffff,0xf,0);
    return;
  }
  return;
}
