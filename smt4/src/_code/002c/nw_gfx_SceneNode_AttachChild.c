/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneNode_AttachChild` (_code @ 0x2c00b4, 0x160 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: coprocessor_store (CALLOTHER). */
/* Supplied declaration required: nw_gfx_SceneNode_IsCircularReference. */


/* WARNING: Control flow encountered bad instruction data */

unsigned int nw_gfx_SceneNode_AttachChild(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: irregular input(s): in_cr15, in_s10, in_s11, in_s6, in_s7, in_s8, in_s9; 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int in_cr15;
  unsigned int in_s6;
  unsigned int in_s7;
  unsigned int in_s8;
  unsigned int in_s9;
  unsigned int in_s10;
  unsigned int in_s11;
  
  temp_v0 = *(int *)(param_1 + 0xc);
  if (((temp_v0 != 0) && ((temp_v0 == param_2 || (nw_gfx_SceneNode_IsCircularReference(), temp_v0 != 0))))
     || (*(int *)(param_2 + 0xc) != 0)) {
    return 0;
  }
  puVar3 = *(unsigned int **)(param_1 + 0x20);
  puVar4 = (unsigned int *)(*(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18));
  temp_v1 = (unsigned int)puVar3 & 0x3fffffff;
  if ((int)temp_v1 <= (int)puVar4 >> 2) {
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 << 1;
    }
    else {
      temp_v1 = 1;
    }
    if (((unsigned int)puVar3 & 0x3fffffff) < temp_v1) {
      if ((*(int *)(param_1 + 0x14) != 0) &&
         (puVar3 = (unsigned int *)((unsigned int)puVar3 & 0xc0000000), puVar3 == (unsigned int *)0x40000000)) {
        halt_baddata();
      }
      if (puVar3 != (unsigned int *)0x0) {
        *puVar3 = (unsigned int)*(unsigned short *)(param_4 + 2);
      }
      return 1;
    }
  }
  *puVar4 = in_s6;
  puVar4[1] = in_s7;
  puVar4[2] = in_s8;
  puVar4[3] = in_s9;
  puVar4[4] = in_s10;
  puVar4[5] = in_s11;
  coprocessor_store(0xf,in_cr15,puVar4 + 6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
