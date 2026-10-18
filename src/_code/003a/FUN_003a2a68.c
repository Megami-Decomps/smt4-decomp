/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a2a68` (_code @ 0x3a2a68, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0022fbc0. */
/* Supplied declaration required: FUN_0022fc8c. */
extern int FUN_0022fc98(void);
extern int FUN_0022fcc8(void);
/* Supplied declaration required: FUN_0022fcf8. */
/* Supplied declaration required: FUN_0022fd54. */
/* Supplied declaration required: FUN_0022fe4c. */
/* Supplied declaration required: FUN_002329dc. */
/* Supplied declaration required: FUN_00232a48. */
/* Supplied declaration required: FUN_002333d4. */
extern int FUN_00256750(void);
extern int FUN_00276550(void);
extern int FUN_0029d8fc(int);


void FUN_003a2a68(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_0022fd54();
  FUN_0022fcf8(param_1);
  temp_v0 = FUN_0022fcc8();
  if ((temp_v0 != 0) || (temp_v0 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4c)), temp_v0 == 6)) {
    *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e020);
    FUN_0022fe4c(param_1,1);
    FUN_0022fc8c();
    return;
  }
  temp_v0 = FUN_0022fc98();
  if ((temp_v0 == 0) && (temp_v0 = FUN_0029d8fc((int)*(short *)(param_1 + 0x15d4e)), temp_v0 != 6)) {
    temp_v0 = FUN_00276550();
    if (temp_v0 != 0) {
      FUN_002333d4(param_1 + 0x3a8,1);
      FUN_002329dc();
      *(unsigned int *)(param_1 + 4) = 0x11;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    else {
      temp_v0 = FUN_00256750();
      if (temp_v0 != 0) {
        FUN_00232a48();
        FUN_0022fbc0(param_1);
        return;
      }
    }
    return;
  }
  *(unsigned int *)(param_1 + 0x864) = *(unsigned int *)(*(int *)(param_1 + 0x864) * 8 + 0x44e024);
  FUN_0022fe4c(param_1,1);
  FUN_0022fc8c();
  return;
}
