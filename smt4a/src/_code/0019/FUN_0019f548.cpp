/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f548` (_code @ 0x19f548, 0x12c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad6d8(void);
int FUN_001aea28(unsigned int, unsigned int);
int FUN_001aeafc(unsigned int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001ad6d8. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_001aeafc. */


void FUN_0019f548(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_001aeafc(DAT_0056fcc0);
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x18) + 4));
    if (*(int **)(param_1 + 0x18) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x18) + 4))();
      *(unsigned int *)(param_1 + 0x18) = 0;
    }
  }
  temp_v0 = 0;
  do {
    temp_v1 = param_1 + temp_v0 * 4;
    if (*(int *)(temp_v1 + 0x24) != 0) {
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v1 + 0x24) + 4));
      if (*(int **)(temp_v1 + 0x24) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v1 + 0x24) + 4))();
        *(unsigned int *)(temp_v1 + 0x24) = 0;
      }
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 10);
  *(unsigned int *)(param_1 + 0x4c) = 0xffffffff;
  if (*(int *)(param_1 + 0x1c) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4));
    if (*(int **)(param_1 + 0x1c) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x1c) + 4))();
      *(unsigned int *)(param_1 + 0x1c) = 0;
    }
  }
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0x20) + 4));
    if (*(int **)(param_1 + 0x20) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0x20) + 4))();
      *(unsigned int *)(param_1 + 0x20) = 0;
    }
  }
  if (*(int **)(param_1 + 0x594) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(param_1 + 0x594) + 4))();
    *(unsigned int *)(param_1 + 0x594) = 0;
  }
  *(unsigned int *)(param_1 + 0x598) = 0xffffffff;
  FUN_001ad6d8();
  return;
}

} /* extern "C" */
