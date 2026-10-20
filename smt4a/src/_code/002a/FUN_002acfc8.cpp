/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002acfc8` (_code @ 0x2acfc8, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162790(int, unsigned int, unsigned char [84]);
int FUN_0018408c(unsigned char [84], int);
int VectorSignedToFloat(...);
int rt_memcpy(...);

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: rt_memcpy. */


void FUN_002acfc8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned char *pbVar6;
  unsigned int in_fpscr;
  unsigned char temp_v2 [84];
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4));
  puVar3 = temp_v2;
  puVar4 = temp_v2;
  temp_v0 = *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x675);
  pbVar6 = (unsigned char *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x675);
  puVar5 = (unsigned char *)0x0;
  if (temp_v0 != 0) {
    rt_memcpy(temp_v2,param_1);
    temp_v2[temp_v0] = 0;
    VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,*(unsigned int *)(temp_v1 + 0x5ec),temp_v2);
    FUN_0018408c(temp_v2,2);
    puVar5 = puVar3;
  }
  temp_v0 = *(unsigned char *)(temp_v1 + 0x676);
  rt_memcpy(temp_v2,(unsigned int)*(unsigned char *)(temp_v1 + 0x675) + param_1,(unsigned int)temp_v0);
  temp_v2[temp_v0] = 0;
  VectorSignedToFloat(puVar5 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,*(unsigned int *)(temp_v1 + 0x670),temp_v2);
  FUN_0018408c(temp_v2,2);
  rt_memcpy(temp_v2,(unsigned int)*pbVar6 + (unsigned int)*(unsigned char *)(temp_v1 + 0x676) + param_1,
            (0x40 - (unsigned int)*pbVar6) - (unsigned int)*(unsigned char *)(temp_v1 + 0x676));
  VectorSignedToFloat(puVar4 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,*(unsigned int *)(temp_v1 + 0x5ec),temp_v2);
  return;
}

} /* extern "C" */
