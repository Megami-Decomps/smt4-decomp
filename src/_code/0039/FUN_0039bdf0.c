/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bdf0` (_code @ 0x39bdf0, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_0025a318. */
/* Supplied declaration required: FUN_00276170. */
/* Supplied declaration required: FUN_00289ae8. */
extern int FUN_002c0ba8(unsigned int);


void FUN_0039bdf0(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0049fb6d != '\0') {
    DAT_0049fb6d = '\0';
    temp_v0 = FUN_002c0ba8(0x16);
    if (temp_v0 != 0) {
      FUN_0025a318();
    }
    else {
      FUN_00289ae8();
    }
  }
  FUN_00276170();
  return;
}
