/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048d11c` (_code @ 0x48d11c, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_00163aa4(int);
extern unsigned int FUN_001654d8(int);
extern unsigned int FUN_001654e4(int);
/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_004935b0. */


void FUN_0048d11c(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = *(int *)(param_1 + 8);
  if (temp_v0 == 0) {
    FUN_00184528(param_1 + 0x4e4,0);
    *(unsigned int *)(param_1 + 0x10) = (*(unsigned int *)(param_1 + 0x10) & 0xfffffffd) | 0x1000000;
    *(unsigned int *)(param_1 + 8) = 1;
    return;
  }
  if (temp_v0 == 1) {
    temp_v3 = param_1 + 0x504;
    temp_v0 = FUN_00163aa4(temp_v3);
    if (temp_v0 != 0) {
      *(unsigned int *)(param_1 + 8) = 2;
    }
    temp_v1 = FUN_001654e4(temp_v3);
    temp_v2 = FUN_001654d8(temp_v3);
    FUN_004935b0(param_1 + 0x4d0,temp_v2,temp_v1);
    return;
  }
  if (temp_v0 == 2) {
    *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 0x10) & 0xfeffffff;
  }
  return;
}
