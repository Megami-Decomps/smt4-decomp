/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00292dd0` (_code @ 0x292dd0, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00435d90; /* 0x435d90 */

extern int FUN_00292f28(unsigned int);
/* Supplied declaration required: FUN_002b8838. */
extern int FUN_002c09d0(unsigned int);


void FUN_00292dd0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((*(unsigned int *)(DAT_00435d90 + 0x44a0) & 0x1004) != 0) {
    temp_v0 = FUN_002c09d0(0x525);
    if (temp_v0 != 0) {
      FUN_002b8838(0xe4);
      return;
    }
    temp_v0 = FUN_00292f28(0x10);
    if (temp_v0 != 0) {
      FUN_002b8838(0xb3);
      return;
    }
    FUN_002b8838(0xb4);
    return;
  }
  temp_v0 = FUN_002c09d0(0x525);
  if (temp_v0 != 0) {
    FUN_002b8838(0xe5);
    return;
  }
  temp_v0 = FUN_00292f28(0x10);
  if (temp_v0 == 0) {
    temp_v0 = FUN_00292f28(0x7f);
    if (temp_v0 == 0) {
      if (param_1 != 0) {
        FUN_002b8838(199);
        return;
      }
      FUN_002b8838(0xad);
      return;
    }
    if (param_1 != 0) {
      FUN_002b8838(0x36);
      return;
    }
    FUN_002b8838(0x37);
    return;
  }
  temp_v0 = FUN_00292f28(0x7f);
  if (temp_v0 == 0) {
    if (param_1 != 0) {
      FUN_002b8838(0xc6);
      return;
    }
    FUN_002b8838(0xac);
    return;
  }
  if (param_1 != 0) {
    FUN_002b8838(0x34);
    return;
  }
  FUN_002b8838(0x35);
  return;
}
