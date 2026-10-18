/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5b04` (_code @ 0x2c5b04, 0x268 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} param_2_stack;

extern unsigned char LAB_002c5d70; /* 0x2c5d70 */
extern unsigned char LAB_002c5d74; /* 0x2c5d74 */
extern unsigned char LAB_002c5d88; /* 0x2c5d88 */
extern int DAT_0044ea28; /* 0x44ea28 */
extern int DAT_0044ea2c; /* 0x44ea2c */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned char *FUN_0010024c(char *, unsigned int);
/* Supplied declaration required: FUN_002b76e8. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bf86c. */
extern int FUN_002c32f0(unsigned char *, unsigned char *, unsigned char);


unsigned int FUN_002c5b04(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9 [4];
  unsigned char temp_v10 [256];
  char temp_v11;
  char acStack_a7 [131];
  
  temp_v1 = DAT_0044ea2c;
  piVar10 = (int *)(DAT_0044ea28 + param_1 * 0x18);
  temp_v7 = 1;
  if (*piVar10 == 0) {
    FUN_002bf86c(&temp_v11,DAT_0044ea2c);
    pcVar8 = &temp_v11;
    temp_v0 = temp_v11;
    while (temp_v0 != '\0') {
      puVar2 = (unsigned char *)FUN_0010024c(pcVar8,0x5c);
      if (puVar2 != (unsigned char *)0x0) {
        *puVar2 = 0x2f;
      }
      pcVar8 = pcVar8 + 1;
      temp_v0 = *pcVar8;
    }
    temp_v7 = 1;
    FUN_002bf86c(temp_v1,&temp_v11);
    FUN_002be7fc(temp_v10,&LAB_002c5d74,temp_v1,piVar10 + 2,&LAB_002c5d70);
    temp_v8 = (param_2 & 1) != 0;
    if ((param_2 & 2) != 0) {
      temp_v8 = temp_v8 | 2;
    }
    temp_v1 = FUN_002c32f0(temp_v10,temp_v9,temp_v8);
    if (temp_v1 == 0) {
      *piVar10 = 0;
    }
    else {
      temp_v5 = *(int *)(temp_v1 + 0x14);
      temp_v3 = 0;
      temp_v4 = *(int *)(temp_v1 + 0x2c);
      piVar9 = (int *)(*(int *)(temp_v1 + 0x24) + temp_v1);
      temp_v6 = *(int *)(temp_v1 + 0x1c) + temp_v1;
      temp_v2 = temp_v6;
      if (0 < *(int *)(temp_v1 + 0x20)) {
        do {
          if (*(int *)(temp_v2 + 0xc) == -1) {
            *(unsigned int *)(temp_v2 + 0xc) = 0;
          }
          else {
            *(int *)(temp_v2 + 0xc) = temp_v5 + temp_v1 + *(int *)(temp_v2 + 0xc) * 0x50;
          }
          temp_v3 = temp_v3 + 1;
          temp_v2 = temp_v2 + 0x14;
        } while (temp_v3 < *(int *)(temp_v1 + 0x20));
      }
      temp_v2 = 0;
      piVar4 = piVar9;
      if (0 < *(int *)(temp_v1 + 0x28)) {
        do {
          temp_v2 = temp_v2 + 1;
          *piVar4 = temp_v6 + *piVar4 * 0x14;
          piVar4[2] = piVar4[2] + temp_v4 + temp_v1;
          piVar4 = piVar4 + 4;
        } while (temp_v2 < *(int *)(temp_v1 + 0x28));
      }
      piVar4 = (int *)0x2c;
      FUN_002b76e8(0x2c,param_2);
      if (*(int *)(temp_v1 + 0x28) < 1) {
        *piVar4 = 0;
      }
      else {
        temp_v2 = *(int *)(temp_v1 + 0x28) << 5;
        FUN_002b76e8(temp_v2,param_2);
        *piVar4 = temp_v2;
      }
      puVar5 = (unsigned int *)*piVar4;
      temp_v2 = 0;
      if (temp_v2 < *(int *)(temp_v1 + 0x28)) {
        do {
          puVar5[1] = (unsigned int)piVar9;
          *puVar5 = (unsigned int)piVar4;
          temp_v2 = temp_v2 + 1;
          puVar5 = puVar5 + 8;
          piVar9 = piVar9 + 4;
        } while (temp_v2 < *(int *)(temp_v1 + 0x28));
      }
      piVar4[1] = temp_v1;
      piVar4[2] = temp_v1;
      temp_v2 = DAT_0044ea2c;
      temp_v3 = DAT_0044ea2c + 0x80;
      FUN_002bf86c(&temp_v11,temp_v3);
      pcVar8 = &temp_v11;
      while (temp_v11 != '\0') {
        puVar2 = (unsigned char *)FUN_0010024c(pcVar8,0x5c);
        if (puVar2 != (unsigned char *)0x0) {
          *puVar2 = 0x2f;
        }
        pcVar8 = pcVar8 + 1;
        temp_v11 = *pcVar8;
      }
      temp_v7 = 1;
      FUN_002bf86c(temp_v3,&temp_v11);
      FUN_002be7fc(piVar4 + 3,&LAB_002c5d88,temp_v2 + 0x80,temp_v1 + 4);
      *piVar10 = (int)piVar4;
    }
  }
  software_interrupt(99);
  if (temp_v7) {
    return 1;
  }
  return 0;
}
