/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a734` (_code @ 0x43a734, 0x1c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0043aab4(void);


void FUN_0043a734(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0043aab4();
  if (temp_v0 < 0) {
    FUN_00195fc8();
    return;
  }
  return;
}

} /* extern "C" */
