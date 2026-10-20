/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00123728` (_code @ 0x123728, 0x4a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int onlineStringDestroy(int *);
int FUN_002ee938(...);

/* Supplied declaration required: onlineStringDestroy. */
/* Supplied declaration required: FUN_002ee938. */
extern int FUN_002ee96a(unsigned int *, unsigned int *);
extern int FUN_002fd624(unsigned int);


unsigned int FUN_00123728(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int uStack_20;
  unsigned int uStack_1c;
  int uStack_18;
  unsigned int uStack_14;
  
  uStack_20 = param_1;
  uStack_1c = param_2;
  uStack_18 = param_3;
  uStack_14 = param_4;
  FUN_002ee938(&uStack_18);
  FUN_002ee938(&uStack_20,param_1);
  temp_v0 = FUN_002ee96a((unsigned int *)&uStack_20,(unsigned int *)&uStack_18);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002fd624(param_1);
    temp_v1 = FUN_002fd624(param_2);
    if (temp_v0 == temp_v1) {
      temp_v2 = 1;
      onlineStringDestroy(&uStack_20);
      onlineStringDestroy(&uStack_18);
      return temp_v2;
    }
  }
  temp_v2 = 0;
  onlineStringDestroy(&uStack_20);
  onlineStringDestroy(&uStack_18);
  return temp_v2;
}

} /* extern "C" */
