/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00441f54` (_code @ 0x441f54, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017145c(void);
int sysFatalBreak(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0017145c. */
/* Supplied declaration required: sysFatalBreak. */


void FUN_00441f54(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  FUN_0017145c();
  temp_v1 = 0;
  if (temp_v0 < 0) {
    temp_v1 = -0x375f3004;
  }
  if (temp_v0 >= 0 || temp_v0 == temp_v1) {
    return;
  }
  sysFatalBreak();
  return;
}

} /* extern "C" */
