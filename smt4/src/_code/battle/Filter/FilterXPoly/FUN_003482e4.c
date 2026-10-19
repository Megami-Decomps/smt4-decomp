/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003482e4` (_code @ 0x3482e4, 0x3a8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned int DAT_00407ed0; /* 0x407ed0 */
extern unsigned int DAT_00407ed4; /* 0x407ed4 */
extern unsigned int DAT_00407ed8; /* 0x407ed8 */
extern unsigned int DAT_00407edc; /* 0x407edc */
extern unsigned int DAT_00476638; /* 0x476638 */
extern unsigned int DAT_004efd9c; /* 0x4efd9c */
extern float DAT_004efda0; /* 0x4efda0 */
extern float DAT_004efda4; /* 0x4efda4 */
extern float DAT_004efda8; /* 0x4efda8 */
extern float DAT_004efdac; /* 0x4efdac */
extern unsigned int DAT_004efdb0; /* 0x4efdb0 */
extern float DAT_004efdb4; /* 0x4efdb4 */
extern float DAT_004efdb8; /* 0x4efdb8 */
extern float DAT_004efdbc; /* 0x4efdbc */
extern float DAT_004efdc0; /* 0x4efdc0 */
extern unsigned int DAT_004efdc4; /* 0x4efdc4 */
extern float DAT_004efdc8; /* 0x4efdc8 */
extern float DAT_004efdcc; /* 0x4efdcc */
extern float DAT_004efdd0; /* 0x4efdd0 */
extern float DAT_004efdd4; /* 0x4efdd4 */
extern unsigned int DAT_004efdd8; /* 0x4efdd8 */

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
/* Supplied declaration required: FUN_0023b49c. */
/* Supplied declaration required: FUN_00262888. */
/* Supplied declaration required: FUN_002bfe28. */
extern int FUN_002bfefc(unsigned int *);
/* Supplied declaration required: FUN_002c5300. */


/* WARNING: Removing unreachable block (ram,0x00348480) */
/* WARNING: Removing unreachable block (ram,0x0034848c) */

void FUN_003482e4(int param_1,int param_2,unsigned int param_3)

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
  FUN_0023b49c(param_1,param_3,*(unsigned int *)(param_2 + 0x2c));
  temp_v0 = 0x100;
  FUN_002c5300();
  *(unsigned int *)(param_1 + 4) = temp_v0;
  temp_v1 = (**(int **)(param_1 + 0x60) + 1) * 0xc;
  FUN_00262888();
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
  temp_v12 = (float)(&DAT_00407ed0)[temp_v4 * 4] + (0.0f - temp_v15) * (float)(&DAT_00407ed8)[temp_v4 * 4];
  temp_v16 = (float)(&DAT_00407ed0)[temp_v3 * 4] + (temp_v10 - temp_v11) * (float)(&DAT_00407ed8)[temp_v3 * 4]
  ;
  temp_v14 = (float)(&DAT_00407ed4)[temp_v4 * 4] + (0.0f - temp_v15) * (float)(&DAT_00407edc)[temp_v4 * 4];
  temp_v15 = (float)(&DAT_00407ed0)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407ed8)[temp_v5 * 4];
  temp_v11 = (float)(&DAT_00407ed4)[temp_v3 * 4] + (temp_v10 - temp_v11) * (float)(&DAT_00407edc)[temp_v3 * 4]
  ;
  temp_v10 = (float)(&DAT_00407ed4)[temp_v5 * 4] + (0.0f - temp_v8) * (float)(&DAT_00407edc)[temp_v5 * 4];
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
  if (((DAT_00476638 & 1) == 0) && (temp_v1 = FUN_002bfefc(&DAT_00476638), temp_v1 != 0)) {
    DAT_004efd9c = temp_v0;
    DAT_004efda0 = temp_v19;
    DAT_004efda4 = temp_v19;
    DAT_004efda8 = temp_v19;
    DAT_004efdac = temp_v19;
    DAT_004efdb0 = temp_v0;
    DAT_004efdb4 = temp_v19;
    DAT_004efdb8 = temp_v19;
    DAT_004efdbc = temp_v19;
    DAT_004efdc0 = temp_v19;
    DAT_004efdc4 = temp_v0;
    DAT_004efdc8 = temp_v19;
    DAT_004efdcc = temp_v19;
    DAT_004efdd0 = temp_v19;
    DAT_004efdd4 = temp_v19;
    DAT_004efdd8 = temp_v0;
  }
  FUN_002bfe28(param_1 + 0x18,&DAT_004efd9c);
  return;
}
