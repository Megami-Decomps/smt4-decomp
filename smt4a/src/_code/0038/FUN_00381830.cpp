/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00381830` (_code @ 0x381830, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdTextureRelease(void);
int asdEffectTextureCreate(void);

/* Supplied declaration required: asdTextureRelease. */
extern int FUN_0025cc50(unsigned int);
extern unsigned int FUN_0037a7f4(void);
/* Supplied declaration required: asdEffectTextureCreate. */


void FUN_00381830(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) != 0) {
    asdTextureRelease();
  }
  temp_v0 = FUN_0025cc50(param_2);
  if (temp_v0 != 0) {
    asdEffectTextureCreate();
  }
  else {
    param_2 = FUN_0037a7f4();
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  return;
}

} /* extern "C" */
