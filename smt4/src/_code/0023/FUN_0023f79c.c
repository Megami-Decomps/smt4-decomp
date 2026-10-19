/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023f79c` (_code @ 0x23f79c, 0x328 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00336368. */
/* Supplied declaration required: FUN_003364d0. */
/* Supplied declaration required: FUN_003c1964. */


void FUN_0023f79c(int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); irregular input(s): in_fpscr, in_s0; 8 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  float *pfVar5;
  unsigned int temp_v4;
  int temp_v5;
  int *piVar8;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  float temp_v16 [13];
  int temp_v17;
  unsigned int temp_v18;
  
  temp_v7 = 0;
  temp_v12 = 0;
  temp_v16[3] = 35.0f;
  temp_v16[4] = 20.0f;
  temp_v16[5] = 50.0f;
  temp_v16[2] = -20.0f;
  temp_v16[0] = 0.0f;
  temp_v16[1] = 15.0f;
  if ((param_2 & 0x400) != 0) {
    temp_v15 = 0xbf00000000000000;
    temp_v14 = 0x402000003f000000;
    temp_v6 = 0;
    piVar8 = (int *)(param_1 + 0x1e98);
    temp_v17 = param_1;
    temp_v18 = param_2;
    do {
      temp_v8 = 4;
      temp_v11 = (float)temp_v12;
      temp_v13 = temp_v16[temp_v6 + 3];
      do {
        temp_v3 = temp_v17;
        temp_v1 = *piVar8;
        temp_v4 = *(unsigned int *)(temp_v1 + temp_v8 * 0x114 + 0x50);
        if ((((temp_v4 & 1) != 0 && (temp_v4 & 0x80) != 0) && ((temp_v4 & 0x10) == 0)) &&
           (*(char *)(temp_v1 + temp_v8 * 0x114 + 0x3c) == temp_v6)) {
          temp_v2 = temp_v17;
          FUN_0027da30(temp_v17,(int)*(short *)(temp_v1 + temp_v8 * 0x114 + 0x62));
          temp_v1 = 0;
          do {
            temp_v5 = *(int *)(temp_v3 + temp_v1 * 4 + 0x2134);
            if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(temp_v2 + 0xc))) {
              temp_v3 = *(int *)(temp_v3 + temp_v1 * 4 + 0x2134);
              goto LAB_0023f8b0;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x2a);
          temp_v3 = 0;
LAB_0023f8b0:
          temp_v7 = temp_v7 + 1;
          in_s0 = (float)VectorUnsignedToFloat
                                   ((unsigned int)*(unsigned short *)(*(int *)(temp_v3 + 0x10) + 0x24),
                                    (unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = temp_v11 + in_s0 * *(float *)(temp_v8 * 0x114 + 0x40 + *piVar8);
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x36);
      FUN_003c1964(temp_v6);
      temp_v9 = (float)VectorSignedToFloat(temp_v7 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v11 = temp_v11 + temp_v9 * in_s0 * (float)((unsigned long long)temp_v14 >> 0x20);
      temp_v12 = CONCAT44(temp_v13,temp_v11);
      temp_v11 = temp_v13 - temp_v11;
      temp_v9 = (float)temp_v15;
      if (temp_v7 != 1) {
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v9 < temp_v11) << 0x1f) |
                ((unsigned int)(temp_v9 == temp_v11) << 0x1e);
        in_fpscr = temp_v4 | ((unsigned int)((temp_v9 != temp_v9) || (temp_v11 != temp_v11)) << 0x1c);
        temp_v0 = (unsigned char)(temp_v4 >> 0x18);
        temp_v10 = temp_v16[temp_v6];
        if ((unsigned char)((temp_v0 >> 6) & 1) || temp_v0 >> 7 != ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
          in_s0 = temp_v11 * (float)temp_v14 - temp_v13 * (float)temp_v14;
        }
        else {
          in_s0 = temp_v13 * (float)((unsigned long long)temp_v15 >> 0x20);
        }
      }
      else {
        temp_v10 = temp_v16[temp_v6];
        in_s0 = temp_v9;
      }
      temp_v8 = 4;
      do {
        temp_v3 = temp_v17;
        temp_v1 = *piVar8;
        temp_v4 = *(unsigned int *)(temp_v1 + temp_v8 * 0x114 + 0x50);
        if ((((temp_v4 & 1) != 0 && (temp_v4 & 0x80) != 0) && ((temp_v4 & 0x10) == 0)) &&
           (*(char *)(temp_v1 + temp_v8 * 0x114 + 0x3c) == temp_v6)) {
          temp_v2 = temp_v17;
          temp_v11 = in_s0;
          FUN_0027da30(temp_v17,(int)*(short *)(temp_v1 + temp_v8 * 0x114 + 0x62));
          temp_v1 = 0;
          do {
            temp_v5 = *(int *)(temp_v3 + temp_v1 * 4 + 0x2134);
            if ((temp_v5 != 0) && (*(int *)(temp_v5 + 4) == *(int *)(temp_v2 + 0xc))) {
              temp_v3 = *(int *)(temp_v3 + temp_v1 * 4 + 0x2134);
              goto LAB_0023f9ec;
            }
            temp_v1 = temp_v1 + 1;
          } while (temp_v1 < 0x2a);
          temp_v3 = 0;
LAB_0023f9ec:
          temp_v3 = *(int *)(temp_v3 + 0x10);
          if (temp_v7 != 1) {
            temp_v13 = (float)VectorUnsignedToFloat
                                      ((unsigned int)*(unsigned short *)(temp_v3 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3)
            ;
            temp_v11 = temp_v11 + *(float *)(temp_v8 * 0x114 + 0x40 + *piVar8) * temp_v13 * (float)temp_v14;
          }
          pfVar5 = (float *)(*piVar8 + temp_v8 * 0x114);
          *pfVar5 = temp_v11;
          pfVar5[1] = temp_v9;
          pfVar5[2] = temp_v10;
          pfVar5 = (float *)(*piVar8 + temp_v8 * 0x114 + 0xc);
          *pfVar5 = temp_v11;
          pfVar5[1] = temp_v9;
          pfVar5[2] = temp_v10;
          temp_v11 = *(float *)(*piVar8 + temp_v8 * 0x114 + 0x40);
          temp_v13 = (float)VectorUnsignedToFloat
                                    ((unsigned int)*(unsigned short *)(temp_v3 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
          in_s0 = temp_v11 * temp_v13 + temp_v11 * (float)((unsigned long long)temp_v14 >> 0x20) + in_s0;
        }
        temp_v8 = temp_v8 + 1;
      } while (temp_v8 < 0x36);
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 3);
    FUN_003364d0(temp_v17,temp_v18);
    FUN_00336368(temp_v17,temp_v18);
  }
  return;
}
