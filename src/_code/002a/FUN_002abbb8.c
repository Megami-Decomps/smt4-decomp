/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002abbb8` (_code @ 0x2abbb8, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004652a0; /* 0x4652a0 */

/* Supplied declaration required: FUN_002a1ac8. */
/* Supplied declaration required: FUN_002a1b4c. */


void FUN_002abbb8(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  if (*(int *)(param_1 + 0x28) != param_2 || param_3 != 0) {
    *(int *)(param_1 + 0x28) = param_2;
    puVar1 = DAT_004652a0;
    DAT_004652a0[1] = 0xf02c0;
    *puVar1 = 0x8000005a;
    FUN_002a1ac8(puVar1 + 2,param_2 + 0x148,0xbf02c1);
    puVar2 = DAT_004652a0;
    puVar3 = DAT_004652a0 + 0x10;
    puVar1 = DAT_004652a0 + 0x11;
    DAT_004652a0 = puVar3;
    *puVar1 = 0xf02c0;
    *puVar3 = 0x80000056;
    FUN_002a1b4c(puVar2 + 0x12,param_2 + 0x1a8,0xff02c1);
    puVar2 = DAT_004652a0;
    puVar3 = DAT_004652a0 + 0x14;
    puVar1 = DAT_004652a0 + 0x15;
    DAT_004652a0 = puVar3;
    *puVar1 = 0xf0290;
    *puVar3 = 0x8000005a;
    FUN_002a1ac8(puVar2 + 0x16,param_2 + 0x148,0xbf0291);
    puVar2 = DAT_004652a0;
    puVar3 = DAT_004652a0 + 0x10;
    puVar1 = DAT_004652a0 + 0x11;
    DAT_004652a0 = puVar3;
    *puVar1 = 0xf0290;
    *puVar3 = 0x80000056;
    FUN_002a1b4c(puVar2 + 0x12,param_2 + 0x1a8,0xff0291);
    DAT_004652a0 = DAT_004652a0 + 0x14;
  }
  return;
}
