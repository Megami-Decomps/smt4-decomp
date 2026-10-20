/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471748` (_code @ 0x471748, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(void);
int FUN_002e3494(void);

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3494. */
extern int FUN_0046bc7c(int, unsigned int);


void FUN_00471748(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x458) != 0) {
    FUN_002e3494();
    *(unsigned int *)(param_1 + 0x458) = 0;
  }
  if (*(int *)(param_1 + 0x454) != 0) {
    temp_v0 = FUN_0046bc7c(param_1,0x37);
    temp_v1 = 0;
    if (temp_v1 < temp_v0) {
      do {
        if (*(int *)(*(int *)(param_1 + 0x454) + temp_v1 * 0x10) != 0) {
          FUN_0019a5a0();
          *(unsigned int *)(*(int *)(param_1 + 0x454) + temp_v1 * 0x10) = 0;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < temp_v0);
    }
    if (*(int *)(param_1 + 0x454) != 0) {
      FUN_002e3494();
      *(int *)(param_1 + 0x454) = 0;
    }
  }
  *(unsigned int *)(param_1 + 0x45c) = 0;
  return;
}

} /* extern "C" */
