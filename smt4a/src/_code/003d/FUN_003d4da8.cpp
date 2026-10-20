/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d4da8` (_code @ 0x3d4da8, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0021c120(unsigned int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_0021c120. */


void FUN_003d4da8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    FUN_0021c120(0xffffffff,0xf,0);
    return;
  }
  return;
}

} /* extern "C" */
