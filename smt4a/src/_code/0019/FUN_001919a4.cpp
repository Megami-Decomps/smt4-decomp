/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001919a4` (_code @ 0x1919a4, 0x240 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001695a0(void);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_0019de98(int, unsigned int);
int FUN_0019e2dc(void);
int FUN_0019ea64(int);
int FUN_0019f548(void);
int FUN_001a6500(int);
int FUN_001add1c(int);
int FUN_001aea28(unsigned int, unsigned int);
int FUN_001aeafc(unsigned int);
int FUN_002e3328(int);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0019e2dc. */
/* Supplied declaration required: FUN_0019ea64. */
/* Supplied declaration required: FUN_0019f548. */
/* Supplied declaration required: FUN_001a6500. */
/* Supplied declaration required: FUN_001add1c. */
/* Supplied declaration required: FUN_001aea28. */
/* Supplied declaration required: FUN_001aeafc. */
/* Supplied declaration required: FUN_002e3328. */


void FUN_001919a4(int param_1)

{
/* irregular: 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_0019e2dc();
  FUN_001add1c(param_1 + 0x19);
  FUN_001a6500(param_1 + 0x19);
  if (*(int *)(param_1 + 0xcdc) != 0) {
    FUN_0019f548();
    if (*(int *)(param_1 + 0xcdc) != 0) {
      FUN_002e3328(*(int *)(param_1 + 0xcdc));
    }
    *(unsigned int *)(param_1 + 0xcdc) = 0;
  }
  FUN_001aeafc(DAT_0056fcc0);
  if (*(int *)(param_1 + 0xce8) != 0) {
    FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(param_1 + 0xce8) + 4));
    if (*(int **)(param_1 + 0xce8) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(param_1 + 0xce8) + 4))();
      *(unsigned int *)(param_1 + 0xce8) = 0;
    }
  }
  temp_v0 = 0;
  if (temp_v0 < *(int *)(param_1 + 0xabc)) {
    do {
      temp_v1 = param_1 + temp_v0 * 4;
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v1 + 0xa10) + 4));
      if (*(int **)(temp_v1 + 0xa10) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v1 + 0xa10) + 4))();
        *(unsigned int *)(temp_v1 + 0xa10) = 0;
      }
      FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v1 + 0xa34) + 4));
      if (*(int **)(temp_v1 + 0xa34) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(temp_v1 + 0xa34) + 4))();
        *(unsigned int *)(temp_v1 + 0xa34) = 0;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(int *)(param_1 + 0xabc));
  }
  if (*(int *)(param_1 + 0x28c) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x28c) = 0;
  }
  if (*(int *)(param_1 + 0x284) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x284) = 0;
  }
  if (*(int *)(param_1 + 0x288) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x288) = 0;
  }
  if (*(int *)(param_1 + 0x298) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x298) = 0;
  }
  if (*(int *)(param_1 + 0x290) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x290) = 0;
  }
  if (*(int *)(param_1 + 0x294) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x294) = 0;
  }
  if (*(int *)(param_1 + 0x2a4) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x2a4) = 0;
  }
  if (*(int *)(param_1 + 0x29c) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x29c) = 0;
  }
  if (*(int *)(param_1 + 0x2a0) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x2a0) = 0;
  }
  if (*(int *)(param_1 + 0x2b0) != 0) {
    FUN_0019c364();
    *(unsigned int *)(param_1 + 0x2b0) = 0;
  }
  if (*(int *)(param_1 + 0x2a8) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x2a8) = 0;
  }
  if (*(int *)(param_1 + 0x2ac) != 0) {
    FUN_0019a5a0();
    *(unsigned int *)(param_1 + 0x2ac) = 0;
  }
  FUN_001695a0();
  FUN_0019ea64(1);
  return;
}

} /* extern "C" */
