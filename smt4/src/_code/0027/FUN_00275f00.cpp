/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00275f00` (_code @ 0x275f00, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8838(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0049f91c; /* 0x49f91c */

/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_002d1cc8(void);


void FUN_00275f00(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (DAT_0049f91c != 0x65) {
    if (DAT_0049f91c < 100) {
      if (DAT_0049f91c == 0x24) {
        FUN_002b8838(0xd1);
        return;
      }
      temp_v0 = FUN_002c09d0(0x16);
      if (temp_v0 != 0) {
        FUN_002b8838(0x3f);
        return;
      }
      FUN_002b8838(0xd9);
      return;
    }
  }
  else {
    temp_v0 = FUN_002d1cc8();
    if (temp_v0 != 0) {
      FUN_002b8838(0xde);
      return;
    }
  }
  FUN_002b8838(0xd0);
  return;
}

} /* extern "C" */
