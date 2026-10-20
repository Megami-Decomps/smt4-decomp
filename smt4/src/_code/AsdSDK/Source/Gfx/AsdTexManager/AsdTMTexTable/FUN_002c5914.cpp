/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c5914` (_code @ 0x2c5914, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b73a8(int, unsigned int);
int FUN_002be624(...);
int FUN_002bf694(...);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} param_2_stack;

extern unsigned char LAB_002c5b80; /* 0x2c5b80 */
extern unsigned char LAB_002c5b84; /* 0x2c5b84 */
extern unsigned char LAB_002c5b98; /* 0x2c5b98 */
extern int DAT_0044ea28; /* 0x44ea28 */
extern int DAT_0044ea2c; /* 0x44ea2c */

extern unsigned char *FUN_0010024c(char *, unsigned int);
/* Supplied declaration required: FUN_002b73a8. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern int FUN_002c3124(unsigned char *, unsigned char *, unsigned char);


int * FUN_002c5914(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  unsigned char *puVar3;
  int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int temp_v3;
  char *pcVar8;
  int *piVar9;
  unsigned int *puVar10;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8 [4];
  unsigned char temp_v9 [256];
  char temp_v10;
  char acStack_a7 [131];
  
  temp_v1 = DAT_0044ea2c;
  puVar10 = (unsigned int *)(DAT_0044ea28 + param_1 * 0x18);
  piVar2 = (int *)*puVar10;
  if (piVar2 == (int *)0x0) {
    FUN_002bf694(&temp_v10,DAT_0044ea2c);
    pcVar8 = &temp_v10;
    temp_v0 = temp_v10;
    while (temp_v0 != '\0') {
      puVar3 = (unsigned char *)FUN_0010024c(pcVar8,0x5c);
      if (puVar3 != (unsigned char *)0x0) {
        *puVar3 = 0x2f;
      }
      pcVar8 = pcVar8 + 1;
      temp_v0 = *pcVar8;
    }
    FUN_002bf694(temp_v1,&temp_v10);
    FUN_002be624(temp_v9,&LAB_002c5b84,temp_v1,puVar10 + 2,&LAB_002c5b80);
    temp_v7 = (param_2 & 1) != 0;
    if ((param_2 & 2) != 0) {
      temp_v7 = temp_v7 | 2;
    }
    temp_v1 = FUN_002c3124(temp_v9,temp_v8,temp_v7);
    if (temp_v1 == 0) {
      *puVar10 = 0;
      piVar2 = (int *)0x0;
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
      piVar2 = piVar9;
      if (0 < *(int *)(temp_v1 + 0x28)) {
        do {
          temp_v2 = temp_v2 + 1;
          *piVar2 = temp_v6 + *piVar2 * 0x14;
          piVar2[2] = piVar2[2] + temp_v4 + temp_v1;
          piVar2 = piVar2 + 4;
        } while (temp_v2 < *(int *)(temp_v1 + 0x28));
      }
      piVar2 = (int *)0x2c;
      FUN_002b73a8(0x2c,param_2);
      if (*(int *)(temp_v1 + 0x28) < 1) {
        *piVar2 = 0;
      }
      else {
        temp_v2 = *(int *)(temp_v1 + 0x28) << 5;
        FUN_002b73a8(temp_v2,param_2);
        *piVar2 = temp_v2;
      }
      puVar5 = (unsigned int *)*piVar2;
      temp_v2 = 0;
      if (temp_v2 < *(int *)(temp_v1 + 0x28)) {
        do {
          puVar5[1] = (unsigned int)piVar9;
          *puVar5 = (unsigned int)piVar2;
          temp_v2 = temp_v2 + 1;
          puVar5 = puVar5 + 8;
          piVar9 = piVar9 + 4;
        } while (temp_v2 < *(int *)(temp_v1 + 0x28));
      }
      piVar2[1] = temp_v1;
      piVar2[2] = temp_v1;
      temp_v2 = DAT_0044ea2c;
      temp_v3 = DAT_0044ea2c + 0x80;
      FUN_002bf694(&temp_v10,temp_v3);
      pcVar8 = &temp_v10;
      while (temp_v10 != '\0') {
        puVar3 = (unsigned char *)FUN_0010024c(pcVar8,0x5c);
        if (puVar3 != (unsigned char *)0x0) {
          *puVar3 = 0x2f;
        }
        pcVar8 = pcVar8 + 1;
        temp_v10 = *pcVar8;
      }
      FUN_002bf694(temp_v3,&temp_v10);
      FUN_002be624(piVar2 + 3,&LAB_002c5b98,temp_v2 + 0x80,temp_v1 + 4);
      *puVar10 = (unsigned int)piVar2;
    }
  }
  return piVar2;
}

} /* extern "C" */
