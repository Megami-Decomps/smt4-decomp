/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014d314` (_code @ 0x14d314, 0x7c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_001520d0. */
/* Supplied declaration required: FUN_001520f4. */
/* Supplied declaration required: FUN_00152120. */
/* Supplied declaration required: FUN_00152144. */
/* Supplied declaration required: FUN_0015217c. */
extern unsigned int *FUN_002a6d58(unsigned int);


unsigned char FUN_0014d314(int param_1,unsigned int param_2,unsigned int *param_3)

{
/* irregular: 5 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned char temp_v0;
  
  puVar1 = (unsigned int *)FUN_002a6d58(*(unsigned int *)(*(int *)(param_1 + 4) + 0x3c));
  temp_v0 = puVar1 != (unsigned int *)0x0;
  if (temp_v0) {
    *param_3 = *puVar1;
    param_3[1] = puVar1[1];
    param_3[4] = (unsigned int)*(unsigned char *)(puVar1 + 2);
    puVar2 = puVar1;
    FUN_001520d0();
    *(char *)(param_3 + 5) = (char)puVar2;
    puVar2 = puVar1;
    FUN_001520f4();
    *(char *)((int)param_3 + 0x15) = (char)puVar2;
    puVar2 = puVar1;
    FUN_0015217c();
    param_3[3] = (unsigned int)puVar2;
    puVar2 = puVar1;
    FUN_00152144();
    param_3[2] = (unsigned int)puVar2;
    FUN_00152120();
    *(char *)((int)param_3 + 0x16) = (char)puVar1;
  }
  return temp_v0;
}
