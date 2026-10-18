/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c7198` (_code @ 0x1c7198, 0x400 bytes) from smt4a.cxi.
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
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned short sp62; /* 0x62: local_62 */
    unsigned short sp68; /* 0x68: local_68 */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp78; /* 0x78: local_78 */
} param_2_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_001a9698. */
/* Supplied declaration required: FUN_001bd540. */
extern unsigned int FUN_001bd5f8(void);
/* Supplied declaration required: FUN_001bdaa8. */
/* Supplied declaration required: FUN_001c6da0. */
/* Supplied declaration required: FUN_002e6dd4. */


unsigned int FUN_001c7198(int *param_1,int *param_2)

{
/* irregular: irregular input(s): in_fpscr; 10 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int *puVar6;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned int temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  unsigned short temp_v16 [3];
  unsigned short temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20 [3];
  unsigned short temp_v21;
  unsigned short temp_v22;
  short temp_v23 [4];
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned short temp_v26 [12];
  
  if (*(unsigned char *)((int)param_1 + 0xd) < 2) {
    temp_v1 = 0;
    if (*param_1 != 0) {
      temp_v1 = param_1[2];
    }
    if (*param_1 != 0 && temp_v1 != 0) {
      if (((((0.0f <= (float)param_2[3]) && (param_2[3] < 0x3f800001)) && (0.0f <= (float)param_2[4]))
          && ((param_2[4] < 0x3f800001 && (0.0f <= (float)param_2[6])))) && (param_2[6] < 0x3f800001)
         ) {
        temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= (float)param_2[7]) << 0x1d);
        if ((romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) && (param_2[7] < 0x3f800001)) {
          temp_v15 = 0x4120000000000000;
          temp_v8 = (unsigned int)(*param_2 * 1000) / 0x1318;
          if (temp_v8 == 0) {
            temp_v8 = 1;
          }
          temp_v21 = (unsigned short)temp_v8;
          temp_v2 = (unsigned int)(param_2[2] * 1000) / 0x1318;
          if (temp_v2 == 0) {
            temp_v2 = 1;
          }
          temp_v22 = (unsigned short)temp_v2;
          temp_v17 = 2;
          puVar6 = (unsigned int *)param_2[5];
          if (puVar6 == (unsigned int *)0x0) {
            puVar6 = (unsigned int *)0x5c1c04;
          }
          VectorUnsignedToFloat(param_2[1],(unsigned char)(temp_v3 >> 0x16) & 3);
          temp_v23[0] = (short)(*puVar6 / 0xa0);
          temp_v1 = puVar6[1] * -0x33333333;
          temp_v14 = 0x43000000;
          temp_v23[1] = (short)(puVar6[1] / 0xa0);
          temp_v6 = 0;
          do {
            VectorSignedToFloat(temp_v23[temp_v6] * 0xa0,(unsigned char)(temp_v3 >> 0x16) & 3);
            temp_v10 = (float)((unsigned long long)temp_v15 >> 0x20);
            FUN_001a9698(temp_v23[temp_v6] * 0xa0,temp_v1);
            temp_v13 = (float)temp_v14;
            temp_v5 = temp_v6 + 1;
            temp_v26[temp_v6] = (short)(int)(temp_v10 * temp_v13);
            temp_v1 = temp_v4;
            temp_v6 = temp_v5;
          } while (temp_v5 < 2);
          temp_v9 = VectorFloatToUnsigned((float)param_2[6] * temp_v13,3);
          temp_v23[3] = (short)temp_v9;
          temp_v9 = VectorFloatToUnsigned((float)param_2[7] * temp_v13,3);
          temp_v24 = (unsigned short)temp_v9;
          temp_v9 = VectorFloatToUnsigned((float)param_2[3] * temp_v13,3);
          temp_v25 = (unsigned short)temp_v9;
          temp_v23[2] = (short)(puVar6[2] / 0xa0);
          temp_v10 = (float)param_2[4];
          if ((int)temp_v10 >= 0x3f733334) {
            temp_v10 = 0.95f;
          }
          if ((char)param_2[8] != '\x01') {
            temp_v12 = 1.0f - temp_v10;
            temp_v11 = temp_v10;
          }
          else {
            temp_v11 = -temp_v10;
            temp_v12 = temp_v10 - 1.0f;
          }
          temp_v16[0] = 4;
          temp_v26[2] = (unsigned short)(int)(temp_v12 * temp_v13);
          temp_v26[3] = (unsigned short)(int)(temp_v11 * temp_v13);
          temp_v6 = *param_1;
          temp_v8 = temp_v8 * 0x500;
          temp_v3 = FUN_001c6da0(temp_v6,temp_v8);
          temp_v1 = FUN_001c6da0(temp_v6,temp_v8);
          temp_v18 = (temp_v3 >> 0x10) | (temp_v1 << 0x10);
          if (temp_v8 <= (unsigned int)param_1[2]) {
            temp_v1 = temp_v2 * 0x500;
            temp_v3 = FUN_001c6da0(temp_v6 + temp_v8,temp_v1);
            temp_v5 = FUN_001c6da0(temp_v6 + temp_v8,temp_v1);
            temp_v19 = (temp_v3 >> 0x10) | (temp_v5 << 0x10);
            temp_v8 = temp_v8 + temp_v1;
            if (temp_v8 <= (unsigned int)param_1[2]) {
              temp_v1 = 0;
              do {
                temp_v7 = temp_v23[temp_v1] * 0x500;
                temp_v3 = FUN_001c6da0(temp_v6 + temp_v8,temp_v7);
                temp_v5 = FUN_001c6da0(temp_v6 + temp_v8,temp_v7);
                temp_v20[temp_v1] = (temp_v3 >> 0x10) | (temp_v5 << 0x10);
                temp_v8 = temp_v8 + temp_v7;
                temp_v1 = temp_v1 + 1;
              } while (temp_v1 < 2);
              if (temp_v8 <= (unsigned int)param_1[2]) {
                temp_v1 = (int)temp_v23[2];
                temp_v3 = FUN_001c6da0(temp_v8 + temp_v6,temp_v1 * 0x500);
                temp_v1 = FUN_001c6da0(temp_v8 + temp_v6,temp_v1 * 0x500);
                temp_v20[2] = (temp_v3 >> 0x10) | (temp_v1 << 0x10);
              }
            }
          }
          temp_v16[0] = temp_v16[0] | 2;
          FUN_002e6dd4(*param_1,param_1[2]);
          FUN_001bd540(*param_1,param_1[2]);
          temp_v0 = *(char *)((int)param_1 + 0xd);
          temp_v9 = FUN_001bd5f8();
          FUN_001bdaa8(temp_v9,(int)temp_v0,temp_v16);
          return temp_v9;
        }
      }
    }
  }
  return 0;
}
