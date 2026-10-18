/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002350f4` (_code @ 0x2350f4, 0x2a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00235398; /* 0x235398 */
extern unsigned char LAB_002353a0; /* 0x2353a0 */
extern unsigned char LAB_002353ac; /* 0x2353ac */
extern unsigned char LAB_002353bc; /* 0x2353bc */
extern unsigned char LAB_002353c4; /* 0x2353c4 */
extern unsigned char LAB_002353d4; /* 0x2353d4 */

extern int FUN_00100c4c(int, unsigned char *);
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a0c54. */
extern unsigned int *FUN_002a8948(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c4b30. */
/* Supplied declaration required: FUN_00341578. */


void FUN_002350f4(unsigned int *param_1,unsigned int param_2,int param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v0;
  unsigned char *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int *piVar13;
  int temp_v7;
  int temp_v8;
  unsigned char temp_v9 [128];
  
  puVar1 = temp_v9;
  puVar5 = temp_v9;
  puVar6 = temp_v9;
  param_1[7] = 0;
  param_1[6] = 0;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[1] = 0;
  param_1[3] = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  FUN_002c4b30(param_1 + 0x15b,0x80);
  if (param_3 != 0) {
    FUN_002be7fc(temp_v9,&LAB_00235398,param_3);
  }
  else {
    FUN_002be7fc(temp_v9,&LAB_00235398,param_2);
  }
  FUN_0029bddc(temp_v9,7);
  param_1[7] = (unsigned int)puVar1;
  FUN_002a06c8();
  FUN_002be7fc(temp_v9,&LAB_002353a0,param_2);
  FUN_00341578(param_1,temp_v9);
  FUN_002be7fc(temp_v9,&LAB_002353ac,param_2);
  FUN_002a0c54(temp_v9,0);
  FUN_002a0790(0);
  temp_v3 = param_1[0x15b];
  temp_v1 = *(unsigned int *)(temp_v3 + 0x68);
  temp_v4 = *(unsigned int *)(temp_v3 + 0x78);
  param_1[0x58d] = *(unsigned int *)(temp_v3 + 0x58);
  param_1[0x58e] = temp_v1;
  param_1[0x58f] = temp_v4;
  puVar2 = (unsigned int *)FUN_002a8948(param_1[0x15b]);
  temp_v1 = *puVar2;
  temp_v4 = puVar2[1];
  temp_v5 = puVar2[2];
  param_1[0x590] = temp_v1;
  param_1[0x591] = temp_v4;
  param_1[0x592] = temp_v5;
  param_1[0x584] = temp_v1;
  param_1[0x585] = temp_v4;
  param_1[0x586] = temp_v5;
  param_1[0x581] = param_1[0x58d];
  param_1[0x582] = param_1[0x58e];
  param_1[0x583] = param_1[0x58f];
  puVar3 = *(unsigned int **)(*(int *)(*(int *)(param_1[7] + 8) + 0x2c) + 8);
  if ((puVar3 != (unsigned int *)0x0) && ((~*puVar3 & 0x40000092) != 0)) {
    puVar3 = (unsigned int *)0x0;
  }
  temp_v3 = 0;
  temp_v2 = puVar3[0x38];
  if (temp_v2 != 0) {
    temp_v8 = temp_v2 + (int)(puVar3 + 0x38);
  }
  else {
    temp_v8 = 0;
  }
  temp_v7 = *(int *)(temp_v8 + 0x18);
  if (0 < temp_v7) {
    do {
      if (*(int *)(temp_v8 + 0x1c) != 0) {
        temp_v0 = temp_v8 + 0x1c + *(int *)(temp_v8 + 0x1c);
      }
      else {
        temp_v0 = 0;
      }
      if (temp_v0 == 0) {
        piVar13 = (int *)0x0;
      }
      else {
        piVar13 = (int *)(temp_v0 + temp_v3 * 0x10 + 0x28);
        temp_v0 = *piVar13;
        if (temp_v0 != 0) {
          piVar13 = (int *)(temp_v0 + (int)piVar13);
        }
        else {
          piVar13 = (int *)0x0;
        }
      }
      if (*piVar13 != 0) {
        temp_v0 = *piVar13 + (int)piVar13;
      }
      else {
        temp_v0 = 0;
      }
      temp_v0 = FUN_00100c4c(temp_v0,&LAB_002353bc);
      if (temp_v0 != 0) {
        temp_v0 = piVar13[0xf];
        temp_v6 = piVar13[0x10];
        param_1[param_1[3] * 3 + 0x59c] = piVar13[0xe];
        param_1[param_1[3] * 3 + 0x59d] = temp_v0;
        param_1[param_1[3] * 3 + 0x59e] = temp_v6;
        param_1[3] = param_1[3] + 1;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v7);
  }
  if (0 < (int)param_1[3]) {
    *(unsigned char *)((int)param_1 + 0x15) = 1;
    FUN_002be7fc(temp_v9,&LAB_002353c4);
    FUN_0029bddc(temp_v9,7);
    param_1[9] = (unsigned int)puVar5;
    FUN_002a06c8();
    FUN_002be7fc(temp_v9,&LAB_002353d4);
    FUN_0029bddc(temp_v9,7);
    param_1[8] = (unsigned int)puVar6;
    FUN_002a06c8();
    param_1[0x596] = param_1[0x59c];
    param_1[0x597] = param_1[0x59d];
    param_1[0x598] = param_1[0x59e];
    FUN_0028c8a8(*(unsigned int *)(param_1[8] + 8),0,param_1 + 0x596);
  }
  return;
}
