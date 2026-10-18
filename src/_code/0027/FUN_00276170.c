/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00276170` (_code @ 0x276170, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002d1c1c(void);


void FUN_00276170(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0049f91c != 0x65) {
    if (DAT_0049f91c < 100) {
      if (DAT_0049f91c == 0x24) {
        FUN_002b8b78(0xd1);
        return;
      }
      temp_v0 = FUN_002c0ba8(0x16);
      if (temp_v0 != 0) {
        FUN_002b8b78(0x3f);
        return;
      }
      FUN_002b8b78(0xd9);
      return;
    }
  }
  else {
    temp_v0 = FUN_002d1c1c();
    if (temp_v0 != 0) {
      FUN_002b8b78(0xde);
      return;
    }
  }
  FUN_002b8b78(0xd0);
  return;
}
