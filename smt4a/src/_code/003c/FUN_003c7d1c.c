/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c7d1c` (_code @ 0x3c7d1c, 0x328 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_003c7d1c_arg0 fn_003c7d1c_arg0;
typedef struct fn_003c7d1c_arg0_p34 fn_003c7d1c_arg0_p34;
struct fn_003c7d1c_arg0 {
    unsigned char pad_0x0[0x24];
    uint field_0x24; /* +0x24 */
    int field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    void *field_0x30; /* +0x30 */
    fn_003c7d1c_arg0_p34 *field_0x34; /* +0x34 */
};
struct fn_003c7d1c_arg0_p34 {
    unsigned char pad_0x0[0x24];
    unsigned char field_0x24; /* +0x24 */
    unsigned char pad_0x25[0x3];
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    undefined4 field_0x34; /* +0x34 */
    undefined4 field_0x38; /* +0x38 */
    unsigned char pad_0x3c[0x20];
    byte field_0x5c; /* +0x5c */
};

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_006472ec; /* 0x6472ec */
extern float DAT_006472f0; /* 0x6472f0 */
extern float DAT_006472f4; /* 0x6472f4 */
extern float DAT_006472f8; /* 0x6472f8 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Supplied declaration required: FUN_002a1fb4. */
/* Supplied declaration required: FUN_002b3c9c. */
/* Supplied declaration required: FUN_002ff6f8. */
/* Supplied declaration required: FUN_0038136c. */


void FUN_003c7d1c(fn_003c7d1c_arg0 *param_1)

{
/* irregular: irregular input(s): in_d10, in_fpscr; 8 native warning(s); review required */
  unsigned short temp_v0;
  fn_003c7d1c_arg0_p34 *pfVar2;
  unsigned int temp_v1;
  unsigned int *puVar4;
  int temp_v2;
  unsigned short *puVar6;
  fn_003c7d1c_arg0_p34 *pfVar7;
  int temp_v3;
  unsigned int in_fpscr;
  float temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned long long temp_v12;
  unsigned long long temp_v13;
  unsigned long long in_d10;
  unsigned int temp_v14;
  unsigned long long temp_v15;
  unsigned char temp_v16 [92];
  
  temp_v14 = (unsigned int)((unsigned long long)in_d10 >> 0x20);
  pfVar7 = param_1->field_0x34;
  puVar4 = *(unsigned int **)param_1->field_0x30;
  if ((param_1->field_0x28 <= (int)pfVar7->field_0x34) || (pfVar7->field_0x34 == 0)) {
    temp_v3 = pfVar7->field_0x38;
    pfVar2 = pfVar7;
    FUN_0038136c(pfVar7,&pfVar7->field_0x24);
    temp_v1 = param_1->field_0x24;
    DAT_006472ec = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f0 = (float)VectorUnsignedToFloat
                                    ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f4 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472f8 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472ec = DAT_006472ec * 0.003921569f;
    DAT_006472f0 = DAT_006472f0 * 0.003921569f;
    DAT_006472f4 = DAT_006472f4 * 0.003921569f;
    DAT_006472f8 = DAT_006472f8 * 0.003921569f;
    temp_v10 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = (float)VectorUnsignedToFloat(((unsigned int)pfVar2 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v8 = (float)VectorUnsignedToFloat((unsigned int)pfVar2 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v9 = (float)VectorUnsignedToFloat
                              (((unsigned int)pfVar2 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
    DAT_006472dc = temp_v10 * 0.003921569f * DAT_006472ec;
    DAT_006472e0 = temp_v9 * 0.003921569f * DAT_006472f0;
    DAT_006472e4 = temp_v4 * 0.003921569f * DAT_006472f4;
    DAT_006472e8 = temp_v8 * 0.003921569f * DAT_006472f8;
    temp_v12 = CONCAT44(DAT_006472dc,0x3b808081);
    temp_v13 = CONCAT44(DAT_006472e4,DAT_006472e0);
    temp_v15 = CONCAT44(temp_v14,DAT_006472e8);
    FUN_002ff6f8(temp_v16,param_1,0);
    if (0 < temp_v3) {
      temp_v15 = romwright_piece_4_4(0x437f0000,(int)temp_v15);
    }
    temp_v2 = 0;
    if (temp_v2 < temp_v3) {
      do {
        if (0 < (int)puVar4[1]) {
          puVar6 = (unsigned short *)*puVar4;
          FUN_002a1fb4(puVar6 + 8,temp_v16,0);
          temp_v1 = puVar4[2];
          temp_v10 = (float)VectorUnsignedToFloat((temp_v1 & 0xffff) >> 8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v9 = (float)VectorUnsignedToFloat(temp_v1 >> 0x18,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v4 = (float)VectorUnsignedToFloat
                                   ((temp_v1 & 0xffffff) >> 0x10,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v8 = (float)VectorUnsignedToFloat(temp_v1 & 0xff,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v11 = (float)temp_v12;
          DAT_006472ec = (float)((unsigned long long)temp_v12 >> 0x20);
          DAT_006472f0 = (float)temp_v13;
          DAT_006472f4 = (float)((unsigned long long)temp_v13 >> 0x20);
          DAT_006472f8 = (float)temp_v15;
          DAT_006472dc = temp_v9 * temp_v11 * DAT_006472ec;
          DAT_006472e0 = temp_v4 * temp_v11 * DAT_006472f0;
          DAT_006472e4 = temp_v10 * temp_v11 * DAT_006472f4;
          DAT_006472e8 = temp_v8 * temp_v11 * DAT_006472f8;
          temp_v4 = (float)((unsigned long long)temp_v15 >> 0x20);
          temp_v6 = VectorFloatToUnsigned(DAT_006472dc * temp_v4,3);
          temp_v1 = VectorFloatToUnsigned(DAT_006472e0 * temp_v4,3);
          temp_v7 = VectorFloatToUnsigned(DAT_006472e4 * temp_v4,3);
          temp_v5 = VectorFloatToUnsigned(DAT_006472e8 * temp_v4,3);
          *(unsigned int *)(puVar6 + 0x28) =
               ((temp_v1 & 0xff) << 0x10) | (temp_v5 & 0xff) | ((temp_v7 & 0xff) << 8) |
               (temp_v6 << 0x18);
          if (pfVar7->field_0x5c != 0) {
            temp_v0 = *puVar6 | 0x100;
          }
          else {
            temp_v0 = *puVar6 & 0xfeff;
          }
          *puVar6 = temp_v0;
          FUN_002b3c9c(puVar6,pfVar7->field_0x28 & 0xffff);
        }
        temp_v2 = temp_v2 + 1;
        puVar4 = puVar4 + 3;
      } while (temp_v2 < temp_v3);
    }
  }
  return;
}
