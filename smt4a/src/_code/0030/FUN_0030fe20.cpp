/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030fe20` (_code @ 0x30fe20, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4cac(int);
int FUN_0030fe6c(int *, unsigned int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned int FUN_002e6dac(unsigned int);
/* Supplied declaration required: FUN_002f4cac. */
/* Supplied declaration required: FUN_0030fe6c. */


void FUN_0030fe20(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  
  puVar2 = (unsigned int *)(param_1 + 0xc);
  temp_v1 = param_4;
  if (param_2 != 0) {
    if (param_2 < 10) {
      param_2 = 10;
    }
    temp_v0 = FUN_002e6dac(param_2);
    *puVar2 = temp_v0;
    FUN_0030fe6c(&temp_v1,puVar2,param_2);
    temp_v0 = temp_v1;
  }
  else {
    temp_v0 = 0;
    *puVar2 = 0;
  }
  *(unsigned int *)(param_1 + 0x18) = temp_v0;
  FUN_002f4cac(param_1);
  return;
}

} /* extern "C" */
