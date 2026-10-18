/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac078` (_code @ 0x2ac078, 0x228 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
extern float *FUN_00164a9c(void);
/* Supplied declaration required: FUN_00184964. */


unsigned int FUN_002ac078(void)

{
/* irregular: irregular input(s): in_fpscr; 4 native warning(s); review required */
  unsigned int temp_v0;
  float *pfVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int in_fpscr;
  unsigned int temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  unsigned int temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  
  pfVar2 = (float *)FUN_00164a9c();
  temp_v12 = 0x3f800000;
  temp_v8 = pfVar2[3];
  temp_v11 = pfVar2[4];
  if (*(char *)(pfVar2 + 9) == '\0') {
    temp_v10 = *pfVar2;
    temp_v9 = pfVar2[2];
    temp_v0 = in_fpscr & 0xfffffff;
    temp_v7 = temp_v0 | ((unsigned int)(temp_v10 < temp_v9) << 0x1f);
    in_fpscr = temp_v7 | ((unsigned int)(NAN(temp_v10) || NAN(temp_v9)) << 0x1c);
    if ((unsigned char)(temp_v7 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
      in_fpscr = temp_v0 | ((unsigned int)(pfVar2[1] <= temp_v9) << 0x1d);
      if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
        temp_v9 = 1.0f - (temp_v10 - temp_v9) / (pfVar2[1] - temp_v9);
        temp_v8 = temp_v8 * temp_v9;
        temp_v11 = temp_v11 * temp_v9;
      }
    }
  }
  temp_v14 = 0.5f;
  temp_v10 = 100.0f;
  temp_v1 = FUN_00184964((int)(temp_v8 * 0.5f * 100.0f),(int)(temp_v8 * 100.0f));
  temp_v9 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v1 = FUN_00184964((int)(temp_v11 * temp_v14 * temp_v10),(int)(temp_v11 * temp_v10));
  temp_v9 = temp_v9 * 0.01f;
  temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v13 = CONCAT44(temp_v12,temp_v8 * 0.01f);
  temp_v2 = FUN_00184964(0,1);
  temp_v4 = temp_v2 * 2 - 1;
  temp_v2 = FUN_00184964(0,1);
  temp_v8 = pfVar2[5];
  temp_v12 = 0;
  temp_v2 = temp_v2 * 2 - 1;
  temp_v11 = pfVar2[6];
  if (0.0f < temp_v8) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0xffffffff;
  }
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v8 == 0.0f) << 0x1e);
  if (0.0f < temp_v11) {
    temp_v5 = 1;
  }
  else {
    temp_v5 = 0xffffffff;
  }
  temp_v6 = 0;
  if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
    temp_v6 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  }
  if (temp_v6) {
    temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v8 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v9 = temp_v9 * temp_v8;
    pfVar2[5] = temp_v9;
    pfVar2[6] = (float)temp_v13 * temp_v11;
  }
  else {
    temp_v7 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v8 == 0.0f) << 0x1e);
    if ((!romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0)) &&
       ((temp_v7 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e), romwright_subpiece_4_1_0(temp_v7 >> 0x1e,0) ||
        (temp_v3 = FUN_00184964(0,1), temp_v3 != 0)))) {
      temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v1,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v9 = temp_v9 * temp_v8;
      pfVar2[5] = temp_v9;
      pfVar2[6] = (float)temp_v13 * temp_v11;
    }
    else {
      temp_v11 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v8 = (float)VectorSignedToFloat(temp_v4,(unsigned char)(temp_v7 >> 0x16) & 3);
      temp_v9 = temp_v9 * temp_v8;
      pfVar2[5] = temp_v9;
      pfVar2[6] = (float)temp_v13 * temp_v11;
    }
  }
  *(float *)pfVar2[7] = temp_v9;
  *(float *)pfVar2[8] = pfVar2[6];
  if ((*(char *)(pfVar2 + 9) == '\0') &&
     (temp_v8 = *pfVar2 + (float)((unsigned long long)temp_v13 >> 0x20), *pfVar2 = temp_v8, pfVar2[1] <= temp_v8))
  {
    *(unsigned int *)pfVar2[7] = temp_v12;
    *(unsigned int *)pfVar2[8] = temp_v12;
    return 0xffffffff;
  }
  return 0;
}
