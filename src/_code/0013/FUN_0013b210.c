/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013b210` (_code @ 0x13b210, 0x24 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int FUN_00148350(void);
/* Supplied declaration required: FUN_002bb440. */
/* Supplied declaration required: FUN_002bb648. */
/* Supplied declaration required: FUN_002bb6b8. */
/* Supplied declaration required: FUN_002c14f4. */


void FUN_0013b210(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  FUN_002bb6b8();
  FUN_002bb440();
  temp_v0 = FUN_00148350();
  if (temp_v0 < 0) {
    FUN_002c14f4(temp_v0,0x13b228);
  }
  FUN_002bb648();
  return;
}
