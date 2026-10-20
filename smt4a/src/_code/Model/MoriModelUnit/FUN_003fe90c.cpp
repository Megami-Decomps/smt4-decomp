/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003fe90c` (_code @ 0x3fe90c, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int);
int FUN_0045aee0(unsigned int *, unsigned int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0045aee0. */


void FUN_003fe90c(unsigned int *param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[0xb] = 0;
  *(unsigned char *)(param_1 + 8) = 1;
  param_1[7] = param_2;
  if (0 < param_2) {
    temp_v0 = 0x10000;
    FUN_001630d4(0x10000,0x100,0,param_2 << 1);
    param_1[4] = temp_v0;
    FUN_0045aee0(param_1 + 5,temp_v0,param_2,1);
    return;
  }
  return;
}

} /* extern "C" */
