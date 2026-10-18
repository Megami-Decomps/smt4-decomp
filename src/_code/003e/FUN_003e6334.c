/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e6334` (_code @ 0x3e6334, 0x18c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *FUN_0014d5a8(unsigned int);
/* Supplied declaration required: FUN_002a7c80. */
extern int FUN_003e8194(int, unsigned int);
extern int FUN_003e8248(unsigned int, int);
extern int *FUN_003e828c(unsigned int);
/* Supplied declaration required: FUN_003e8298. */
/* Supplied declaration required: FUN_003e82c4. */
/* Supplied declaration required: FUN_003e8300. */
/* Supplied declaration required: FUN_003e8328. */
extern unsigned char *FUN_003e8354(unsigned int *);
/* Supplied declaration required: FUN_003e836c. */
/* Supplied declaration required: FUN_003e8398. */
/* Supplied declaration required: FUN_003e83c0. */
/* Supplied declaration required: FUN_003e8434. */
extern unsigned int *FUN_003e845c(int, unsigned int);


unsigned int FUN_003e6334(int param_1,unsigned int *param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_s0; 9 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  
  if (*(char *)(param_1 + 8) == '\0') {
    return 0;
  }
  if ((-1 < param_3) &&
     (piVar1 = (int *)FUN_003e828c(*(unsigned int *)(param_1 + 4)), param_3 < *piVar1)) {
    temp_v0 = FUN_003e8248(*(unsigned int *)(param_1 + 4),param_3);
    if (temp_v0 == 0) {
      return 0;
    }
    temp_v0 = FUN_003e8194(temp_v0,param_4);
    if (temp_v0 == 0) {
      return 0;
    }
    puVar3 = (unsigned int *)FUN_003e845c(temp_v0,param_5);
    if (puVar3 == (unsigned int *)0x0) {
      return 0;
    }
    temp_v2 = *puVar3;
    puVar4 = (unsigned int *)FUN_0014d5a8(*(unsigned int *)(param_1 + 4));
    temp_v1 = *puVar4;
    if (temp_v2 < temp_v1) {
      puVar5 = puVar4 + temp_v2 * 2 + 1;
      if (puVar5 != (unsigned int *)0x0) {
        temp_v1 = puVar4[temp_v2 * 2 + 2];
      }
      if (puVar5 != (unsigned int *)0x0 && temp_v1 != 0xffffffff) {
        *param_2 = *puVar5;
        param_2[1] = puVar4[temp_v2 * 2 + 2];
        puVar6 = (unsigned char *)FUN_003e8354(puVar3);
        if (puVar6 != (unsigned char *)0x0) {
          *(unsigned char *)((int)param_2 + 0x11) = *puVar6;
          *(unsigned char *)((int)param_2 + 0x12) = puVar6[4];
          *(unsigned char *)((int)param_2 + 0x13) = puVar6[8];
          param_2[2] = *(unsigned int *)(puVar6 + 0xc);
          *(unsigned char *)(param_2 + 5) = puVar6[0x10];
          *(unsigned char *)((int)param_2 + 0x15) = puVar6[0x11];
          *(unsigned char *)((int)param_2 + 0x16) = puVar6[0x12];
          FUN_002a7c80(param_2 + 3,puVar6 + 0x20);
        }
        else {
          puVar4 = puVar3;
          FUN_003e8300();
          *(char *)((int)param_2 + 0x11) = (char)puVar4;
          puVar4 = puVar3;
          FUN_003e8434();
          *(char *)((int)param_2 + 0x12) = (char)puVar4;
          puVar4 = puVar3;
          FUN_003e8398();
          *(char *)((int)param_2 + 0x13) = (char)puVar4;
          FUN_003e83c0(puVar3);
          param_2[2] = in_s0;
          puVar4 = puVar3;
          FUN_003e8328();
          *(char *)(param_2 + 5) = (char)puVar4;
          puVar4 = puVar3;
          FUN_003e8298();
          *(char *)((int)param_2 + 0x15) = (char)puVar4;
          puVar4 = puVar3;
          FUN_003e836c();
          *(char *)((int)param_2 + 0x16) = (char)puVar4;
          FUN_003e82c4(puVar3);
          FUN_002a7c80(param_2 + 3,puVar3);
        }
        return 1;
      }
    }
  }
  return 0;
}
