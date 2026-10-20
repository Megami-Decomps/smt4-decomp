/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002472f0` (_code @ 0x2472f0, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdEffectTextureCreate(void);
int FUN_002c0894(void);

extern unsigned int FUN_0028c814(void);
/* Supplied declaration required: asdEffectTextureCreate. */
extern int FUN_0028c904(unsigned int);
/* Supplied declaration required: FUN_002c0894. */


void FUN_002472f0(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 4) != 0) {
    FUN_002c0894();
  }
  temp_v0 = FUN_0028c904(param_2);
  if (temp_v0 != 0) {
    asdEffectTextureCreate();
  }
  else {
    param_2 = FUN_0028c814();
  }
  *(unsigned int *)(param_1 + 4) = param_2;
  return;
}

} /* extern "C" */
