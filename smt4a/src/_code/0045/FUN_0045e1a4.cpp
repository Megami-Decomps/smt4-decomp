/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0045e1a4` (_code @ 0x45e1a4, 0x84 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_005094e4(unsigned int *, int, int, unsigned int);

extern int FUN_0015fe30(void);
extern int FUN_001b1f04(void);
/* Supplied declaration required: FUN_005094e4. */


unsigned int * FUN_0045e1a4(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int uStack_18;
  
  puVar2 = (unsigned int *)&uStack_18;
  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) &&
     (uStack_18 = param_4, temp_v0 = FUN_0015fe30(), temp_v0 != 0)) {
    FUN_005094e4(puVar2,param_2 + param_3 * 0xc + 0x134,param_2 + param_3 * 0x10 + 0xf4,param_4);
    temp_v0 = FUN_001b1f04();
    *(int *)(temp_v0 + 0x1fc) = *(int *)(temp_v0 + 0x1fc) + 1;
    return puVar2;
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
