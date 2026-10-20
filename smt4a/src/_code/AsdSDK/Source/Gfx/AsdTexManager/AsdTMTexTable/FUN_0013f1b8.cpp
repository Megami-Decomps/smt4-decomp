/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f1b8` (_code @ 0x13f1b8, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_0013c174(unsigned char *, unsigned char [4], int);
int FUN_0014e3bc(int, unsigned int);
int FUN_002e342c(...);

/* stack frame of param_2: 2 slot(s), 5 byte(s) */
typedef struct {
    unsigned char spA8; /* 0xa8: local_a8 */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
} param_2_stack;

extern unsigned char LAB_0013f424; /* 0x13f424 */
extern unsigned char LAB_0013f428; /* 0x13f428 */
extern unsigned char LAB_0013f43c; /* 0x13f43c */
extern int DAT_0059dbb8; /* 0x59dbb8 */
extern int DAT_0059dbbc; /* 0x59dbbc */

extern unsigned char *FUN_00100238(char *, unsigned int);
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_0013c174. */
/* Supplied declaration required: FUN_0014e3bc. */
/* Supplied declaration required: FUN_002e342c. */


void FUN_0013f1b8(int param_1,unsigned int param_2)

{
/* irregular: 4 native warning(s); review required */
  char temp_v0;
  unsigned char *puVar2;
  int temp_v1;
  int *piVar4;
  unsigned int *puVar5;
  unsigned char *puVar6;
  int temp_v2;
  char *pcVar8;
  int *piVar9;
  int *piVar10;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6 [4];
  unsigned char temp_v7 [256];
  char temp_v8;
  char acStack_a7 [131];
  
  temp_v1 = DAT_0059dbbc;
  piVar10 = (int *)(DAT_0059dbb8 + param_1 * 0x18);
  if (*piVar10 == 0) {
    FUN_002e342c(&temp_v8,DAT_0059dbbc);
    pcVar8 = &temp_v8;
    temp_v0 = temp_v8;
    while (temp_v0 != '\0') {
      puVar2 = (unsigned char *)FUN_00100238(pcVar8,0x5c);
      if (puVar2 != (unsigned char *)0x0) {
        *puVar2 = 0x2f;
      }
      pcVar8 = pcVar8 + 1;
      temp_v0 = *pcVar8;
    }
    FUN_002e342c(temp_v1,&temp_v8);
    FUN_00100388(temp_v7,&LAB_0013f428,temp_v1,piVar10 + 2,&LAB_0013f424);
    temp_v5 = (param_2 & 1) != 0;
    if ((param_2 & 2) != 0) {
      temp_v5 = temp_v5 | 2;
    }
    puVar2 = temp_v7;
    FUN_0013c174(puVar2,temp_v6,temp_v5);
    if (puVar2 == (unsigned char *)0x0) {
      *piVar10 = 0;
    }
    else {
      temp_v4 = *(int *)(puVar2 + 0x14);
      temp_v1 = *(int *)(puVar2 + 0x1c);
      temp_v2 = 0;
      temp_v3 = *(int *)(puVar2 + 0x2c);
      piVar9 = (int *)(puVar2 + *(int *)(puVar2 + 0x24));
      puVar6 = puVar2 + temp_v1;
      if (0 < *(int *)(puVar2 + 0x20)) {
        do {
          if (*(int *)(puVar6 + 0xc) == -1) {
            *(unsigned int *)(puVar6 + 0xc) = 0;
          }
          else {
            *(unsigned char **)(puVar6 + 0xc) = puVar2 + *(int *)(puVar6 + 0xc) * 0x50 + temp_v4;
          }
          temp_v2 = temp_v2 + 1;
          puVar6 = puVar6 + 0x14;
        } while (temp_v2 < *(int *)(puVar2 + 0x20));
      }
      temp_v2 = 0;
      piVar4 = piVar9;
      if (0 < *(int *)(puVar2 + 0x28)) {
        do {
          temp_v2 = temp_v2 + 1;
          *piVar4 = (int)(puVar2 + temp_v1 + *piVar4 * 0x14);
          piVar4[2] = (int)(puVar2 + piVar4[2] + temp_v3);
          piVar4 = piVar4 + 4;
        } while (temp_v2 < *(int *)(puVar2 + 0x28));
      }
      piVar4 = (int *)0x2c;
      FUN_0014e3bc(0x2c,param_2);
      if (*(int *)(puVar2 + 0x28) < 1) {
        *piVar4 = 0;
      }
      else {
        temp_v1 = *(int *)(puVar2 + 0x28) << 5;
        FUN_0014e3bc(temp_v1,param_2);
        *piVar4 = temp_v1;
      }
      puVar5 = (unsigned int *)*piVar4;
      temp_v1 = 0;
      if (temp_v1 < *(int *)(puVar2 + 0x28)) {
        do {
          puVar5[1] = (unsigned int)piVar9;
          *puVar5 = (unsigned int)piVar4;
          temp_v1 = temp_v1 + 1;
          puVar5 = puVar5 + 8;
          piVar9 = piVar9 + 4;
        } while (temp_v1 < *(int *)(puVar2 + 0x28));
      }
      piVar4[1] = (int)puVar2;
      piVar4[2] = (int)puVar2;
      temp_v1 = DAT_0059dbbc;
      temp_v2 = DAT_0059dbbc + 0x80;
      FUN_002e342c(&temp_v8,temp_v2);
      pcVar8 = &temp_v8;
      while (temp_v8 != '\0') {
        puVar6 = (unsigned char *)FUN_00100238(pcVar8,0x5c);
        if (puVar6 != (unsigned char *)0x0) {
          *puVar6 = 0x2f;
        }
        pcVar8 = pcVar8 + 1;
        temp_v8 = *pcVar8;
      }
      FUN_002e342c(temp_v2,&temp_v8);
      FUN_00100388(piVar4 + 3,&LAB_0013f43c,temp_v1 + 0x80,puVar2 + 4);
      *piVar10 = (int)piVar4;
    }
  }
  return;
}

} /* extern "C" */
