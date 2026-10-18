/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407598` (_code @ 0x407598, 0x368 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00407598_arg0 fn_00407598_arg0;
struct fn_00407598_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x554];
    float field_0x55c; /* +0x55c */
    float field_0x560; /* +0x560 */
    float field_0x564; /* +0x564 */
    float field_0x568; /* +0x568 */
    float field_0x56c; /* +0x56c */
    float field_0x570; /* +0x570 */
    unsigned char pad_0x574[0x10];
    float field_0x584; /* +0x584 */
    float field_0x588; /* +0x588 */
    float field_0x58c; /* +0x58c */
    unsigned char pad_0x590[0x4];
    void *field_0x594; /* +0x594 */
    unsigned char pad_0x598[0x1c];
    float field_0x5b4; /* +0x5b4 */
    float field_0x5b8; /* +0x5b8 */
    float field_0x5bc; /* +0x5bc */
    float field_0x5c0; /* +0x5c0 */
    float field_0x5c4; /* +0x5c4 */
    float field_0x5c8; /* +0x5c8 */
};

/* stack frame of param_1: 14 slot(s), 56 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern float DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern float DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern float DAT_0064c07c; /* 0x64c07c */
extern float DAT_0064c080; /* 0x64c080 */

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
/* Supplied declaration required: FUN_0014f0dc. */
/* Supplied declaration required: FUN_001523b8. */
extern unsigned int FUN_00152f54(void);
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_00407598(fn_00407598_arg0 *param_1)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int in_fpscr;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float fStack_68;
  unsigned int temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  unsigned int temp_v28;
  float temp_v29;
  float temp_v30;
  float temp_v31;
  unsigned int temp_v32;
  float temp_v33;
  float temp_v34;
  float temp_v35;
  
  temp_v4 = param_1->field_0x5b4;
  temp_v5 = param_1->field_0x5b8;
  temp_v6 = param_1->field_0x5bc;
  temp_v19 = 1.0f;
  temp_v18 = 0.0f;
  (*(unsigned int *)((unsigned char *)&temp_v20 + 0)) = param_1->field_0x5c0;
  (*(unsigned int *)((unsigned char *)&temp_v20 + 4)) = param_1->field_0x5c4;
  temp_v21 = param_1->field_0x5c8;
  if (((DAT_005c4c2c & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c2c), temp_v1 != 0)) {
    DAT_0064c054 = temp_v19;
    DAT_0064c058 = temp_v18;
    DAT_0064c05c = temp_v18;
    DAT_0064c060 = temp_v18;
    DAT_0064c064 = temp_v18;
    DAT_0064c068 = temp_v19;
    DAT_0064c06c = temp_v18;
    DAT_0064c070 = temp_v18;
    DAT_0064c074 = temp_v18;
    DAT_0064c078 = temp_v18;
    DAT_0064c07c = temp_v19;
    DAT_0064c080 = temp_v18;
  }
  nn_math_ARMv6_MTX34CopyAsm(&temp_v22,&DAT_0064c054);
  temp_v7 = (float)temp_v20 * 40.764328f;
  temp_v8 = (float)((unsigned long long)temp_v20 >> 0x20) * 40.764328f;
  temp_v9 = romwright_fabs_4(temp_v8);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v18 <= temp_v21 * 40.764328f) << 0x1d);
  temp_v10 = romwright_fabs_4(temp_v21 * 40.764328f);
  for (temp_v21 = romwright_fabs_4(temp_v7); (int)temp_v21 >= 0x47800000; temp_v21 = temp_v21 - 65536.0f) {
  }
  for (; (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
  }
  for (; (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - 65536.0f) {
  }
  temp_v11 = VectorFloatToUnsigned(temp_v21,3);
  temp_v12 = VectorFloatToUnsigned(temp_v9,3);
  temp_v13 = VectorFloatToUnsigned(temp_v10,3);
  temp_v2 = temp_v11;
  temp_v16 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v11 = temp_v12 & 0xff;
  temp_v15 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v12 = temp_v13 & 0xff;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v13 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v17 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v21 - temp_v16) * (float)(&DAT_00536d1c)[temp_v2 * 4]
  ;
  temp_v21 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v21 - temp_v16) * (float)(&DAT_00536d20)[temp_v2 * 4]
  ;
  if (temp_v7 < temp_v18) {
    temp_v17 = -temp_v17;
  }
  temp_v16 = (float)(&DAT_00536d14)[temp_v11 * 4] +
           (temp_v9 - temp_v15) * (float)(&DAT_00536d1c)[temp_v11 * 4];
  temp_v31 = (float)(&DAT_00536d18)[temp_v11 * 4] +
             (temp_v9 - temp_v15) * (float)(&DAT_00536d20)[temp_v11 * 4];
  temp_v7 = (float)(&DAT_00536d14)[temp_v12 * 4] +
          (temp_v10 - temp_v14) * (float)(&DAT_00536d1c)[temp_v12 * 4];
  temp_v9 = (float)(&DAT_00536d18)[temp_v12 * 4] +
           (temp_v10 - temp_v14) * (float)(&DAT_00536d20)[temp_v12 * 4];
  if (temp_v8 < temp_v18) {
    temp_v16 = -temp_v16;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v7 = -temp_v7;
  }
  temp_v22 = temp_v9 * temp_v31;
  temp_v29 = -temp_v16;
  temp_v25 = temp_v7 * temp_v31;
  temp_v30 = temp_v17 * temp_v31;
  temp_v31 = temp_v21 * temp_v31;
  temp_v23 = temp_v17 * temp_v9 * temp_v16 - temp_v21 * temp_v7;
  fStack_68 = temp_v17 * temp_v7 + temp_v21 * temp_v9 * temp_v16;
  temp_v27 = temp_v21 * temp_v7 * temp_v16 - temp_v17 * temp_v9;
  temp_v26 = temp_v21 * temp_v9 + temp_v17 * temp_v7 * temp_v16;
  temp_v24 = 0;
  temp_v28 = 0;
  temp_v32 = 0;
  temp_v35 = -1.0f;
  temp_v33 = temp_v18;
  temp_v34 = temp_v18;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v33,&temp_v22);
  param_1->field_0x55c = temp_v4;
  param_1->field_0x560 = temp_v5;
  param_1->field_0x564 = temp_v6;
  param_1->field_0x568 = temp_v4 + temp_v33;
  param_1->field_0x56c = temp_v5 + temp_v34;
  param_1->field_0x570 = temp_v6 + temp_v35;
  temp_v33 = temp_v18;
  temp_v34 = temp_v19;
  temp_v35 = temp_v18;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&temp_v33,&temp_v22);
  param_1->field_0x584 = temp_v33;
  param_1->field_0x588 = temp_v34;
  param_1->field_0x58c = temp_v35;
  temp_v3 = FUN_00152f54();
  FUN_0014f0dc(temp_v3,&param_1->field_0x55c,&param_1->field_0x568,&param_1->field_0x584);
  FUN_001523b8(temp_v3,1);
  return;
}
