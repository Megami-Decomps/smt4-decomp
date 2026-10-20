/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234b30` (_code @ 0x234b30, 0x7e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00272e64(void);
int FUN_002941b0(void);
int FUN_002b5cb4(void);
int FUN_002b5cd4(void);
int FUN_00312ea0(int);
int FUN_00352bc4(void);
int FUN_00384830(void);
int FUN_003d4ed8(unsigned int);
int FUN_003fd76c(int, int);
int FUN_003fdb18(int);
int FUN_003fe86c(int, int, int);
int FUN_004ff920(int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spB0; /* 0xb0: local_b0 */
} void_stack;

extern int *DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581280; /* 0x581280 */
extern int g_lmapScene; /* 0x581288 */
extern int g_gameState; /* 0x5f15fc */
extern signed char DAT_005f161f; /* 0x5f161f */

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00272e64. */
/* Supplied declaration required: FUN_002941b0. */
/* Supplied declaration required: FUN_002b5cb4. */
/* Supplied declaration required: FUN_002b5cd4. */
/* Supplied declaration required: FUN_00312ea0. */
/* Supplied declaration required: FUN_00352bc4. */
/* Supplied declaration required: FUN_00384830. */
/* Supplied declaration required: FUN_003d4ed8. */
/* Supplied declaration required: FUN_003fd76c. */
/* Supplied declaration required: FUN_003fdb18. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_004ff920. */
extern int slots4FGetActiveValue(int);


void FUN_00234b30(void)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 14 native warning(s); review required */
  short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float *pfVar9;
  int temp_v8;
  int *piVar11;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  float *pfVar16;
  unsigned int in_fpscr;
  int temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float temp_v21;
  float temp_v22 [5];
  int temp_v23 [12];
  int temp_v24;
  
  temp_v19 = 0x43020000437a0000;
  temp_v18 = 0x428c000042480000;
  temp_v20 = 180.0f;
  temp_v16 = 0x47c34f8000000000;
  temp_v24 = 0;
  do {
    temp_v10 = DAT_00581280;
    temp_v4 = DAT_00581280 + temp_v24 * 0x3c;
    if ((*(char *)(temp_v4 + 0xc) != '\0') && (*(char *)(temp_v4 + 0xf) == '\0')) {
      temp_v5 = *(int *)(*(int *)(temp_v4 + 0x40) + 4);
      if (DAT_005f161f != '\0') {
        *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) | 3;
      }
      else {
        temp_v6 = *(unsigned int *)(temp_v5 + 4);
        temp_v7 = temp_v6 & 0xfffffffc;
        *(unsigned int *)(temp_v5 + 4) = temp_v7;
        if (*DAT_005806a4 == 3) {
          temp_v0 = *(short *)(temp_v4 + 0x12);
          if ((temp_v0 != 0x10) && (temp_v0 != 0x11 && temp_v0 != 0x16)) {
            *(unsigned int *)(temp_v5 + 4) = temp_v7 | 3;
            temp_v24 = temp_v24 + 1;
            if (temp_v24 >= 0x40) {
              return;
            }
            continue;
          }
          *(unsigned int *)(temp_v5 + 4) = temp_v6 & 0xfffffffc;
        }
        if ((*(char *)(temp_v10 + 0xf40) == '\0') || (*(char *)(temp_v4 + 0xe) != '\0')) {
          temp_v13 = *(int *)(g_lmapScene + 0x1c);
          FUN_002b5cb4();
          temp_v10 = *(int *)(temp_v4 + 0x3c);
          if (temp_v10 != 0) {
            if (*(char *)(temp_v4 + 0xe) != '\0') {
              *(unsigned int *)(temp_v4 + 0x2c) = 0;
            }
            else {
              if ((*(int *)(temp_v4 + 0x44) >= 0x10) ||
                 (FUN_00312ea0(temp_v10), *(char *)(temp_v10 + 1) != '\0')) {
                *(unsigned int *)(temp_v4 + 0x2c) = 0;
              }
              else {
                *(unsigned int *)(temp_v4 + 0x2c) = 1;
              }
              temp_v3 = *(unsigned int *)(temp_v10 + 0x10);
              temp_v9 = *(unsigned int *)(temp_v10 + 0x14);
              *(unsigned int *)(temp_v4 + 0x1c) = *(unsigned int *)(temp_v10 + 0xc);
              *(unsigned int *)(temp_v4 + 0x20) = temp_v3;
              *(unsigned int *)(temp_v4 + 0x24) = temp_v9;
              *(unsigned int *)(temp_v4 + 0x28) = *(unsigned int *)(temp_v10 + 0x28);
            }
          }
          if (((*(char *)(DAT_00581280 + 0xf40) == '\0') && (*DAT_005806a4 != 3)) &&
             (*(char *)(temp_v4 + 0xe) == '\0')) {
            temp_v13 = DAT_005806a4[0x14];
            FUN_002941b0();
            if (temp_v13 < 0x42aa0000) {
              temp_v6 = in_fpscr & 0xfffffff;
              in_fpscr = temp_v6 | ((unsigned int)((float)DAT_005806a4[0x15] <= *(float *)(temp_v4 + 0x20)) <<
                                 0x1d);
              if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                temp_v14 = (float)temp_v19;
                if (*(short *)(temp_v4 + 0x12) == 5 || *(short *)(temp_v4 + 0x12) == 6) {
                  temp_v14 = (float)((unsigned long long)temp_v19 >> 0x20);
                }
                in_fpscr = temp_v6 | ((unsigned int)(temp_v14 <=
                                          (float)DAT_005806a4[0x15] - *(float *)(temp_v4 + 0x20)) <<
                                   0x1d);
                if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) goto LAB_002352dc;
              }
            }
          }
          if (g_gameState >= 0x65) {
            temp_v22[0] = (float)((unsigned long long)temp_v16 >> 0x20);
            temp_v23[0] = -1;
            temp_v22[1] = temp_v22[0];
            temp_v23[1] = -1;
            temp_v10 = 0;
            temp_v22[2] = temp_v22[0];
            temp_v11 = 0;
            temp_v23[2] = -1;
            do {
              temp_v2 = DAT_00581280 + temp_v11 * 0x3c;
              if (*(char *)(temp_v2 + 0xc) != '\0') {
                *(unsigned char *)(temp_v2 + 0xd) = 0;
                temp_v14 = *(float *)(g_lmapScene + 0x1c);
                FUN_002b5cb4();
                if (temp_v10 < 3) {
                  if (temp_v23[0] != -1) {
                    if (temp_v23[1] == -1) {
                      temp_v22[1] = temp_v14;
                      temp_v23[1] = temp_v11;
                      temp_v10 = temp_v10 + 1;
                    }
                    else if (temp_v23[2] == -1) {
                      temp_v22[2] = temp_v14;
                      temp_v23[2] = temp_v11;
                      temp_v10 = temp_v10 + 1;
                    }
                  }
                  else {
                    temp_v22[0] = temp_v14;
                    temp_v10 = temp_v10 + 1;
                    temp_v23[0] = temp_v11;
                  }
                }
                else {
                  in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v22[0] <= temp_v14) << 0x1d);
                  if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                    temp_v22[0] = temp_v14;
                    temp_v23[0] = temp_v11;
                  }
                }
                temp_v2 = 0;
                if (temp_v2 < temp_v10 - 1) {
                  do {
                    temp_v8 = (temp_v10 - temp_v2) - 1;
                    if (0 < temp_v8) {
                      pfVar16 = temp_v22 + temp_v2;
                      piVar11 = temp_v23 + temp_v2 + 1;
                      pfVar9 = pfVar16;
                      do {
                        pfVar9 = pfVar9 + 1;
                        temp_v14 = *pfVar16;
                        in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(*pfVar9 <= temp_v14) << 0x1d);
                        if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                          temp_v12 = temp_v23[temp_v2];
                          *pfVar16 = *pfVar9;
                          temp_v23[temp_v2] = *piVar11;
                          *pfVar9 = temp_v14;
                          *piVar11 = temp_v12;
                        }
                        temp_v8 = temp_v8 - 1;
                        piVar11 = piVar11 + 1;
                      } while (temp_v8 != 0);
                    }
                    temp_v2 = temp_v2 + 1;
                  } while (temp_v2 < temp_v10 - 1);
                }
              }
              temp_v11 = temp_v11 + 1;
            } while (temp_v11 < 0x40);
            temp_v11 = 0;
            if (temp_v11 < temp_v10) {
              do {
                piVar11 = temp_v23 + temp_v11;
                temp_v11 = temp_v11 + 1;
                temp_v2 = DAT_00581280 + *piVar11 * 0x3c;
                if (*(char *)(temp_v2 + 0xc) != '\0') {
                  *(unsigned char *)(temp_v2 + 0xd) = 1;
                }
              } while (temp_v11 < temp_v10);
            }
          }
          else {
            temp_v14 = (float)DAT_005806a4[0x14];
            FUN_00352bc4();
            temp_v10 = 0;
            do {
              temp_v11 = DAT_00581280 + temp_v10 * 0x3c;
              temp_v21 = temp_v14;
              if (*(char *)(temp_v11 + 0xc) != '\0') {
                temp_v17 = (float)temp_v18;
                FUN_00352bc4();
                if (DAT_005806a4[0x2c] == -1) {
                  temp_v17 = (float)((unsigned long long)temp_v18 >> 0x20);
                }
                temp_v21 = temp_v14;
                FUN_002b5cd4();
                temp_v15 = -temp_v17;
                temp_v6 = in_fpscr & 0xfffffff;
                temp_v7 = temp_v6 | ((unsigned int)(temp_v14 < temp_v15) << 0x1f) |
                        ((unsigned int)(temp_v14 == temp_v15) << 0x1e);
                in_fpscr = temp_v7 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v15 != temp_v15)) << 0x1c);
                temp_v1 = (unsigned char)(temp_v7 >> 0x18);
                if (((!(unsigned char)((temp_v1 >> 6) & 1) && temp_v1 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) &&
                    (in_fpscr = temp_v6 | ((unsigned int)(temp_v17 <= temp_v14) << 0x1d),
                    !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) ||
                   (*(unsigned char *)(temp_v11 + 0xd) = 0, g_gameState == 0x19)) {
                  *(unsigned char *)(temp_v11 + 0xd) = 1;
                }
              }
              temp_v10 = temp_v10 + 1;
              temp_v14 = temp_v21;
            } while (temp_v10 < 0x40);
          }
          FUN_003fd76c(temp_v5,temp_v4 + 0x1c);
          temp_v10 = (int)temp_v16;
          FUN_003fdb18(temp_v5);
          if (((*(char *)(DAT_00581280 + 0xf40) != '\0') && (*(char *)(temp_v4 + 0xe) != '\0')) &&
             (*(short *)(temp_v4 + 0x10) == 2)) {
            temp_v10 = *(int *)(temp_v4 + 0x1c);
            FUN_00384830();
            temp_v14 = *(float *)(temp_v4 + 0x28);
            if (temp_v10 >= 0x42dc0000) {
              FUN_00272e64();
              temp_v14 = temp_v14 + temp_v20;
            }
            else {
              FUN_00272e64();
            }
            VectorSignedToFloat((int)temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v10 = (int)temp_v16;
            FUN_003fdb18(temp_v5);
          }
          temp_v11 = slots4FGetActiveValue(temp_v5);
          if (temp_v11 != *(int *)(temp_v4 + 0x2c)) {
            temp_v10 = (int)temp_v16;
            FUN_003fe86c(temp_v5,*(int *)(temp_v4 + 0x2c),2);
            *(int *)(temp_v4 + 0x30) = (int)temp_v16;
          }
          FUN_004ff920(temp_v5);
          if ((*(int *)(temp_v4 + 0x2c) == 1) && (temp_v13 < 0x44960000)) {
            temp_v11 = *(int *)(temp_v4 + 0x30);
            if ((((temp_v11 < 0x3f800000) && (temp_v10 >= 0x3f800000)) ||
                ((temp_v11 < 0x42240000 && (temp_v10 >= 0x42240000)))) ||
               ((temp_v11 < 0x42a20000 && (temp_v10 >= 0x42a20000)))) {
              if (temp_v13 < 0x43c80000) {
                temp_v3 = 0x10002d0;
              }
              else if (temp_v13 < 0x44480000) {
                temp_v3 = 0x10002d2;
              }
              else {
                temp_v3 = 0x10002d4;
              }
              FUN_003d4ed8(temp_v3);
            }
            else if ((((0x41a7ffff >= temp_v11) && (temp_v10 >= 0x41a80000)) ||
                     ((0x4273ffff >= temp_v11 && (temp_v10 >= 0x42740000)))) ||
                    ((0x42c9ffff >= temp_v11 && (temp_v10 >= 0x42ca0000)))) {
              if (temp_v13 < 0x43c80000) {
                temp_v3 = 0x10002cf;
              }
              else if (temp_v13 < 0x44480000) {
                temp_v3 = 0x10002d1;
              }
              else {
                temp_v3 = 0x10002d3;
              }
              FUN_003d4ed8(temp_v3);
            }
          }
          *(int *)(temp_v4 + 0x30) = temp_v10;
          if ((*(char *)(DAT_00581280 + 0xf40) == '\0') && (*DAT_005806a4 != 3)) {
            if (*(char *)(temp_v4 + 0xd) != '\0') {
              *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) & 0xfffffffc;
            }
            else {
              *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) | 3;
            }
          }
        }
        else {
LAB_002352dc:
          *(unsigned int *)(temp_v5 + 4) = *(unsigned int *)(temp_v5 + 4) | 3;
        }
      }
    }
    temp_v24 = temp_v24 + 1;
    if (temp_v24 >= 0x40) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
