/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_RenderContext_MaterialHash_ResetMaterialHash` (_code @ 0x2b5228, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */

extern unsigned int *FUN_002aa278(unsigned int, unsigned int, unsigned int, unsigned int);


/* WARNING: Removing unreachable block (ram,0x002b5980) */
/* WARNING: Removing unreachable block (ram,0x002b4f2e) */
/* WARNING: Removing unreachable block (ram,0x002b5994) */

void nw_gfx_RenderContext_MaterialHash_ResetMaterialHash
               (unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int *param_5
               ,int param_6)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  unsigned short *puVar2;
  
  if ((~param_2 & 1) == 0) {
    *param_1 = 0xffffffff;
  }
  if ((~param_2 & 2) == 0) {
    param_1[1] = 0xffffffff;
  }
  puVar2 = (unsigned short *)0x0;
  puVar1 = (unsigned int *)FUN_002aa278(0,param_2,0,8);
  *puVar2 = (short)puVar1;
  *puVar1 = *(unsigned char *)(param_6 + 0x12a42) | 0x80000000;
  puVar1[1] = 0x804f02c0;
  puVar1[2] = param_5[3];
  puVar1[3] = param_5[2];
  puVar1[4] = param_5[1];
  puVar1[5] = *param_5;
  DAT_004652a0 = DAT_004652a0 + 0x18;
  return;
}
