/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378618` (_code @ 0x378618, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002bd440(void);
extern int FUN_002bf684(void);
/* Supplied declaration required: FUN_003e7210. */


unsigned int * FUN_00378618(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int uStack_18;
  
  puVar2 = (unsigned int *)&uStack_18;
  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) &&
     (uStack_18 = param_4, temp_v0 = FUN_002bf684(), temp_v0 != 0)) {
    FUN_003e7210(puVar2,param_2 + param_3 * 0xc + 0x130,param_2 + param_3 * 0x10 + 0xf0,param_4);
    temp_v0 = FUN_002bd440();
    *(int *)(temp_v0 + 0x1fc) = *(int *)(temp_v0 + 0x1fc) + 1;
    return puVar2;
  }
  return (unsigned int *)0x0;
}
