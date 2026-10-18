/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00159b38` (_code @ 0x159b38, 0x380 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 17 slot(s), 44 byte(s) */
typedef struct {
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp68; /* 0x68: local_68 */
} param_2_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001562fc. */
/* Supplied declaration required: FUN_002a4b10. */
/* Supplied declaration required: FUN_002b99b8. */
extern unsigned int FUN_002bb470(void);
/* Supplied declaration required: FUN_002c3944. */


unsigned int FUN_00159b38(int *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *puVar6;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int in_fpscr;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  unsigned long long temp_v14;
  unsigned short temp_v15 [3];
  unsigned short temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned short temp_v22;
  unsigned short temp_v23;
  short temp_v24 [4];
  unsigned short temp_v25;
  unsigned short temp_v26;
  unsigned short temp_v27 [12];
  
  if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
    temp_v1 = 0;
    if (*param_1 != 0) {
      temp_v1 = param_1[2];
    }
    if (*param_1 != 0 && temp_v1 != 0) {
      if (((((0.0f <= (float)param_2[3]) && (param_2[3] < 0x3f800001)) && (0.0f <= (float)param_2[4]))
          && ((param_2[4] < 0x3f800001 && (0.0f <= (float)param_2[6])))) && (param_2[6] < 0x3f800001)
         ) {
        temp_v4 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= (float)param_2[7]) << 0x1d);
        if ((romwright_subpiece_4_1_0(temp_v4 >> 0x1d,0)) && (param_2[7] < 0x3f800001)) {
          temp_v14 = 0x4120000000000000;
          temp_v7 = (unsigned int)(*param_2 * 1000) / 0x1318;
          if (temp_v7 == 0) {
            temp_v7 = 1;
          }
          temp_v22 = (unsigned short)temp_v7;
          temp_v6 = (unsigned int)(param_2[2] * 1000) / 0x1318;
          if (temp_v6 == 0) {
            temp_v6 = 1;
          }
          temp_v23 = (unsigned short)temp_v6;
          temp_v16 = 2;
          puVar6 = (unsigned int *)param_2[5];
          if (puVar6 == (unsigned int *)0x0) {
            puVar6 = (unsigned int *)0x473278;
          }
          VectorUnsignedToFloat(param_2[1],(unsigned char)(temp_v4 >> 0x16) & 3);
          temp_v24[0] = (short)(*puVar6 / 0xa0);
          temp_v1 = puVar6[1] * -0x33333333;
          temp_v13 = 0x43000000;
          temp_v24[1] = (short)(puVar6[1] / 0xa0);
          temp_v3 = 0;
          do {
            VectorSignedToFloat(temp_v24[temp_v3] * 0xa0,(unsigned char)(temp_v4 >> 0x16) & 3);
            temp_v9 = (float)((unsigned long long)temp_v14 >> 0x20);
            FUN_002b99b8(temp_v24[temp_v3] * 0xa0,temp_v1);
            temp_v12 = (float)temp_v13;
            temp_v5 = temp_v3 + 1;
            temp_v27[temp_v3] = (short)(int)(temp_v9 * temp_v12);
            temp_v1 = temp_v2;
            temp_v3 = temp_v5;
          } while (temp_v5 < 2);
          temp_v8 = VectorFloatToUnsigned((float)param_2[6] * temp_v12,3);
          temp_v24[3] = (short)temp_v8;
          temp_v8 = VectorFloatToUnsigned((float)param_2[7] * temp_v12,3);
          temp_v25 = (unsigned short)temp_v8;
          temp_v8 = VectorFloatToUnsigned((float)param_2[3] * temp_v12,3);
          temp_v26 = (unsigned short)temp_v8;
          temp_v24[2] = (short)(puVar6[2] / 0xa0);
          temp_v9 = (float)param_2[4];
          if ((int)temp_v9 >= 0x3f733334) {
            temp_v9 = 0.95f;
          }
          if ((char)param_2[8] != '\x01') {
            temp_v11 = 1.0f - temp_v9;
            temp_v10 = temp_v9;
          }
          else {
            temp_v10 = -temp_v9;
            temp_v11 = temp_v9 - 1.0f;
          }
          temp_v7 = temp_v7 * 0x500;
          temp_v27[2] = (unsigned short)(int)(temp_v11 * temp_v12);
          temp_v27[3] = (unsigned short)(int)(temp_v10 * temp_v12);
          temp_v1 = *param_1;
          temp_v17 = ((temp_v1 + 0xc000000U) >> 0x10) | (temp_v1 << 0x10);
          if (temp_v7 <= (unsigned int)param_1[2]) {
            temp_v18 = ((temp_v1 + temp_v7 + 0xc000000) >> 0x10) | ((temp_v1 + temp_v7) * 0x10000);
            temp_v7 = temp_v7 + temp_v6 * 0x500;
            if (temp_v7 <= (unsigned int)param_1[2]) {
              temp_v19 = ((temp_v1 + temp_v7 + 0xc000000) >> 0x10) | ((temp_v1 + temp_v7) * 0x10000);
              temp_v3 = temp_v7 + temp_v24[0] * 0x500;
              temp_v5 = temp_v1 + temp_v3;
              temp_v20 = ((temp_v5 + 0xc000000U) >> 0x10) | (temp_v5 * 0x10000);
              temp_v4 = temp_v3 + temp_v24[1] * 0x500;
              if (temp_v4 <= (unsigned int)param_1[2]) {
                temp_v1 = temp_v1 + temp_v4;
                temp_v21 = ((temp_v1 + 0xc000000U) >> 0x10) | (temp_v1 * 0x10000);
              }
            }
          }
          temp_v15[0] = 6;
          FUN_002c3944(*param_1,param_1[2]);
          FUN_002a4b10(*param_1,param_1[2]);
          temp_v0 = *(char *)((int)param_1 + 0xd);
          temp_v8 = FUN_002bb470();
          FUN_001562fc(temp_v8,(int)temp_v0,temp_v15);
          return temp_v8;
        }
      }
    }
  }
  return 0;
}
