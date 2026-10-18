/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00120584` (_code @ 0x120584, 0x1a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002c4938. */


unsigned int * FUN_00120584(unsigned int *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned char *puVar5;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2;
  unsigned int in_fpscr;
  float temp_v3;
  int temp_v4;
  float temp_v5;
  
  puVar2 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x48,4);
  if (puVar2 != (unsigned int *)0x0) {
    FUN_002c4938(puVar2,0x48);
  }
  *puVar2 = 0x20000021;
  puVar2[1] = 0x48535854;
  puVar2[2] = 0x5000000;
  puVar2[3] = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  puVar2[6] = *param_1;
  temp_v1 = param_1[1];
  puVar2[8] = 0x6040;
  puVar2[7] = temp_v1;
  puVar2[9] = 0x1405;
  puVar2[10] = 0;
  puVar2[0xb] = 0;
  puVar2[0xc] = param_1[2];
  puVar2[0xd] = 0;
  puVar3 = (unsigned int *)(**(romwright_code **)(*param_2 + 8))(param_2,0x20,4);
  if (puVar3 != (unsigned int *)0x0) {
    *puVar3 = 0;
    puVar3[1] = 0;
    puVar3[2] = 0;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[5] = 0;
    puVar3[6] = 0;
    puVar3[7] = 0;
  }
  puVar3[4] = (unsigned int)param_2;
  *puVar3 = *param_1;
  puVar3[1] = param_1[1];
  temp_v1 = param_1[3];
  puVar3[5] = 0x20;
  puVar3[6] = temp_v1;
  piVar4 = (int *)(unsigned int)*(unsigned char *)(param_1 + 6);
  temp_v5 = (float)VectorSignedToFloat(*param_1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v3 = (float)VectorSignedToFloat(param_1[1],(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = piVar4 == (int *)0x0;
  if (temp_v2) {
    piVar4 = (int *)(puVar3 + 3);
    puVar3[2] = 0;
  }
  temp_v4 = VectorFloatToUnsigned(temp_v5 * 4.0f * temp_v3,3);
  if (!temp_v2) {
    puVar5 = (unsigned char *)(**(romwright_code **)(*param_2 + 8))(param_2,temp_v4,0x80);
    temp_v0 = temp_v4;
    puVar1 = puVar5;
    if (*(char *)(param_1 + 4) != '\0') {
      for (; temp_v0 != 0; temp_v0 = temp_v0 - 1) {
        *puVar1 = 0;
        puVar1 = puVar1 + 1;
      }
    }
    temp_v0 = 0;
    piVar4 = (int *)(puVar3 + 3);
    if (puVar5 != (unsigned char *)0x0) {
      temp_v0 = (int)puVar5 - (int)piVar4;
    }
    puVar3[2] = temp_v4;
    if (puVar5 != (unsigned char *)0x0) {
      *piVar4 = temp_v0;
    }
    else {
      *piVar4 = 0;
    }
  }
  else {
    *piVar4 = 0;
  }
  piVar4 = (int *)(puVar2 + 0xe);
  if (puVar3 != (unsigned int *)0x0) {
    *piVar4 = (int)puVar3 - (int)piVar4;
  }
  else {
    *piVar4 = 0;
  }
  *(unsigned char *)(puVar2 + 0xf) = *(unsigned char *)((int)param_1 + 0x11);
  puVar2[0x10] = param_1[5];
  return puVar2;
}
