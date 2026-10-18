/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273ab0` (_code @ 0x273ab0, 0x124 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049fb6d; /* 0x49fb6d */

extern int FUN_0021e8d0(void);
/* Supplied declaration required: FUN_0025a318. */
/* Supplied declaration required: FUN_00275a18. */
/* Supplied declaration required: FUN_00275e38. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002d1c1c(void);


void FUN_00273ab0(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (DAT_0049fb6d == '\0') {
      DAT_0049fb6d = 1;
      FUN_00275e38();
      FUN_00289ae8();
      FUN_002b8b78(0x90);
      return;
    }
    return;
  }
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
  else {
    temp_v0 = FUN_0021e8d0();
    if (temp_v0 == 0) {
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
  }
  FUN_00275a18();
  return;
}
