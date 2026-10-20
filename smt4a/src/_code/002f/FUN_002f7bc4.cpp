/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7bc4` (_code @ 0x2f7bc4, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001681cc(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001681cc. */
extern int FUN_0018719c(unsigned int);


void FUN_002f7bc4(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (param_1 == 0x13 || param_1 == 0x48) {
    temp_v0 = FUN_0018719c(0x410);
    if (temp_v0 == 0) {
      temp_v1 = 0x15;
    }
    else {
      temp_v1 = 0xe;
    }
    FUN_001681cc(temp_v1);
  }
  if (param_1 == 0x14 || param_1 == 0x49) {
    FUN_001681cc(0xf);
    return;
  }
  if (param_1 == 0x15 || param_1 == 0x4a) {
    FUN_001681cc(0x10);
    return;
  }
  if (param_1 == 0x16 || param_1 == 0x4b) {
    temp_v0 = FUN_0018719c(0x410);
    if (temp_v0 == 0) {
      temp_v1 = 0x16;
    }
    else {
      temp_v1 = 0x11;
    }
    FUN_001681cc(temp_v1);
  }
  if (param_1 == 0x17 || param_1 == 0x4c) {
    FUN_001681cc(0x12);
    return;
  }
  if (param_1 == 0x18 || param_1 == 0x4d) {
    FUN_001681cc(0x13);
    return;
  }
  if (param_1 != 0x19 && param_1 != 0x4e) {
    return;
  }
  FUN_001681cc(0x14);
  return;
}

} /* extern "C" */
