/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341c74` (_code @ 0x341c74, 0x520 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 21 slot(s), 84 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD8; /* 0xd8: local_d8 */
} param_1_stack;

extern unsigned int DAT_00407fc0; /* 0x407fc0 */
extern unsigned int DAT_00407fc4; /* 0x407fc4 */
extern unsigned int DAT_00407fc8; /* 0x407fc8 */
extern unsigned int DAT_00407fcc; /* 0x407fcc */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern float DAT_004efd70; /* 0x4efd70 */
extern float DAT_004efd74; /* 0x4efd74 */
extern float DAT_004efd78; /* 0x4efd78 */
extern float DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern float DAT_004efd84; /* 0x4efd84 */
extern float DAT_004efd88; /* 0x4efd88 */
extern float DAT_004efd8c; /* 0x4efd8c */
extern float DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern float DAT_004efd98; /* 0x4efd98 */

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0023d51c. */
/* Supplied declaration required: FUN_0028c8a8. */
/* Supplied declaration required: FUN_002a88dc. */
extern float *FUN_002a8948(unsigned int);
/* Supplied declaration required: FUN_002ad6d8. */
/* Supplied declaration required: FUN_002c00b4. */
extern int FUN_002c00d4(unsigned int *);
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
extern unsigned int FUN_002c5218(void);


void FUN_00341c74(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  float *pfVar3;
  unsigned char temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  unsigned long long temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  unsigned char temp_v26 [4];
  unsigned char temp_v27 [16];
  float temp_v28;
  float temp_v29;
  float temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  float temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  float temp_v36;
  float temp_v37;
  float temp_v38;
  unsigned int temp_v39;
  unsigned char temp_v40 [36];
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    temp_v6 = *(float *)(param_1 + 0x1604) + *(float *)(param_1 + 0x15ec);
    *(float *)(param_1 + 0x1604) = temp_v6;
    temp_v11 = *(float *)(param_1 + 0x1608) + *(float *)(param_1 + 0x15f0);
    *(float *)(param_1 + 0x1608) = temp_v11;
    temp_v8 = *(float *)(param_1 + 0x160c) + *(float *)(param_1 + 0x15f4);
    *(float *)(param_1 + 0x160c) = temp_v8;
    *(float *)(param_1 + 0x1610) = *(float *)(param_1 + 0x1610) + *(float *)(param_1 + 0x15f8);
    *(float *)(param_1 + 0x1614) = *(float *)(param_1 + 0x1614) + *(float *)(param_1 + 0x15fc);
    *(float *)(param_1 + 0x1618) = *(float *)(param_1 + 0x1618) + *(float *)(param_1 + 0x1600);
    temp_v0 = *(int *)(param_1 + 0x56c);
    *(float *)(temp_v0 + 0x58) = temp_v6;
    *(float *)(temp_v0 + 0x68) = temp_v11;
    *(float *)(temp_v0 + 0x78) = temp_v8;
    *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
    FUN_0023d51c(*(unsigned int *)(param_1 + 0x56c),param_1 + 0x1610);
    if (*(char *)(param_1 + 0x15) != '\0') {
      *(float *)(param_1 + 0x1658) = *(float *)(param_1 + 0x1658) + *(float *)(param_1 + 0x164c);
      *(float *)(param_1 + 0x165c) = *(float *)(param_1 + 0x165c) + *(float *)(param_1 + 0x1650);
      *(float *)(param_1 + 0x1660) = *(float *)(param_1 + 0x1660) + *(float *)(param_1 + 0x1654);
      FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0x1658);
    }
    temp_v1 = *(int *)(param_1 + 0x10) + 1;
    *(unsigned int *)(param_1 + 0x10) = temp_v1;
    if (temp_v1 >= 10) {
      *(unsigned char *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x1604) = *(unsigned int *)(param_1 + 0x161c);
      *(unsigned int *)(param_1 + 0x1608) = *(unsigned int *)(param_1 + 0x1620);
      *(unsigned int *)(param_1 + 0x160c) = *(unsigned int *)(param_1 + 0x1624);
      *(unsigned int *)(param_1 + 0x1610) = *(unsigned int *)(param_1 + 0x1628);
      *(unsigned int *)(param_1 + 0x1614) = *(unsigned int *)(param_1 + 0x162c);
      *(unsigned int *)(param_1 + 0x1618) = *(unsigned int *)(param_1 + 0x1630);
      temp_v0 = *(int *)(param_1 + 0x56c);
      temp_v3 = *(unsigned int *)(param_1 + 0x1608);
      temp_v5 = *(unsigned int *)(param_1 + 0x160c);
      *(unsigned int *)(temp_v0 + 0x58) = *(unsigned int *)(param_1 + 0x1604);
      *(unsigned int *)(temp_v0 + 0x68) = temp_v3;
      *(unsigned int *)(temp_v0 + 0x78) = temp_v5;
      *(unsigned int *)(temp_v0 + 0x88) = *(unsigned int *)(temp_v0 + 0x88) | 0x800;
      FUN_0023d51c(*(unsigned int *)(param_1 + 0x56c),param_1 + 0x1610);
      if (*(char *)(param_1 + 0x15) != '\0') {
        *(unsigned int *)(param_1 + 0x1658) = *(unsigned int *)(param_1 + 0x1664);
        *(unsigned int *)(param_1 + 0x165c) = *(unsigned int *)(param_1 + 0x1668);
        *(unsigned int *)(param_1 + 0x1660) = *(unsigned int *)(param_1 + 0x166c);
        FUN_0028c8a8(*(unsigned int *)(*(int *)(param_1 + 0x20) + 8),0,param_1 + 0x1658);
      }
    }
  }
  temp_v0 = *(int *)(param_1 + *(int *)(param_1 + 4) * 4 + 0x56c);
  temp_v20 = romwright_piece_4_4(*(unsigned int *)(temp_v0 + 0x68),*(unsigned int *)(temp_v0 + 0x58));
  temp_v8 = *(float *)(temp_v0 + 0x78);
  pfVar3 = (float *)FUN_002a8948(*(unsigned int *)(param_1 + *(int *)(param_1 + 4) * 4 + 0x56c));
  temp_v3 = 0x3f800000;
  temp_v6 = 0.0f;
  temp_v11 = *pfVar3;
  temp_v21 = *(unsigned long long *)(pfVar3 + 1);
  if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002c00d4(&DAT_00476634), temp_v0 != 0)) {
    DAT_004efd6c = temp_v3;
    DAT_004efd70 = temp_v6;
    DAT_004efd74 = temp_v6;
    DAT_004efd78 = temp_v6;
    DAT_004efd7c = temp_v6;
    DAT_004efd80 = temp_v3;
    DAT_004efd84 = temp_v6;
    DAT_004efd88 = temp_v6;
    DAT_004efd8c = temp_v6;
    DAT_004efd90 = temp_v6;
    DAT_004efd94 = temp_v3;
    DAT_004efd98 = temp_v6;
  }
  FUN_002c00b4(&temp_v28,&DAT_004efd6c);
  temp_v9 = (float)temp_v21 * 40.764328f;
  temp_v12 = (float)((unsigned long long)temp_v21 >> 0x20) * 40.764328f;
  temp_v10 = romwright_fabs_4(temp_v9);
  temp_v1 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v6 <= temp_v12) << 0x1d);
  temp_v12 = romwright_fabs_4(temp_v12);
  for (temp_v7 = romwright_fabs_4(temp_v11 * 40.764328f); (int)temp_v7 >= 0x47800000; temp_v7 = temp_v7 - 65536.0f) {
  }
  for (; (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - 65536.0f) {
  }
  for (; (int)temp_v12 >= 0x47800000; temp_v12 = temp_v12 - 65536.0f) {
  }
  temp_v13 = VectorFloatToUnsigned(temp_v7,3);
  temp_v14 = VectorFloatToUnsigned(temp_v10,3);
  temp_v15 = VectorFloatToUnsigned(temp_v12,3);
  temp_v2 = temp_v13;
  temp_v19 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v13 = temp_v14 & 0xff;
  temp_v4 = temp_v15;
  temp_v17 = (float)VectorUnsignedToFloat(temp_v15 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v16 = (float)VectorUnsignedToFloat(temp_v14 & 0xffff,(unsigned char)(temp_v1 >> 0x16) & 3);
  temp_v18 = (float)(&DAT_00407fc0)[temp_v2 * 4] + (temp_v7 - temp_v19) * (float)(&DAT_00407fc8)[temp_v2 * 4];
  temp_v19 = (float)(&DAT_00407fc4)[temp_v2 * 4] + (temp_v7 - temp_v19) * (float)(&DAT_00407fcc)[temp_v2 * 4];
  temp_v7 = (float)(&DAT_00407fc0)[temp_v13 * 4] +
          (temp_v10 - temp_v16) * (float)(&DAT_00407fc8)[temp_v13 * 4];
  temp_v38 = (float)(&DAT_00407fc4)[temp_v13 * 4] +
             (temp_v10 - temp_v16) * (float)(&DAT_00407fcc)[temp_v13 * 4];
  temp_v10 = (float)(&DAT_00407fc0)[temp_v4 * 4] + (temp_v12 - temp_v17) * (float)(&DAT_00407fc8)[temp_v4 * 4]
  ;
  temp_v12 = (float)(&DAT_00407fc4)[temp_v4 * 4] + (temp_v12 - temp_v17) * (float)(&DAT_00407fcc)[temp_v4 * 4]
  ;
  if (temp_v11 * 40.764328f < temp_v6) {
    temp_v18 = -temp_v18;
  }
  if (temp_v9 < temp_v6) {
    temp_v7 = -temp_v7;
  }
  if (!romwright_subpiece_4_1_0(temp_v1 >> 0x1d,0)) {
    temp_v10 = -temp_v10;
  }
  temp_v28 = temp_v12 * temp_v38;
  temp_v36 = -temp_v7;
  temp_v32 = temp_v10 * temp_v38;
  temp_v37 = temp_v18 * temp_v38;
  temp_v38 = temp_v19 * temp_v38;
  temp_v29 = temp_v18 * temp_v12 * temp_v7 - temp_v19 * temp_v10;
  temp_v34 = temp_v19 * temp_v10 * temp_v7 - temp_v18 * temp_v12;
  temp_v30 = temp_v18 * temp_v10 + temp_v19 * temp_v12 * temp_v7;
  temp_v33 = temp_v19 * temp_v12 + temp_v18 * temp_v10 * temp_v7;
  temp_v31 = 0;
  temp_v35 = 0;
  temp_v39 = 0;
  temp_v24 = -1.0f;
  temp_v22 = temp_v6;
  temp_v23 = temp_v6;
  FUN_002ad6d8(&temp_v22,&temp_v28);
  *(float *)(param_1 + 0x534) = (float)temp_v20;
  temp_v11 = (float)((unsigned long long)temp_v20 >> 0x20);
  *(float *)(param_1 + 0x538) = temp_v11;
  *(float *)(param_1 + 0x53c) = temp_v8;
  *(float *)(param_1 + 0x540) = (float)temp_v20 + temp_v22;
  *(float *)(param_1 + 0x544) = temp_v11 + temp_v23;
  *(float *)(param_1 + 0x548) = temp_v8 + temp_v24;
  temp_v22 = temp_v6;
  temp_v23 = (float)temp_v3;
  temp_v24 = temp_v6;
  FUN_002ad6d8(&temp_v22,&temp_v28);
  *(float *)(param_1 + 0x55c) = temp_v22;
  *(float *)(param_1 + 0x560) = temp_v23;
  *(float *)(param_1 + 0x564) = temp_v24;
  temp_v3 = FUN_002c5218();
  FUN_002c20a8(temp_v3,(float *)(param_1 + 0x534),param_1 + 0x540,(float *)(param_1 + 0x55c));
  FUN_002a88dc(*(unsigned int *)(param_1 + *(int *)(param_1 + 4) * 4 + 0x56c),&temp_v25,temp_v40,
               temp_v27,temp_v26);
  temp_v25 = temp_v25 * 180.0f * 0.31830987f;
  FUN_002c1ffc(temp_v3,1);
  return;
}
