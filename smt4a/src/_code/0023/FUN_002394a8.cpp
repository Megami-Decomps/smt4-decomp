/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002394a8` (_code @ 0x2394a8, 0x5e8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00162808(int, int);
int FUN_001677c0(void);
int FUN_0017ffa8(int, int, unsigned int, int);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_001879d0(int);
int FUN_002609d8(unsigned int, int);
int SBORROW4(int, int);
int VectorSignedToFloat(...);
int aeabi_idivmod(int, int);

typedef int romwright_code(...);
/* stack frame of void: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern int DAT_00588124; /* 0x588124 */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_00162808. */
extern int FUN_00164a9c(unsigned int);
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0017ffa8. */
extern int FUN_001801b8(unsigned short, unsigned char);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_002609d8. */
/* Supplied declaration required: aeabi_idivmod. */


unsigned int FUN_002394a8(void)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 13 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  unsigned char temp_v0;
  int temp_v1;
  unsigned short *puVar5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int *piVar12;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char temp_v13;
  unsigned int in_fpscr;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  unsigned long long temp_v17;
  unsigned long long temp_v18;
  unsigned int temp_v19;
  unsigned long long temp_v20;
  unsigned int temp_v21;
  unsigned char temp_v22 [4];
  int temp_v23 [9];
  int temp_v24;
  int temp_v25;
  
  temp_v14 = 0.33f;
  temp_v23[8] = DAT_00588124;
  FUN_001879d0(DAT_0059dbb4);
  temp_v12 = DAT_0059dbb4;
  temp_v1 = FUN_001692ac(1,0);
  piVar12 = (int *)(temp_v12 + 0x1258);
  temp_v4 = *piVar12;
  temp_v5 = piVar12[temp_v4 + 2];
  *piVar12 = temp_v4 + 1;
  piVar12[temp_v4 + 3] = temp_v1;
  if (*(char *)(temp_v12 + 0x1270) != '\0' || temp_v5 != temp_v1) {
    (**(romwright_code **)(temp_v12 + 0x1274))();
    *(unsigned char *)(temp_v12 + 0x1270) = 0;
  }
  temp_v23[0] = -8;
  temp_v23[1] = 1;
  FUN_0017ffa8(2,0,(unsigned int)*(unsigned short *)(temp_v23[8] + 0x102) * 1000,(int)temp_v14 - 0x38);
  temp_v24 = 0;
  if (0 < *(int *)(temp_v23[8] + 0xe4)) {
    temp_v20 = 0x3e9eb852;
    temp_v16 = 0x428c000000000000;
    temp_v17 = 0x43570000;
    temp_v18 = 0x3e4ccccd3f800000;
    do {
      temp_v12 = 0;
      temp_v25 = temp_v23[8] + temp_v24 * 0x10;
      do {
        temp_v1 = (int)*(short *)(temp_v25 + temp_v12 * 2 + 100);
        if (-1 < temp_v1) {
          if (((*(int *)(temp_v23[8] + 0xf0) != 4) ||
              (temp_v4 = *(int *)(temp_v23[8] + 0xfc), temp_v4 != temp_v24)) ||
             (*(int *)(temp_v23[8] + 0xec) < 3)) {
            FUN_002609d8(*(unsigned int *)(temp_v23[8] + temp_v1 * 4 + 4),0);
            temp_v4 = temp_v6;
          }
          temp_v5 = DAT_00588124;
          temp_v11 = temp_v23[8] + temp_v1 * 4;
          if ((*(int *)(temp_v11 + 0x28) != 0) && (DAT_00588124 != 0)) {
            temp_v13 = temp_v1 == 0;
            if (-1 < temp_v1) {
              temp_v4 = *(int *)(DAT_00588124 + 0xf4);
              temp_v13 = temp_v4 == temp_v1;
            }
            if (((!temp_v13 && (-1 < temp_v1 && temp_v1 <= temp_v4)) && (temp_v1 < 8)) &&
               (puVar5 = *(unsigned short **)(DAT_00588124 + temp_v1 * 4 + 0x28),
               puVar5 != (unsigned short *)0x0)) {
              temp_v4 = FUN_001801b8(*puVar5,*(unsigned char *)(puVar5 + 0x29));
              temp_v19 = (unsigned int)temp_v20;
              if (temp_v4 == 0) {
                temp_v5 = temp_v5 + temp_v1 * 0xc;
                temp_v7 = *(int *)(temp_v5 + 0x108);
                temp_v9 = *(int *)(temp_v5 + 0x10c);
                temp_v13 = SBORROW4(temp_v7,temp_v9);
                temp_v4 = temp_v7 - temp_v9;
                if (temp_v9 <= temp_v7) {
                  temp_v13 = SBORROW4(*(int *)(temp_v5 + 0x110),5);
                  temp_v4 = *(int *)(temp_v5 + 0x110) - 5;
                }
                if (temp_v4 < 0 == temp_v13) goto LAB_00239a08;
              }
              temp_v5 = FUN_00164a9c(*(unsigned int *)(temp_v11 + 4));
              temp_v4 = DAT_00588124;
              temp_v21 = (unsigned int)temp_v18;
              if (temp_v5 != 0) {
                temp_v21 = *(unsigned int *)(temp_v5 + 0x24);
              }
              temp_v20 = romwright_piece_4_4(temp_v21,temp_v19);
              if ((DAT_00588124 != 0) &&
                 (puVar5 = *(unsigned short **)(DAT_00588124 + temp_v1 * 4 + 0x28),
                 puVar5 != (unsigned short *)0x0)) {
                temp_v5 = FUN_001801b8(*puVar5,*(unsigned char *)(puVar5 + 0x29));
                if (temp_v5 == 0) {
                  temp_v14 = (float)VectorSignedToFloat(5 - *(int *)(temp_v4 + temp_v1 * 0xc + 0x110),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v14 = temp_v14 * (float)((unsigned long long)temp_v18 >> 0x20);
                  in_fpscr = (in_fpscr & 0xfffffff) |
                             ((unsigned int)((float)((unsigned long long)temp_v17 >> 0x20) <= temp_v14) << 0x1d);
                  if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
                    temp_v14 = (float)((unsigned long long)temp_v17 >> 0x20);
                  }
                  else if ((int)temp_v14 >= 0x3f800001) {
                    temp_v14 = (float)temp_v18;
                  }
                }
                else {
                  temp_v14 = (float)temp_v18;
                }
              }
              else {
                temp_v14 = (float)((unsigned long long)temp_v17 >> 0x20);
              }
              temp_v19 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
              temp_v14 = temp_v14 * (float)(temp_v20 >> 0x20);
              temp_v15 = (float)((unsigned long long)temp_v17 >> 0x20);
              temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 < temp_v15) << 0x1f) |
                       ((unsigned int)(temp_v14 == temp_v15) << 0x1e);
              in_fpscr = temp_v10 | ((unsigned int)((temp_v14 != temp_v14) || (temp_v15 != temp_v15)) << 0x1c);
              temp_v0 = (unsigned char)(temp_v10 >> 0x18);
              if (!(unsigned char)((temp_v0 >> 6) & 1) && temp_v0 >> 7 == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v7 = *(int *)(temp_v11 + 0x28);
                FUN_001677c0();
                temp_v2 = (unsigned int)temp_v20;
                FUN_00183bb0();
                temp_v10 = temp_v2;
                FUN_001879d0(DAT_0059dbb4);
                temp_v1 = DAT_0059dbb4;
                temp_v16 = romwright_piece_4_4(temp_v19,temp_v2);
                temp_v4 = FUN_001692ac(1,0);
                piVar12 = (int *)(temp_v1 + 0x1258);
                temp_v5 = *piVar12;
                temp_v11 = piVar12[temp_v5 + 2];
                *piVar12 = temp_v5 + 1;
                piVar12[temp_v5 + 3] = temp_v4;
                if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v11 != temp_v4) {
                  (**(romwright_code **)(temp_v1 + 0x1274))();
                  *(unsigned char *)(temp_v1 + 0x1270) = 0;
                }
                temp_v14 = (float)VectorSignedToFloat((int)*(char *)(temp_v7 + 0x53),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v23[0] = (int)(temp_v14 + (float)((unsigned long long)temp_v16 >> 0x20));
                temp_v23[1] = 0x20;
                temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 6),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 8),
                                                    (unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_001835b4(2,8,0x18d,(int)(temp_v15 + (float)temp_v17 + temp_v14 + (float)temp_v16));
                temp_v20 = (unsigned long long)temp_v10;
                temp_v10 = 0;
                do {
                  if ((DAT_00588124 != 0) && (temp_v10 < 3)) {
                    temp_v2 = 0;
                    temp_v23[0] = 2;
                    temp_v23[1] = 9;
                    temp_v23[2] = 5;
                    temp_v23[3] = 0xd;
                    temp_v23[4] = 0;
                    temp_v23[5] = 0;
                    temp_v23[6] = 0;
                    temp_v23[7] = 0;
                    do {
                      temp_v1 = temp_v23[temp_v2 + 4];
                      piVar12 = (int *)temp_v22;
                      if ((temp_v2 & 1) == 0) {
                        temp_v1 = temp_v1 + 2;
                        piVar12 = temp_v23;
                      }
                      temp_v5 = 0;
                      for (temp_v4 = (int)(temp_v2 + 1) >> 1; temp_v4 != 0; temp_v4 = temp_v4 - 1) {
                        piVar1 = (int *)((int)piVar12 + 4);
                        piVar2 = (int *)((int)piVar12 + 8);
                        piVar12 = (int *)((int)piVar12 + 8);
                        temp_v1 = temp_v1 + *piVar1;
                        temp_v5 = temp_v5 + *piVar2;
                      }
                      temp_v23[temp_v2 + 4] = temp_v1 + temp_v5;
                      temp_v3 = temp_v2;
                      do {
                        temp_v2 = temp_v3 + 1;
                        if ((int)temp_v2 >= 4) {
                          temp_v1 = temp_v10 * -3 + *(int *)(DAT_00588124 + 0x168);
                          if (temp_v1 < 0) {
                            temp_v1 = 0;
                          }
                          aeabi_idivmod(temp_v1,temp_v23[7]);
                          temp_v1 = temp_v23[0];
                          temp_v4 = temp_v8;
                          if (temp_v23[4] <= temp_v8) {
                            if ((temp_v8 >= temp_v23[5]) && (temp_v23[6] > temp_v8)) {
                              temp_v4 = temp_v8 - temp_v23[5];
                              temp_v1 = temp_v23[2];
                              FUN_00162808(temp_v1,temp_v4);
                            }
                          }
                          else {
                            FUN_00162808(temp_v1,temp_v4);
                          }
                          goto LAB_00239938;
                        }
                        temp_v1 = temp_v3 + 2;
                        temp_v3 = temp_v2;
                      } while (temp_v1 < 1);
                    } while( 1 );
                  }
LAB_00239938:
                  FUN_001677c0();
                  temp_v14 = (float)VectorSignedToFloat((int)*(char *)(temp_v7 + 0x53),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v23[0] = (int)(temp_v14 + (float)((unsigned long long)temp_v16 >> 0x20));
                  temp_v23[1] = 0x20;
                  temp_v14 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 6),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v15 = (float)VectorSignedToFloat((int)*(short *)(temp_v7 + 8),
                                                      (unsigned char)(in_fpscr >> 0x16) & 3);
                  FUN_001835b4(2,8,temp_v10 + 0x18e,
                               (int)(temp_v14 + (float)temp_v17 + temp_v15 + (float)temp_v16));
                  temp_v1 = DAT_0059dbb4;
                  temp_v10 = temp_v10 + 1;
                } while ((int)temp_v10 < 3);
                piVar12 = (int *)(DAT_0059dbb4 + 0x1258);
                temp_v4 = *piVar12;
                temp_v5 = piVar12[temp_v4 + 2];
                *piVar12 = temp_v4 - 1;
                if (*(char *)(temp_v1 + 0x1270) != '\0' || temp_v5 != piVar12[temp_v4 + 1]) {
                  (**(romwright_code **)(temp_v1 + 0x1274))();
                  *(unsigned char *)(temp_v1 + 0x1270) = 0;
                }
                FUN_00183bb0();
                FUN_001677c0();
              }
            }
          }
        }
LAB_00239a08:
        temp_v12 = temp_v12 + 1;
      } while (temp_v12 < 8);
      temp_v24 = temp_v24 + 1;
    } while (temp_v24 < *(int *)(temp_v23[8] + 0xe4));
  }
  temp_v12 = DAT_0059dbb4;
  piVar12 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v1 = *piVar12;
  temp_v4 = piVar12[temp_v1 + 2];
  *piVar12 = temp_v1 - 1;
  if (*(char *)(temp_v12 + 0x1270) != '\0' || temp_v4 != piVar12[temp_v1 + 1]) {
    (**(romwright_code **)(temp_v12 + 0x1274))();
    *(unsigned char *)(temp_v12 + 0x1270) = 0;
  }
  return 0;
}

} /* extern "C" */
