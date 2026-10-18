/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00273840` (_code @ 0x273840, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_0049f91c; /* 0x49f91c */
extern signed char DAT_0049fb6d; /* 0x49fb6d */

/* Supplied declaration required: FUN_0025a0e0. */
/* Supplied declaration required: FUN_002757a8. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002c09d0(unsigned int);
extern int FUN_002d1cc8(void);
extern int NaviMain_IsMapOpen(void);


void FUN_00273840(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  if (param_1 != 0) {
    if (DAT_0049fb6d == '\0') {
      DAT_0049fb6d = 1;
      FUN_00275bc8();
      FUN_00289880();
      FUN_002b8838(0x90);
      return;
    }
    return;
  }
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
  else {
    temp_v0 = NaviMain_IsMapOpen();
    if (temp_v0 == 0) {
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
  }
  FUN_002757a8();
  return;
}
