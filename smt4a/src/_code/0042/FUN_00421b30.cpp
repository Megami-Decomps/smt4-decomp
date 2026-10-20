/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00421b30` (_code @ 0x421b30, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(int, int);
int FUN_003ec620(unsigned int, unsigned int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: FUN_003ec620. */
extern int FUN_003ef9e0(int, int);


void FUN_00421b30(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(*(int *)(param_1 + 4) + 0x1ed4) + (param_2 * 0x20 - param_3) * 0x10;
  temp_v0 = FUN_003ef9e0(*(int *)(param_1 + 4),temp_v2);
  temp_v1 = *(int *)(param_1 + 4);
  FUN_001568f8(temp_v1,(int)*(short *)(temp_v2 + 0x6a));
  FUN_003ec620(*(unsigned int *)(param_1 + 4),*(unsigned int *)(temp_v1 + temp_v0 * 4 + 0xc));
  return;
}

} /* extern "C" */
