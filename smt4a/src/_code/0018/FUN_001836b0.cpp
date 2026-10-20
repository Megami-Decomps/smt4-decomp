/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001836b0` (_code @ 0x1836b0, 0xb0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */


void FUN_001836b0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_1 + 0x8c);
  while (temp_v0 != 0) {
    temp_v2 = *(int *)(temp_v0 + 0xac);
    if ((*(unsigned int *)(temp_v0 + 0x98) & 1) == 0) {
      temp_v1 = *(int *)(temp_v0 + 0x90);
      if (*(int *)(temp_v1 + 8) != 0) {
        (**(romwright_code **)((unsigned int)*(unsigned short *)(temp_v1 + 4) * 0x44 + 0x5b3284))();
      }
      if (*(int *)(temp_v1 + 0x18) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v1 + 0x10) = 0;
        *(unsigned int *)(temp_v1 + 0x14) = 0;
        *(unsigned int *)(temp_v1 + 0x18) = 0;
      }
      if (*(int *)(temp_v1 + 0x28) != 0) {
        FUN_0019a5a0();
        *(unsigned int *)(temp_v1 + 0x20) = 0;
        *(unsigned int *)(temp_v1 + 0x24) = 0;
        *(unsigned int *)(temp_v1 + 0x28) = 0;
      }
      FUN_0019a5a0(temp_v1);
    }
    FUN_0019a5a0(temp_v0);
    temp_v0 = temp_v2;
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
