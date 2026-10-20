/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039bbd4` (_code @ 0x39bbd4, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025a0e0(void);
int FUN_00275f00(void);
int FUN_00289880(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_00275f00. */
/* Supplied declaration required: FUN_00289880. */
extern int FUN_002c09d0(unsigned int);


void FUN_0039bbd4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0049fb6d != '\0') {
    DAT_0049fb6d = '\0';
    temp_v0 = FUN_002c09d0(0x16);
    if (temp_v0 != 0) {
      FUN_0025a0e0();
    }
    else {
      FUN_00289880();
    }
  }
  FUN_00275f00();
  return;
}

} /* extern "C" */
