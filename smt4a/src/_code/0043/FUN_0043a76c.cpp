/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0043a76c` (_code @ 0x43a76c, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc8(void);

/* Supplied declaration required: FUN_00195fc8. */
extern int FUN_0043ab20(void);


int FUN_0043a76c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_0043ab20();
  if (temp_v0 != -0x36bfafff) {
    if (temp_v0 < 0) {
      FUN_00195fc8();
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
