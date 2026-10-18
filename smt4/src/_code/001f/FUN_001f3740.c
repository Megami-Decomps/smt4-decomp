/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001f3740` (_code @ 0x1f3740, 0x204 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_00296d6c. */
extern float *FUN_002c08f0(void);


unsigned int FUN_001f3740(void)

{
/* irregular: irregular input(s): in_fpscr, in_s3; 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float *pfVar3;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float in_s3;
  float temp_v14;
  unsigned int temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  
  pfVar3 = (float *)FUN_002c08f0();
  temp_v13 = *pfVar3;
  temp_v12 = pfVar3[2];
  temp_v15 = 0x3f800000;
  temp_v11 = pfVar3[3];
  temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v13 < temp_v12) << 0x1f) |
          ((unsigned int)(temp_v13 == temp_v12) << 0x1e);
  temp_v10 = temp_v0 | ((unsigned int)(NAN(temp_v13) || NAN(temp_v12)) << 0x1c);
  temp_v14 = pfVar3[4];
  temp_v1 = (unsigned char)(temp_v0 >> 0x18);
  temp_v7 = temp_v1 >> 7;
  temp_v9 = (unsigned char)(temp_v10 >> 0x1c) & 1;
  if (temp_v7 == temp_v9) {
    in_s3 = pfVar3[1];
    temp_v10 = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s3 < temp_v12) << 0x1f) |
             ((unsigned int)(in_s3 == temp_v12) << 0x1e) | ((unsigned int)(NAN(in_s3) || NAN(temp_v12)) << 0x1c);
    temp_v1 = (unsigned char)(temp_v10 >> 0x18);
    temp_v7 = temp_v1 >> 7;
    temp_v9 = (temp_v1 >> 4) & 1;
  }
  if (!(unsigned char)((temp_v1 >> 6) & 1) && temp_v7 == temp_v9) {
    temp_v12 = 1.0f - (temp_v13 - temp_v12) / (in_s3 - temp_v12);
    temp_v11 = temp_v11 * temp_v12;
    temp_v14 = temp_v14 * temp_v12;
  }
  temp_v17 = 0.5f;
  temp_v13 = 100.0f;
  temp_v2 = FUN_00296d6c((int)(temp_v11 * 0.5f * 100.0f),(int)(temp_v11 * 100.0f));
  temp_v12 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v10 >> 0x16) & 3);
  temp_v2 = FUN_00296d6c((int)(temp_v14 * temp_v17 * temp_v13),(int)(temp_v14 * temp_v13));
  temp_v12 = temp_v12 * 0.01f;
  temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v10 >> 0x16) & 3);
  temp_v16 = CONCAT44(temp_v15,temp_v11 * 0.01f);
  temp_v3 = FUN_00296d6c(0,1);
  temp_v5 = temp_v3 * 2 - 1;
  temp_v3 = FUN_00296d6c(0,1);
  temp_v11 = pfVar3[5];
  temp_v15 = 0;
  temp_v3 = temp_v3 * 2 - 1;
  temp_v13 = pfVar3[6];
  if (0.0f < temp_v11) {
    temp_v2 = 1;
  }
  else {
    temp_v2 = 0xffffffff;
  }
  temp_v0 = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
  if (0.0f < temp_v13) {
    temp_v6 = 1;
  }
  else {
    temp_v6 = 0xffffffff;
  }
  temp_v8 = 0;
  if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
    temp_v0 = (temp_v10 & 0xfffffff) | ((unsigned int)(temp_v13 == 0.0f) << 0x1e);
    temp_v8 = romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0);
  }
  if (temp_v8) {
    temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v11 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v0 >> 0x16) & 3);
    temp_v12 = temp_v12 * temp_v11;
    pfVar3[5] = temp_v12;
    pfVar3[6] = (float)temp_v16 * temp_v13;
  }
  else {
    temp_v10 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v11 == 0.0f) << 0x1e);
    if ((!romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0)) &&
       ((temp_v10 = (temp_v0 & 0xfffffff) | ((unsigned int)(temp_v13 == 0.0f) << 0x1e), romwright_subpiece_4_1_0(temp_v10 >> 0x1e,0) ||
        (temp_v4 = FUN_00296d6c(0,1), temp_v4 != 0)))) {
      temp_v13 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v12 = temp_v12 * temp_v11;
      pfVar3[5] = temp_v12;
      pfVar3[6] = (float)temp_v16 * temp_v13;
    }
    else {
      temp_v13 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v11 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(temp_v10 >> 0x16) & 3);
      temp_v12 = temp_v12 * temp_v11;
      pfVar3[5] = temp_v12;
      pfVar3[6] = (float)temp_v16 * temp_v13;
    }
  }
  *(float *)pfVar3[7] = temp_v12;
  *(float *)pfVar3[8] = pfVar3[6];
  temp_v11 = *pfVar3 + (float)((unsigned long long)temp_v16 >> 0x20);
  *pfVar3 = temp_v11;
  if (temp_v11 < pfVar3[1]) {
    temp_v15 = 0;
  }
  else {
    *(unsigned int *)pfVar3[7] = temp_v15;
    *(unsigned int *)pfVar3[8] = temp_v15;
    temp_v15 = 0xffffffff;
  }
  return temp_v15;
}
