/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157050` (_code @ 0x157050, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016a438(void);
int FUN_0016ae94(int, int);
int FUN_0018878c(unsigned char *, unsigned char [512]);
int FUN_0018ab54(unsigned char [64], int);
int FUN_0018f0ac(unsigned char [512], int, unsigned char [64]);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_2_stack;

/* Supplied declaration required: FUN_0016a438. */
/* Supplied declaration required: FUN_0016ae94. */
/* Supplied declaration required: FUN_0018878c. */
/* Supplied declaration required: FUN_0018ab54. */
/* Supplied declaration required: FUN_0018f0ac. */
extern unsigned int *FUN_001af0d0(unsigned int *, unsigned int);


void FUN_00157050(int param_1,int param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  unsigned int *puVar6;
  int temp_v2;
  unsigned int *puVar8;
  unsigned int *puVar9;
  unsigned char *puVar10;
  int temp_v3;
  int *piVar12;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [512];
  unsigned char temp_v9 [64];
  
  piVar12 = *(int **)(param_1 + 0xe0);
  FUN_0016a438();
  if ((*(unsigned int *)(param_1 + 4) & 2) != 0) {
    FUN_0016ae94(param_1,param_2);
  }
  else {
    FUN_0018ab54(temp_v9,param_2 + 0xa8);
    puVar10 = *(unsigned char **)(param_1 + 0x18);
    FUN_0018f0ac(temp_v8,*(unsigned char *)(param_1 + 0x193),temp_v9);
    FUN_0018878c(puVar10,temp_v8);
    puVar10[2] = *(unsigned char *)(param_1 + 400);
    puVar10[3] = *(unsigned char *)(param_1 + 0x191);
    puVar10[4] = *(unsigned char *)(param_1 + 0x192);
    *puVar10 = 1;
    puVar10[1] = 0;
  }
  if (piVar12 != (int *)0x0) {
    temp_v4 = 0;
    temp_v3 = 0;
    temp_v0 = piVar12[0x12];
    temp_v5 = piVar12[1];
    puVar2 = (unsigned int *)piVar12[temp_v0 * 8 + 5];
    puVar8 = (unsigned int *)piVar12[temp_v0 * 8 + 4];
    if (0 < temp_v5) {
      do {
        temp_v2 = 0;
        temp_v1 = 0;
        puVar4 = puVar8;
        do {
          temp_v6 = temp_v2 * 0x10 + 0x144;
          puVar6 = (unsigned int *)(*piVar12 + temp_v3 * 0x100 + temp_v2 * 0x20);
          if (*(char *)(puVar6 + 7) != '\0') {
            *puVar4 = *puVar6;
            *puVar2 = puVar6[1];
            if (*(char *)((int)puVar6 + 0x1d) == '\0') {
              temp_v7 = 1;
            }
            else {
              temp_v7 = 4;
            }
            puVar4[1] = temp_v6 | (temp_v7 << 0x14) | 0x800f0000;
            if (*(char *)((int)puVar6 + 0x1d) == '\0') {
              temp_v7 = 1;
            }
            else {
              temp_v7 = 4;
            }
            puVar2[1] = temp_v6 | (temp_v7 << 0x14) | 0x800f0000;
            puVar9 = puVar4 + 3;
            puVar4[2] = (unsigned int)*(unsigned short *)(puVar6 + 2);
            puVar3 = puVar2 + 3;
            puVar2[2] = (unsigned int)*(unsigned short *)((int)puVar6 + 10);
            if (*(char *)((int)puVar6 + 0x1d) != '\0') {
              *puVar9 = puVar6[3];
              *puVar3 = puVar6[4];
              puVar9 = puVar4 + 5;
              puVar4[4] = puVar6[5];
              puVar3 = puVar2 + 5;
              puVar2[4] = puVar6[6];
            }
            puVar4 = puVar9 + 1;
            *puVar9 = 0;
            puVar2 = puVar3 + 1;
            *puVar3 = 0;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 8);
        if (puVar4 != puVar8) {
          temp_v1 = (((int)puVar4 - (int)puVar8) & 0xfffffffcU) + 8;
          if (((temp_v1 & 0xf) != 0) && (temp_v6 = 4 - ((temp_v1 & 0xf) >> 2), 0 < (int)temp_v6)) {
            puVar6 = puVar4 + -1;
            if ((temp_v6 & 1) != 0) {
              *puVar4 = 0;
              puVar6 = puVar4;
            }
            for (temp_v2 = (int)temp_v6 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              puVar6[1] = 0;
              puVar6 = puVar6 + 2;
              *puVar6 = 0;
            }
            puVar4 = puVar4 + temp_v6;
          }
          if (((temp_v1 & 0xf) != 0) && (temp_v1 = 4 - ((temp_v1 & 0xf) >> 2), 0 < (int)temp_v1)) {
            puVar6 = puVar2 + -1;
            if ((temp_v1 & 1) != 0) {
              *puVar2 = 0;
              puVar6 = puVar2;
            }
            for (temp_v2 = (int)temp_v1 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
              puVar6[1] = 0;
              puVar6 = puVar6 + 2;
              *puVar6 = 0;
            }
            puVar2 = puVar2 + temp_v1;
          }
          puVar4 = (unsigned int *)FUN_001af0d0(puVar4,1);
          puVar2 = (unsigned int *)FUN_001af0d0(puVar2,1);
          temp_v1 = ((int)puVar4 - (int)puVar8) & 0xfffffffc;
          *(short *)(piVar12[temp_v0 * 8 + 2] + temp_v3 * 4) = (short)temp_v4;
          temp_v4 = temp_v4 + temp_v1;
        }
        temp_v2 = temp_v3 * 4;
        temp_v3 = temp_v3 + 1;
        *(short *)(piVar12[temp_v0 * 8 + 2] + temp_v2 + 2) = (short)temp_v1;
        puVar8 = puVar4;
      } while (temp_v3 < temp_v5);
    }
    piVar12[temp_v0 * 8 + 6] = temp_v4;
    *(unsigned char *)(piVar12 + temp_v0 * 8 + 9) = 1;
    return;
  }
  return;
}

} /* extern "C" */
