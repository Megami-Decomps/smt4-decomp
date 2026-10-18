/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049177c` (_code @ 0x49177c, 0x314 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern signed char DAT_005f1a5e; /* 0x5f1a5e */
extern int DAT_005f1c5c; /* 0x5f1c5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00162e8c. */
extern int FUN_0018719c(void);
extern int FUN_00376fcc(int);
extern int FUN_00384d34(int);
extern int FUN_003ade20(int);
extern int FUN_004083a8(unsigned char, unsigned char);
extern float *FUN_00492b84(int);
extern int FUN_00492bc0(void);
extern float *FUN_00492be8(int);
extern int FUN_00492c5c(int);
/* Supplied declaration required: FUN_0049359c. */


void FUN_0049177c(int param_1)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  
  FUN_00162e8c();
  temp_v2 = param_1 + 0x4cc;
  temp_v3 = FUN_00492bc0();
  pfVar5 = (float *)FUN_00492be8(temp_v2);
  temp_v14 = *pfVar5;
  temp_v11 = pfVar5[2];
  pfVar5 = (float *)FUN_00492b84(temp_v2);
  temp_v15 = 0.0f;
  temp_v18 = 0;
  temp_v12 = *pfVar5;
  temp_v13 = pfVar5[1];
  temp_v9 = temp_v15;
  FUN_0049359c(param_1 + 0x4d0,&temp_v16);
  if (DAT_005f1a5e != '\0') {
    temp_v3 = FUN_00492c5c(temp_v2);
    temp_v14 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x20638),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2063c),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if (*(char *)(param_1 + 0x20634) != '\0') {
    temp_v14 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x20648),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(*(unsigned int *)(param_1 + 0x2064c),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v2 = *(int *)(param_1 + 0x7b8c);
  if (temp_v3 == 0x65) {
    temp_v15 = (temp_v14 - -25400.0f) * 0.0169705f;
    temp_v9 = (temp_v11 - -16400.0f) * 0.016886543f;
  }
  temp_v3 = 0;
  temp_v10 = romwright_piece_4_4((int)(temp_v13 - (temp_v9 - 120.0f)),(int)(temp_v12 - (temp_v15 - 160.0f)));
  if (0 < temp_v2) {
    do {
      temp_v4 = param_1 + temp_v3 * 100;
      if ((DAT_005f1c5c == 0) &&
         (((temp_v5 = FUN_004083a8(*(unsigned char *)(temp_v4 + 0x1790),*(unsigned char *)(temp_v4 + 0x1791)),
           temp_v5 == 0 || ((*(short *)(temp_v4 + 0x17bc) != 0 && (temp_v5 = FUN_0018719c(), temp_v5 == 0)))
           ) || ((*(short *)(temp_v4 + 0x17be) != 0 && (temp_v5 = FUN_0018719c(), temp_v5 != 0)))))) {
        *(unsigned short *)(temp_v4 + 0x17c0) = 0;
      }
      else {
        *(unsigned short *)(temp_v4 + 0x17c0) = 1;
      }
      temp_v1 = *(char *)(temp_v4 + 0x1791);
      if (temp_v1 != -1) {
        if (temp_v1 != -2) {
          if (temp_v1 == -3) {
            temp_v5 = FUN_00376fcc((int)*(short *)(temp_v4 + 0x17ba));
            goto joined_r0x00491998;
          }
        }
        else {
          temp_v6 = FUN_00384d34((int)*(short *)(temp_v4 + 0x17ba));
          temp_v5 = DAT_005f1c5c;
          if (temp_v6 == 0) {
joined_r0x00491998:
            if (temp_v5 == 0) goto LAB_004919bc;
          }
          *(unsigned short *)(temp_v4 + 0x17c0) = 1;
        }
      }
      else {
        temp_v5 = FUN_003ade20((int)*(short *)(temp_v4 + 0x17ba));
        if ((temp_v5 != 0) || (DAT_005f1c5c != 0)) {
          *(unsigned short *)(temp_v4 + 0x17c0) = 1;
        }
        else {
LAB_004919bc:
          *(unsigned short *)(temp_v4 + 0x17c0) = 0;
        }
      }
      if (*(short *)(temp_v4 + 0x17c0) != 0) {
        temp_v9 = (float)VectorSignedToFloat((int)temp_v10,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v15 = (float)VectorSignedToFloat((int)((unsigned long long)temp_v10 >> 0x20),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        *(unsigned int *)(temp_v4 + 0x17d8) = 0;
        temp_v8 = VectorFloatToUnsigned(*(float *)(temp_v4 + 0x17a0),3);
        temp_v7 = VectorFloatToUnsigned(*(float *)(temp_v4 + 0x17a4),3);
        *(unsigned int *)(temp_v4 + 0x17d4) = 0xffffffff;
        *(unsigned short *)(temp_v4 + 0x17c2) = *(unsigned short *)(temp_v4 + 0x1794);
        *(unsigned char *)(temp_v4 + 0x17dc) = 0;
        temp_v9 = temp_v16 + *(float *)(temp_v4 + 0x1798) + temp_v9;
        temp_v15 = temp_v17 + *(float *)(temp_v4 + 0x179c) + temp_v15;
        *(unsigned int *)(temp_v4 + 0x17cc) = temp_v8;
        *(unsigned int *)(temp_v4 + 0x17d0) = temp_v7;
        temp_v0 = in_fpscr & 0xfffffff;
        in_fpscr = temp_v0 | ((unsigned int)((float)temp_v18 <= temp_v9 + *(float *)(temp_v4 + 0x17a0)) << 0x1d);
        *(int *)(temp_v4 + 0x17c4) = (int)temp_v9;
        *(int *)(temp_v4 + 0x17c8) = (int)temp_v15;
        if ((((!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) || ((int)temp_v9 >= 0x44000001)) ||
            (in_fpscr = temp_v0 | ((unsigned int)((float)temp_v18 <= temp_v15 + *(float *)(temp_v4 + 0x17a4)) <<
                                0x1d), !romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0))) || ((int)temp_v15 >= 0x44200001)) {
          *(unsigned short *)(temp_v4 + 0x17c0) = 0;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v2);
  }
  *(unsigned char *)(param_1 + 0x7b91) = 0;
  return;
}
