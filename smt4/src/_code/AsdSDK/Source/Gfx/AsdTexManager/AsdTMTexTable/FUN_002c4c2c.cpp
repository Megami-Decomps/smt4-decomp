/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c4c2c` (_code @ 0x2c4c2c, 0x244 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be624(unsigned char [256], unsigned char *, unsigned int, int, unsigned char *, unsigned char *);
int FUN_002bf694(...);
int FUN_002c415c(...);
int FUN_002c498c(...);
int FUN_002c5914(int, int);
int rt_memcpy_w(...);

/* stack frame of param_1: 4 slot(s), 13 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char spB0; /* 0xb0: local_b0 */
    unsigned int sp1B4; /* 0x1b4: local_1b4 */
    unsigned int sp1B8; /* 0x1b8: local_1b8 */
} param_1_stack;

extern unsigned char LAB_002c4e74; /* 0x2c4e74 */
extern unsigned char LAB_002c4e78; /* 0x2c4e78 */
extern unsigned char LAB_002c4e84; /* 0x2c4e84 */
extern int DAT_0044ea28; /* 0x44ea28 */
extern unsigned int DAT_0044ea2c; /* 0x44ea2c */

extern unsigned char *FUN_0010024c(char *, unsigned int);
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bf694. */
extern unsigned int *FUN_002c3124(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
/* Supplied declaration required: FUN_002c5914. */
/* Supplied declaration required: rt_memcpy_w. */


int FUN_002c4c2c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int temp_v2;
  unsigned char *pbVar8;
  unsigned char *temp_v3;
  char *pcVar9;
  unsigned char *pbVar10;
  int temp_v4;
  unsigned int *puVar12;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14 [256];
  char temp_v15;
  char acStack_af [127];
  int temp_v16;
  unsigned char temp_v17 [8];
  
  temp_v5 = param_1;
  FUN_002c5914(param_1,0);
  temp_v1 = DAT_0044ea2c;
  temp_v16 = temp_v5;
  if ((temp_v5 != 0) && (temp_v5 = DAT_0044ea28 + param_1 * 0x18, *(int *)(temp_v5 + 4) == 0)) {
    FUN_002bf694(&temp_v15,DAT_0044ea2c);
    pcVar9 = &temp_v15;
    while (temp_v15 != '\0') {
      puVar2 = (unsigned char *)FUN_0010024c(pcVar9,0x5c);
      if (puVar2 != (unsigned char *)0x0) {
        *puVar2 = 0x2f;
      }
      pcVar9 = pcVar9 + 1;
      temp_v15 = *pcVar9;
    }
    FUN_002bf694(temp_v1,&temp_v15);
    FUN_002be624(temp_v14,&LAB_002c4e84,temp_v1,temp_v5 + 8,&LAB_002c4e78,&LAB_002c4e74);
    puVar3 = (unsigned int *)FUN_002c3124(temp_v14,temp_v17,0);
    if (puVar3 != (unsigned int *)0x0) {
      temp_v1 = 0x100;
      FUN_002c498c(0x100,0x100,0,8,1);
      *(unsigned int *)(temp_v5 + 4) = temp_v1;
      puVar5 = (unsigned int *)0x100;
      FUN_002c498c(0x100,0x100,0,0x40,1);
      temp_v4 = 0;
      **(int **)(temp_v5 + 4) = (int)puVar5;
      pbVar10 = (unsigned char *)(puVar3 + 0x10);
      temp_v1 = puVar3[1];
      temp_v8 = puVar3[2];
      temp_v9 = puVar3[3];
      temp_v10 = puVar3[4];
      temp_v11 = puVar3[5];
      temp_v12 = puVar3[6];
      temp_v13 = puVar3[7];
      *puVar5 = *puVar3;
      puVar5[1] = temp_v1;
      puVar5[2] = temp_v8;
      puVar5[3] = temp_v9;
      puVar5[4] = temp_v10;
      puVar5[5] = temp_v11;
      puVar5[6] = temp_v12;
      puVar5[7] = temp_v13;
      temp_v1 = puVar3[9];
      temp_v8 = puVar3[10];
      temp_v9 = puVar3[0xb];
      temp_v10 = puVar3[0xc];
      temp_v11 = puVar3[0xd];
      temp_v12 = puVar3[0xe];
      temp_v13 = puVar3[0xf];
      puVar5[8] = puVar3[8];
      puVar5[9] = temp_v1;
      puVar5[10] = temp_v8;
      puVar5[0xb] = temp_v9;
      puVar5[0xc] = temp_v10;
      puVar5[0xd] = temp_v11;
      puVar5[0xe] = temp_v12;
      puVar5[0xf] = temp_v13;
      temp_v6 = **(int **)(temp_v5 + 4);
      puVar12 = (unsigned int *)0x0;
      if (0 < *(int *)(temp_v6 + 0x20)) {
        do {
          puVar6 = (unsigned int *)0x100;
          FUN_002c498c(0x100,0x100,0,0x14,1);
          *puVar6 = (unsigned int)*pbVar10;
          temp_v0 = pbVar10[4];
          puVar6[1] = (unsigned int)temp_v0;
          *(unsigned char *)(puVar6 + 2) = pbVar10[8];
          if (temp_v0 == 0) {
            temp_v2 = 0;
          }
          else {
            temp_v2 = 0x100;
            FUN_002c498c(0x100,0x100,0,puVar6[1] * 0x14,1);
          }
          puVar6[3] = temp_v2;
          pbVar8 = pbVar10 + 0xc;
          if (0 < (int)puVar6[1]) {
            rt_memcpy_w(puVar6[3],pbVar8,puVar6[1] * 0x14);
            pbVar8 = temp_v3;
          }
          temp_v2 = puVar6[1];
          temp_v7 = puVar12 == (unsigned int *)0x0;
          if (temp_v7) {
            pbVar8 = *(unsigned char **)(temp_v5 + 4);
          }
          temp_v4 = temp_v4 + 1;
          if (temp_v7) {
            *(unsigned int **)(pbVar8 + 4) = puVar6;
          }
          pbVar10 = pbVar10 + temp_v2 * 0x14 + 0xc;
          if (!temp_v7) {
            puVar12[4] = (unsigned int)puVar6;
          }
          puVar12 = puVar6;
        } while (temp_v4 < *(int *)(temp_v6 + 0x20));
      }
      FUN_002c415c(puVar3);
    }
  }
  return temp_v16;
}

} /* extern "C" */
