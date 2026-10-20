/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001398c0` (_code @ 0x1398c0, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c52f8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00128d98(void);
/* Supplied declaration required: FUN_002c52f8. */


void FUN_001398c0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00128d98();
  if (temp_v0 < 0) {
    FUN_002c52f8();
    return;
  }
  return;
}

} /* extern "C" */
