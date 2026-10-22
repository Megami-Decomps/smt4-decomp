/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f888` (_code @ 0x19f888, 0x2a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdDeallocateArrayStorage(int, int, int);
int FUN_00178b04(int, unsigned char *, int);
int FUN_001abbc4(void);
int FUN_001ad70c(unsigned short *, int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned char LAB_0019fb28; /* 0x19fb28 */

extern unsigned int *FUN_001006c2(int, unsigned int);
/* Supplied declaration required: asdDeallocateArrayStorage. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001abbc4. */
extern int asdAtbcGetEntryCount(unsigned short *);
extern unsigned int FUN_001ad5d8(unsigned short *);
/* Supplied declaration required: FUN_001ad70c. */


/* WARNING: Removing unreachable block (ram,0x0019f9dc) */
/* WARNING: Removing unreachable block (ram,0x0019f9e8) */

void FUN_0019f888(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short *puVar2;
  int temp_v1;
  unsigned short *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int *puVar9;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int *puVar12;
  int temp_v5;
  int *piVar14;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  
  puVar2 = *(unsigned short **)(param_1 + 4);
  temp_v1 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 0xc) != temp_v1) {
    *(unsigned int *)(param_1 + 0x10) = temp_v1 - ((temp_v1 - *(int *)(param_1 + 0xc)) & 0xfffffffcU);
  }
  temp_v1 = asdAtbcGetEntryCount(puVar2);
  *(unsigned int *)(param_1 + 8) = 0;
  temp_v8 = 0;
  if (temp_v8 < temp_v1) {
    do {
      puVar4 = puVar2;
      FUN_001ad70c(puVar2,temp_v8);
      temp_v6 = (unsigned int)*puVar4;
      temp_v7 = 0xffffffff;
      if ((*(unsigned int *)(puVar4 + 6) & 1) == 0) {
        temp_v7 = *(unsigned int *)(puVar4 + 8);
      }
      if (temp_v6 <= puVar4[1]) {
        do {
          puVar5 = (unsigned int *)0x10;
          FUN_00178b04(0x10,&LAB_0019fb28,0x6f);
          if (puVar5 != (unsigned int *)0x0) {
            puVar5[1] = 0;
            *puVar5 = 0xffffffff;
            puVar5[2] = 0;
            puVar5[3] = 0;
          }
          temp_v2 = FUN_001ad5d8(puVar4);
          FUN_001abbc4();
          puVar5[3] = temp_v2;
          puVar5[2] = temp_v6;
          piVar14 = (int *)(param_1 + 0xc);
          puVar5[1] = *(unsigned int *)(puVar4 + 6);
          *puVar5 = temp_v7;
          puVar7 = *(unsigned int **)(param_1 + 0x10);
          if (puVar7 != *(unsigned int **)(param_1 + 0x14)) {
            *(unsigned int **)(param_1 + 0x10) = puVar7 + 1;
            if (puVar7 != (unsigned int *)0x0) {
              *puVar7 = (unsigned int)puVar5;
            }
          }
          else {
            temp_v0 = ((int)puVar7 - *piVar14) >> 2;
            if (temp_v0 < (unsigned int)(((int)*(unsigned int **)(param_1 + 0x14) - *piVar14) >> 2)) {
              *(unsigned int **)(param_1 + 0x10) = puVar7 + 1;
              if (puVar7 != (unsigned int *)0x0) {
                *puVar7 = puVar7[-1];
              }
              *puVar7 = (unsigned int)puVar5;
            }
            else {
              temp_v4 = temp_v0 + (temp_v0 >> 1) + (temp_v0 >> 3);
              if (temp_v4 < temp_v0 + 0x20) {
                temp_v4 = temp_v0 + 0x20;
              }
              puVar8 = (unsigned int *)FUN_001006c2(temp_v4 << 2,0);
              puVar9 = puVar8;
              for (puVar12 = (unsigned int *)*piVar14; puVar12 != puVar7; puVar12 = puVar12 + 1) {
                if (puVar9 != (unsigned int *)0x0) {
                  *puVar9 = *puVar12;
                }
                puVar9 = puVar9 + 1;
              }
              puVar12 = (unsigned int *)((((int)puVar7 - *piVar14) & 0xfffffffcU) + (int)puVar8);
              if (puVar12 != (unsigned int *)0x0) {
                *puVar12 = (unsigned int)puVar5;
              }
              puVar12 = *(unsigned int **)(param_1 + 0x10);
              puVar5 = (unsigned int *)((((int)puVar7 - *piVar14) & 0xfffffffcU) + (int)puVar8);
              for (; puVar7 != puVar12; puVar7 = puVar7 + 1) {
                puVar5 = puVar5 + 1;
                if (puVar5 != (unsigned int *)0x0) {
                  *puVar5 = *puVar7;
                }
              }
              temp_v3 = *piVar14;
              temp_v5 = *(int *)(param_1 + 0x10);
              asdDeallocateArrayStorage(temp_v3,(*(int *)(param_1 + 0x14) - temp_v3) >> 2,0);
              *(unsigned int **)(param_1 + 0x14) = puVar8 + temp_v4;
              *(unsigned int **)(param_1 + 0x10) = puVar8 + ((temp_v5 - temp_v3) >> 2) + 1;
              *piVar14 = (int)puVar8;
            }
          }
          temp_v6 = temp_v6 + 1;
          *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
        } while ((int)temp_v6 <= (int)(unsigned int)puVar4[1]);
      }
      temp_v8 = temp_v8 + 1;
    } while (temp_v8 < temp_v1);
  }
  return;
}

} /* extern "C" */
