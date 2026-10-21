/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00407450` (_code @ 0x407450, 0x148 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014f0dc(unsigned int, int, float *, float *);
int FUN_001523b8(unsigned int, int);
int controllerSetDestination(unsigned int, int);
int VectorFloatToUnsigned(double, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(float *, unsigned int *);
int nn_math_ARMv6_VEC3TransformAsm_2AD44C(float *, float *);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern float DAT_0064c058; /* 0x64c058 */
extern float DAT_0064c05c; /* 0x64c05c */
extern float DAT_0064c060; /* 0x64c060 */
extern float DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern float DAT_0064c06c; /* 0x64c06c */
extern float DAT_0064c070; /* 0x64c070 */
extern float DAT_0064c074; /* 0x64c074 */
extern float DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
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
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_VEC3TransformAsm_2AD44C. */


void FUN_00407450(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  unsigned int temp_v18;
  unsigned long long temp_v19;
  float temp_v20;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  unsigned int uStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned int uStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  unsigned int uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  if (*(char *)(param_1 + 0x14) != '\0') {
    *(float *)(param_1 + 0x5b4) = *(float *)(param_1 + 0x5b4) + *(float *)(param_1 + 0x59c);
    *(float *)(param_1 + 0x5b8) = *(float *)(param_1 + 0x5b8) + *(float *)(param_1 + 0x5a0);
    *(float *)(param_1 + 0x5bc) = *(float *)(param_1 + 0x5bc) + *(float *)(param_1 + 0x5a4);
    *(float *)(param_1 + 0x5c0) = *(float *)(param_1 + 0x5c0) + *(float *)(param_1 + 0x5a8);
    *(float *)(param_1 + 0x5c4) = *(float *)(param_1 + 0x5c4) + *(float *)(param_1 + 0x5ac);
    *(float *)(param_1 + 0x5c8) = *(float *)(param_1 + 0x5c8) + *(float *)(param_1 + 0x5b0);
    if (*(char *)(param_1 + 0x15) != '\0') {
      *(float *)(param_1 + 0x608) = *(float *)(param_1 + 0x608) + *(float *)(param_1 + 0x5fc);
      *(float *)(param_1 + 0x60c) = *(float *)(param_1 + 0x60c) + *(float *)(param_1 + 0x600);
      *(float *)(param_1 + 0x610) = *(float *)(param_1 + 0x610) + *(float *)(param_1 + 0x604);
      controllerSetDestination(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4),param_1 + 0x608);
    }
    temp_v0 = *(int *)(param_1 + 0x10) + 1;
    *(unsigned int *)(param_1 + 0x10) = temp_v0;
    if (temp_v0 >= 10) {
      *(unsigned char *)(param_1 + 0x14) = 0;
      *(unsigned int *)(param_1 + 0x5b4) = *(unsigned int *)(param_1 + 0x5cc);
      *(unsigned int *)(param_1 + 0x5b8) = *(unsigned int *)(param_1 + 0x5d0);
      *(unsigned int *)(param_1 + 0x5bc) = *(unsigned int *)(param_1 + 0x5d4);
      *(unsigned int *)(param_1 + 0x5c0) = *(unsigned int *)(param_1 + 0x5d8);
      *(unsigned int *)(param_1 + 0x5c4) = *(unsigned int *)(param_1 + 0x5dc);
      *(unsigned int *)(param_1 + 0x5c8) = *(unsigned int *)(param_1 + 0x5e0);
      if (*(char *)(param_1 + 0x15) != '\0') {
        *(unsigned int *)(param_1 + 0x608) = *(unsigned int *)(param_1 + 0x614);
        *(unsigned int *)(param_1 + 0x60c) = *(unsigned int *)(param_1 + 0x618);
        *(unsigned int *)(param_1 + 0x610) = *(unsigned int *)(param_1 + 0x61c);
        controllerSetDestination(*(unsigned int *)(*(int *)(param_1 + 0x1c) + 4),param_1 + 0x608);
      }
    }
  }
  temp_v3 = *(float *)(param_1 + 0x5b4);
  temp_v4 = *(float *)(param_1 + 0x5b8);
  temp_v5 = *(float *)(param_1 + 0x5bc);
  temp_v18 = 0x3f800000;
  temp_v17 = 0.0f;
  temp_v19 = *(unsigned long long *)(param_1 + 0x5c0);
  temp_v20 = *(float *)(param_1 + 0x5c8);
  if (((DAT_005c4c2c & 1) == 0) && (temp_v1 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v1 != 0)) {
    DAT_0064c054 = temp_v18;
    DAT_0064c058 = temp_v17;
    DAT_0064c05c = temp_v17;
    DAT_0064c060 = temp_v17;
    DAT_0064c064 = temp_v17;
    DAT_0064c068 = temp_v18;
    DAT_0064c06c = temp_v17;
    DAT_0064c070 = temp_v17;
    DAT_0064c074 = temp_v17;
    DAT_0064c078 = temp_v17;
    DAT_0064c07c = temp_v18;
    DAT_0064c080 = temp_v17;
  }
  nn_math_ARMv6_MTX34CopyAsm(&fStack_70,&DAT_0064c054);
  temp_v6 = (float)temp_v19 * 40.764328f;
  temp_v7 = (float)((unsigned long long)temp_v19 >> 0x20) * 40.764328f;
  temp_v8 = romwright_fabs_4(temp_v7);
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v17 <= temp_v20 * 40.764328f) << 0x1d);
  temp_v9 = romwright_fabs_4(temp_v20 * 40.764328f);
  for (temp_v20 = romwright_fabs_4(temp_v6); (int)temp_v20 >= 0x47800000; temp_v20 = temp_v20 - 65536.0f) {
  }
  for (; (int)temp_v8 >= 0x47800000; temp_v8 = temp_v8 - 65536.0f) {
  }
  for (; (int)temp_v9 >= 0x47800000; temp_v9 = temp_v9 - 65536.0f) {
  }
  temp_v10 = VectorFloatToUnsigned(temp_v20,3);
  temp_v11 = VectorFloatToUnsigned(temp_v8,3);
  temp_v12 = VectorFloatToUnsigned(temp_v9,3);
  temp_v2 = temp_v10;
  temp_v15 = (float)VectorUnsignedToFloat(temp_v10 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v10 = temp_v11 & 0xff;
  temp_v14 = (float)VectorUnsignedToFloat(temp_v11 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v11 = temp_v12 & 0xff;
  temp_v13 = (float)VectorUnsignedToFloat(temp_v12 & 0xffff,(unsigned char)(temp_v0 >> 0x16) & 3);
  temp_v16 = (float)(&DAT_00536d14)[temp_v2 * 4] + (temp_v20 - temp_v15) * (float)(&DAT_00536d1c)[temp_v2 * 4]
  ;
  temp_v20 = (float)(&DAT_00536d18)[temp_v2 * 4] + (temp_v20 - temp_v15) * (float)(&DAT_00536d20)[temp_v2 * 4]
  ;
  if (temp_v6 < temp_v17) {
    temp_v16 = -temp_v16;
  }
  temp_v15 = (float)(&DAT_00536d14)[temp_v10 * 4] +
           (temp_v8 - temp_v14) * (float)(&DAT_00536d1c)[temp_v10 * 4];
  fStack_48 = (float)(&DAT_00536d18)[temp_v10 * 4] +
              (temp_v8 - temp_v14) * (float)(&DAT_00536d20)[temp_v10 * 4];
  temp_v6 = (float)(&DAT_00536d14)[temp_v11 * 4] +
          (temp_v9 - temp_v13) * (float)(&DAT_00536d1c)[temp_v11 * 4];
  temp_v8 = (float)(&DAT_00536d18)[temp_v11 * 4] +
          (temp_v9 - temp_v13) * (float)(&DAT_00536d20)[temp_v11 * 4];
  if (temp_v7 < temp_v17) {
    temp_v15 = -temp_v15;
  }
  if (!romwright_subpiece_4_1_0(temp_v0 >> 0x1d,0)) {
    temp_v6 = -temp_v6;
  }
  fStack_70 = temp_v8 * fStack_48;
  fStack_50 = -temp_v15;
  fStack_60 = temp_v6 * fStack_48;
  fStack_4c = temp_v16 * fStack_48;
  fStack_48 = temp_v20 * fStack_48;
  fStack_6c = temp_v16 * temp_v8 * temp_v15 - temp_v20 * temp_v6;
  fStack_68 = temp_v16 * temp_v6 + temp_v20 * temp_v8 * temp_v15;
  fStack_58 = temp_v20 * temp_v6 * temp_v15 - temp_v16 * temp_v8;
  fStack_5c = temp_v20 * temp_v8 + temp_v16 * temp_v6 * temp_v15;
  uStack_64 = 0;
  uStack_54 = 0;
  uStack_44 = 0;
  fStack_38 = -1.0f;
  fStack_40 = temp_v17;
  fStack_3c = temp_v17;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&fStack_40,&fStack_70);
  *(float *)(param_1 + 0x55c) = temp_v3;
  *(float *)(param_1 + 0x560) = temp_v4;
  *(float *)(param_1 + 0x564) = temp_v5;
  *(float *)(param_1 + 0x568) = temp_v3 + fStack_40;
  *(float *)(param_1 + 0x56c) = temp_v4 + fStack_3c;
  *(float *)(param_1 + 0x570) = temp_v5 + fStack_38;
  fStack_40 = temp_v17;
  fStack_3c = (float)temp_v18;
  fStack_38 = temp_v17;
  nn_math_ARMv6_VEC3TransformAsm_2AD44C(&fStack_40,&fStack_70);
  *(float *)(param_1 + 0x584) = fStack_40;
  *(float *)(param_1 + 0x588) = fStack_3c;
  *(float *)(param_1 + 0x58c) = fStack_38;
  temp_v18 = FUN_00152f54();
  FUN_0014f0dc(temp_v18,param_1 + 0x55c,(float *)(param_1 + 0x568),(float *)(param_1 + 0x584));
  FUN_001523b8(temp_v18,1);
  return;
}

} /* extern "C" */
