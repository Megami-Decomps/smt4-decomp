/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00415cd8` (_code @ 0x415cd8, 0x3a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00536d14; /* 0x536d14 */
extern unsigned int DAT_00536d18; /* 0x536d18 */
extern unsigned int DAT_00536d1c; /* 0x536d1c */
extern unsigned int DAT_00536d20; /* 0x536d20 */
extern unsigned int DAT_005c4c30; /* 0x5c4c30 */
extern unsigned int DAT_0064c084; /* 0x64c084 */
extern float DAT_0064c088; /* 0x64c088 */
extern float DAT_0064c08c; /* 0x64c08c */
extern float DAT_0064c090; /* 0x64c090 */
extern float DAT_0064c094; /* 0x64c094 */
extern unsigned int DAT_0064c098; /* 0x64c098 */
extern float DAT_0064c09c; /* 0x64c09c */
extern float DAT_0064c0a0; /* 0x64c0a0 */
extern float DAT_0064c0a4; /* 0x64c0a4 */
extern float DAT_0064c0a8; /* 0x64c0a8 */
extern unsigned int DAT_0064c0ac; /* 0x64c0ac */
extern float DAT_0064c0b0; /* 0x64c0b0 */
extern float DAT_0064c0b4; /* 0x64c0b4 */
extern float DAT_0064c0b8; /* 0x64c0b8 */
extern float DAT_0064c0bc; /* 0x64c0bc */
extern unsigned int DAT_0064c0c0; /* 0x64c0c0 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0019a0e8. */
extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_0030cb44. */
/* Supplied declaration required: FUN_00409e20. */


/* WARNING: Removing unreachable block (ram,0x00415e74) */
/* WARNING: Removing unreachable block (ram,0x00415e80) */

void FUN_00415cd8(int param_1,int param_2,unsigned int param_3)

{
/* irregular: irregular input(s): in_fpscr; 9 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  float *pfVar5;
  unsigned char temp_v3;
  unsigned char temp_v4;
  unsigned int in_fpscr;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  float temp_v15;
  float temp_v16;
  float temp_v17;
  float temp_v18;
  float temp_v19;
  
  *(int *)(param_1 + 0x60) = param_2;
  FUN_00409e20(param_1,param_3,*(unsigned int *)(param_2 + 0x2c));
  temp_v0 = 0x100;
  FUN_001630d4();
  *(unsigned int *)(param_1 + 4) = temp_v0;
  temp_v1 = (**(int **)(param_1 + 0x60) + 1) * 0xc;
  FUN_0030cb44();
  *(int *)(param_1 + 100) = temp_v1;
  temp_v19 = 0.0f;
  temp_v10 = (float)VectorSignedToFloat(**(unsigned int **)(param_1 + 0x60),(unsigned char)(in_fpscr >> 0x16) & 3
                                     );
  temp_v10 = (360.0f / temp_v10) * 0.7111111f;
  temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v10) << 0x1d);
  for (temp_v10 = romwright_fabs_4(temp_v10); (int)temp_v10 >= 0x47800000; temp_v10 = temp_v10 - 65536.0f) {
  }
  temp_v5 = VectorFloatToUnsigned(0,3);
  temp_v6 = VectorFloatToUnsigned(0,3);
  temp_v7 = VectorFloatToUnsigned(temp_v10,3);
  temp_v4 = temp_v5;
  temp_v3 = temp_v7;
  temp_v15 = (float)VectorUnsignedToFloat(temp_v5 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v5 = temp_v6 & 0xff;
  temp_v11 = (float)VectorUnsignedToFloat(temp_v7 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v8 = (float)VectorUnsignedToFloat(temp_v6 & 0xffff,(unsigned char)(temp_v2 >> 0x16) & 3);
  temp_v12 = (float)(&DAT_00536d14)[temp_v4 * 4] + (0.0f - temp_v15) * (float)(&DAT_00536d1c)[temp_v4 * 4];
  temp_v16 = (float)(&DAT_00536d14)[temp_v3 * 4] + (temp_v10 - temp_v11) * (float)(&DAT_00536d1c)[temp_v3 * 4]
  ;
  temp_v14 = (float)(&DAT_00536d18)[temp_v4 * 4] + (0.0f - temp_v15) * (float)(&DAT_00536d20)[temp_v4 * 4];
  temp_v15 = (float)(&DAT_00536d14)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d1c)[temp_v5 * 4];
  temp_v11 = (float)(&DAT_00536d18)[temp_v3 * 4] + (temp_v10 - temp_v11) * (float)(&DAT_00536d20)[temp_v3 * 4]
  ;
  temp_v10 = (float)(&DAT_00536d18)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00536d20)[temp_v5 * 4];
  if (!romwright_subpiece_4_1_0(temp_v2 >> 0x1d,0)) {
    temp_v16 = -temp_v16;
  }
  temp_v13 = *(float *)(*(int *)(param_1 + 0x60) + 4);
  puVar2 = *(unsigned int **)(param_1 + 4);
  *puVar2 = 0;
  puVar2[1] = 0;
  puVar2[2] = 0;
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x14);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x10);
  *(unsigned int *)(temp_v1 + 0x10) = temp_v0;
  temp_v1 = *(int *)(param_1 + 4);
  *(float *)(temp_v1 + 0x14) = temp_v13;
  *(unsigned int *)(temp_v1 + 0x18) = 0;
  *(unsigned int *)(temp_v1 + 0x1c) = 0;
  temp_v1 = *(int *)(param_1 + 4);
  temp_v0 = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x1c);
  *(unsigned int *)(temp_v1 + 0x20) = *(unsigned int *)(*(int *)(param_1 + 0x60) + 0x18);
  *(unsigned int *)(temp_v1 + 0x24) = temp_v0;
  temp_v2 = 2;
  temp_v8 = temp_v19;
  temp_v9 = temp_v19;
  if (**(int **)(param_1 + 0x60) + 1 >= 3) {
    do {
      pfVar5 = (float *)(*(int *)(param_1 + 4) + temp_v2 * 0x14);
      temp_v18 = -temp_v15 * temp_v13;
      temp_v17 = temp_v16 * temp_v10 * temp_v13 + (temp_v14 * temp_v11 + temp_v12 * temp_v16 * temp_v15) * temp_v8 +
               (temp_v14 * temp_v16 * temp_v15 - temp_v12 * temp_v11) * temp_v9;
      temp_v13 = temp_v11 * temp_v10 * temp_v13 + (temp_v12 * temp_v11 * temp_v15 - temp_v14 * temp_v16) * temp_v8 +
               (temp_v12 * temp_v16 + temp_v14 * temp_v11 * temp_v15) * temp_v9;
      temp_v9 = temp_v18 + temp_v12 * temp_v10 * temp_v8 + temp_v14 * temp_v10 * temp_v9;
      *pfVar5 = temp_v13;
      pfVar5[1] = temp_v17;
      pfVar5[2] = temp_v9;
      temp_v1 = *(int *)(param_1 + 0x60);
      if ((temp_v2 & 1) != 0) {
        temp_v0 = *(unsigned int *)(temp_v1 + 0x1c);
        puVar2 = (unsigned int *)(temp_v2 * 0x14 + 0xc + *(int *)(param_1 + 4));
        *puVar2 = *(unsigned int *)(temp_v1 + 0x18);
        puVar2[1] = temp_v0;
      }
      else {
        temp_v0 = *(unsigned int *)(temp_v1 + 0x24);
        puVar2 = (unsigned int *)(temp_v2 * 0x14 + 0xc + *(int *)(param_1 + 4));
        *puVar2 = *(unsigned int *)(temp_v1 + 0x20);
        puVar2[1] = temp_v0;
      }
      temp_v2 = temp_v2 + 1;
      temp_v8 = temp_v17;
    } while ((int)temp_v2 < **(int **)(param_1 + 0x60) + 1);
  }
  temp_v0 = 0x3f800000;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0x3f800000;
  if (((DAT_005c4c30 & 1) == 0) && (temp_v1 = FUN_002eba64(&DAT_005c4c30), temp_v1 != 0)) {
    DAT_0064c084 = temp_v0;
    DAT_0064c088 = temp_v19;
    DAT_0064c08c = temp_v19;
    DAT_0064c090 = temp_v19;
    DAT_0064c094 = temp_v19;
    DAT_0064c098 = temp_v0;
    DAT_0064c09c = temp_v19;
    DAT_0064c0a0 = temp_v19;
    DAT_0064c0a4 = temp_v19;
    DAT_0064c0a8 = temp_v19;
    DAT_0064c0ac = temp_v0;
    DAT_0064c0b0 = temp_v19;
    DAT_0064c0b4 = temp_v19;
    DAT_0064c0b8 = temp_v19;
    DAT_0064c0bc = temp_v19;
    DAT_0064c0c0 = temp_v0;
  }
  FUN_0019a0e8(param_1 + 0x18,&DAT_0064c084);
  return;
}
