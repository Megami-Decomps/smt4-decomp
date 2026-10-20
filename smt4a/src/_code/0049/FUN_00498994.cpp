/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498994` (_code @ 0x498994, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019de98(int, int);
int FUN_00342348(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_00342348. */
extern int FUN_004cfe4c(int);


void FUN_00498994(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 0xb40);
  temp_v0 = param_1 + temp_v1 * 0x74;
  if (0 < *(int *)(temp_v0 + 0xb68)) {
    temp_v0 = FUN_004cfe4c(temp_v0 + 0xb60);
    FUN_00342348(*(unsigned short *)(param_1 + temp_v1 * 0x1002 + 0xf74 + temp_v0 * 4));
    return;
  }
  FUN_0019de98(0,0x323232ff);
  return;
}

} /* extern "C" */
