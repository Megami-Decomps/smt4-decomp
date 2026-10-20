/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5704` (_code @ 0x2a5704, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4e98(void);
int FUN_002bd420(int, unsigned int [2], int);
int FUN_002c2264(unsigned int);
int FUN_002c415c(void);
int FUN_002c498c(int, int, int, unsigned int);
int SBORROW4(int, int);

typedef struct fn_002a5704_arg0 fn_002a5704_arg0;
struct fn_002a5704_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x8b];
    void *field_0x94; /* +0x94 */
    unsigned char pad_0x98[0x8];
    undefined4 field_0xa0; /* +0xa0 */
    undefined4 field_0xa4; /* +0xa4 */
};

typedef int romwright_code(...);
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_002a4e98. */
/* Supplied declaration required: FUN_002bd420. */
extern int FUN_002c1870(int, char *, unsigned int);
/* Supplied declaration required: FUN_002c2264. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */


void FUN_002a5704(fn_002a5704_arg0 *param_1,unsigned int *param_2)

{
/* irregular: irregular input(s): in_s0; 7 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned short *puVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  int *piVar9;
  int temp_v4;
  unsigned int unaff_r4;
  int *piVar11;
  unsigned short *unaff_r7;
  unsigned int *puVar12;
  int temp_v5;
  unsigned int temp_v6;
  unsigned short *puVar15;
  unsigned char temp_v7;
  float in_s0;
  int temp_v8;
  float temp_v9;
  unsigned int temp_v10 [2];
  int iStack_38;
  unsigned int *puStack_30;
  int iStack_2c;
  unsigned int *puStack_28;
  unsigned int uStack_24;
  
  puVar6 = *(unsigned int **)(*(int *)&param_1->field_0x8 + 8);
  puVar6[0x1e] = 0x3f800000;
  puVar7 = param_2;
  puVar1 = puVar6;
  if (-1 < (int)param_2) {
    puVar7 = (unsigned int *)puVar6[0xd];
    puVar1 = puVar7;
  }
  if ((puVar7 != (unsigned int *)0x0 && (-1 < (int)param_2 && -1 < (int)puVar1)) &&
     ((int)param_2 < (int)puVar1)) {
    temp_v9 = 0.0f;
    if ((*puVar6 & 1) != 0) {
      temp_v3 = puVar6[0xb];
      if (*(int *)(temp_v3 + 0x228) == 0) {
        piVar11 = (int *)0x0;
      }
      else {
        piVar11 = *(int **)(*(int *)(*(int *)(temp_v3 + 0x28) + 0x1c) +
                           *(int *)(temp_v3 + 0x22c) * *(int *)(*(int *)(temp_v3 + 0x28) + 0x28) * 4);
      }
      if (piVar11 != (int *)0x0) {
        piVar9 = (int *)(**(romwright_code **)(*piVar11 + 8))(piVar11);
        do {
          if (piVar9 == (int *)0x4722a0) {
            if (piVar11 != (int *)0x0) {
              *(float *)(piVar11[9] + 4) = temp_v9;
              *(float *)(piVar11[0xd] + 4) = temp_v9;
              *(unsigned char *)((int)piVar11 + 0x41) = 1;
              temp_v3 = puVar6[0x14];
              puVar12 = (unsigned int *)puVar6[0x13];
              puVar6[0x13] = temp_v3;
              puVar6[0x14] = 0;
              *(unsigned int *)piVar11[5] = temp_v3;
              *(unsigned int *)(piVar11[5] + 4) = 0;
              if (puVar12 != (unsigned int *)0x0) {
                (**(romwright_code **)*puVar12)(puVar12);
                (**(romwright_code **)(*(int *)puVar12[1] + 0xc))((int *)puVar12[1],puVar12);
              }
              *puVar6 = *puVar6 & 0xfffffffe;
            }
            break;
          }
          piVar9 = (int *)*piVar9;
        } while (piVar9 != (int *)0x0);
      }
    }
    piVar11 = (int *)puVar6[0x13];
    if (piVar11 != (int *)0x0) {
      (**(romwright_code **)(*piVar11 + 0x24))(piVar11,*(unsigned int *)(puVar6[0xc] + (int)param_2 * 4));
      puVar6[0xe] = (unsigned int)param_2;
      if (in_s0 != temp_v9) {
        temp_v8 = piVar11[0x11];
        (*(romwright_code *)piVar11[0x13])(piVar11[0x14]);
        temp_v4 = piVar11[0xe];
        piVar11[0xe] = temp_v8;
        piVar11[0xf] = temp_v4;
        *(unsigned char *)(piVar11 + 0x16) = 1;
      }
      if (puVar6[0x28] != 0) {
        piVar11 = (int *)0x0;
      }
      if (0 < (int)puVar6[0x28]) {
        do {
          temp_v4 = puVar6[0x29] + (int)piVar11 * 0xc;
          FUN_002c2264(*(unsigned int *)(temp_v4 + 8));
          *(unsigned int *)(temp_v4 + 8) = 0;
          piVar11 = (int *)((int)piVar11 + 1);
        } while ((int)piVar11 < (int)puVar6[0x28]);
      }
      if (puVar6[0x29] != 0) {
        FUN_002c415c();
        puVar6[0x29] = 0;
      }
      puVar6[0x28] = 0;
      iStack_2c = *(int *)(puVar6[1] + 0xc);
      (*(unsigned long long *)&puStack_28) = romwright_piece_4_4(unaff_r4,param_2);
      temp_v4 = 0;
      puVar7 = puVar6 + 0x25;
      puVar6[0x28] = 0;
      temp_v3 = puVar6[0x25];
      temp_v6 = 0;
      puStack_30 = puVar6;
      if (0 < (int)temp_v3) {
        do {
          temp_v8 = iStack_2c;
          temp_v0 = FUN_002c1870(iStack_2c,"ATBC",4);
          if (temp_v0 == 0) {
            temp_v5 = *(int *)(temp_v8 + 8);
            temp_v7 = temp_v5 == 0;
            temp_v0 = temp_v5;
            if (0 < temp_v5) {
              temp_v0 = temp_v5 - temp_v4;
              temp_v7 = temp_v5 == temp_v4;
            }
            if (!temp_v7 && temp_v0 < 0 == (0 < temp_v5 && SBORROW4(temp_v5,temp_v4))) {
              temp_v0 = 0;
              temp_v8 = temp_v8 + *(int *)(temp_v8 + 0x10);
              do {
                temp_v1 = FUN_002c1870(temp_v8,"EPLSIGN",7);
                if (temp_v1 != 0) break;
                FUN_002bd420(temp_v8,temp_v10,0x10);
                unaff_r7 = (unsigned short *)(temp_v8 + 0x10);
                if (temp_v4 == temp_v0) break;
                temp_v0 = temp_v0 + 1;
                temp_v8 = temp_v8 + iStack_38;
              } while (temp_v5 != 0);
            }
          }
          if (((*(unsigned int *)(unaff_r7 + 6) & 1) == 0) && ((unsigned int *)*(int *)(unaff_r7 + 8) == puStack_28)
             ) {
            temp_v6 = ((unsigned int)unaff_r7[1] - (unsigned int)*unaff_r7) + temp_v6 + 1;
          }
          temp_v3 = *puVar7;
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)temp_v3);
      }
      if (temp_v6 == 0) {
        temp_v3 = 0;
      }
      puVar6[0x28] = temp_v6;
      if (temp_v6 == 0) {
        puVar6[0x29] = temp_v3;
      }
      else {
        temp_v10[0] = 1;
        temp_v3 = 0x100;
        FUN_002c498c(0x100,0x100,0,puVar6[0x28] * 0xc);
        puVar6[0x29] = temp_v3;
        temp_v4 = 0;
        temp_v8 = 0;
        if (temp_v8 < (int)*puVar7) {
          do {
            temp_v0 = iStack_2c;
            temp_v5 = FUN_002c1870(iStack_2c,"ATBC",4);
            if (temp_v5 == 0) {
              temp_v1 = *(int *)(temp_v0 + 8);
              temp_v7 = temp_v1 == 0;
              temp_v5 = temp_v1;
              if (0 < temp_v1) {
                temp_v5 = temp_v1 - temp_v8;
                temp_v7 = temp_v1 == temp_v8;
              }
              if (!temp_v7 && temp_v5 < 0 == (0 < temp_v1 && SBORROW4(temp_v1,temp_v8))) {
                temp_v5 = 0;
                temp_v0 = temp_v0 + *(int *)(temp_v0 + 0x10);
                do {
                  temp_v2 = FUN_002c1870(temp_v0,"EPLSIGN",7);
                  if (temp_v2 != 0) break;
                  FUN_002bd420(temp_v0,temp_v10,0x10);
                  unaff_r7 = (unsigned short *)(temp_v0 + 0x10);
                  if (temp_v8 == temp_v5) break;
                  temp_v5 = temp_v5 + 1;
                  temp_v0 = temp_v0 + iStack_38;
                } while (temp_v1 != 0);
              }
            }
            puVar15 = (unsigned short *)0x0;
            if (unaff_r7 != (unsigned short *)0x0) {
              puVar15 = unaff_r7 + 10;
            }
            if ((((*(unsigned int *)(unaff_r7 + 6) & 1) == 0) &&
                ((unsigned int *)*(int *)(unaff_r7 + 8) == puStack_28)) &&
               (temp_v3 = (unsigned int)*unaff_r7, temp_v3 <= unaff_r7[1])) {
              do {
                puVar12 = (unsigned int *)(puVar6[0x29] + temp_v4 * 0xc);
                puVar5 = puVar15;
                FUN_002a4e98();
                puVar12[1] = temp_v3;
                puVar12[2] = (unsigned int)puVar5;
                temp_v3 = temp_v3 + 1;
                temp_v4 = temp_v4 + 1;
                *puVar12 = *(unsigned int *)(unaff_r7 + 6);
              } while ((int)temp_v3 <= (int)(unsigned int)unaff_r7[1]);
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < (int)*puVar7);
        }
      }
      return;
    }
  }
  return;
}

} /* extern "C" */
