/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022b1f8` (_code @ 0x22b1f8, 0xe4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002931cc(unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002c0ba8(unsigned int);


void FUN_0022b1f8(int param_1)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c0ba8(0x11);
  if (temp_v1 != 0) {
    temp_v1 = FUN_002c0ba8(0x16);
    if (temp_v1 != 0) {
      temp_v1 = FUN_002c0ba8(0x40c);
      if (temp_v1 != 0) {
        temp_v1 = FUN_002931cc(0x76);
        temp_v0 = *(short *)(param_1 + 0x3c);
        if (temp_v1 != 0) {
          if (temp_v0 == 4) {
            FUN_002b8b78(0xe8);
            return;
          }
          if (temp_v0 != 3) {
            FUN_002b8b78(0x43);
            return;
          }
          FUN_002b8b78(0xe9);
          return;
        }
      }
      else {
        temp_v0 = *(short *)(param_1 + 0x3c);
      }
      if (temp_v0 != 4) {
        if (temp_v0 != 3) {
          FUN_002b8b78(0x41);
          return;
        }
        FUN_002b8b78(0xe9);
        return;
      }
    }
    else if (*(short *)(param_1 + 0x3c) != 4) {
      FUN_002b8b78(0xd3);
      return;
    }
  }
  else if (*(short *)(param_1 + 0x3c) != 4) {
    FUN_002b8b78(0x40);
    return;
  }
  FUN_002b8b78(0xe8);
  return;
}
