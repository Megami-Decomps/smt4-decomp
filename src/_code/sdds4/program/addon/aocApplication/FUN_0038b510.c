/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038b510` (_code @ 0x38b510, 0xb4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0023a350. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002bce48. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c3b48. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c54f0. */
extern unsigned int FUN_00352950(void);


void FUN_0038b510(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_0023a350();
    FUN_002b2520();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_002c4360();
    *(int *)(param_1 + 0x5b4) = 0;
  }
  temp_v0 = 0x10000;
  FUN_002c54f0(0x10000,0x100,0,0x20000);
  *(unsigned int *)(param_1 + 0x5b4) = temp_v0;
  FUN_002c3b48();
  if (*(int *)(param_1 + 0x5b4) != 0) {
    temp_v1 = 0x10;
    FUN_002c23f8();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00352950();
    }
    *(unsigned int *)(param_1 + 0x5b0) = temp_v0;
    return;
  }
  FUN_002bce48();
  return;
}
