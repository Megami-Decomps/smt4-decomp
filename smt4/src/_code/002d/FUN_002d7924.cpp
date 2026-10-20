/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d7924` (_code @ 0x2d7924, 0x214 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, unsigned int);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
} param_1_stack;

extern int DAT_00446fec; /* 0x446fec */
extern int DAT_00446ff0; /* 0x446ff0 */
extern int DAT_00447000; /* 0x447000 */
extern int DAT_00447004; /* 0x447004 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern unsigned int FUN_0024a89c(float *, int, int, int, int);


unsigned int FUN_002d7924(float *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int unaff_r6;
  int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  float temp_v16;
  unsigned long long temp_v17;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  
  temp_v8 = 0;
  temp_v7 = 0;
  temp_v12 = *param_1;
  temp_v14 = param_1[2];
  temp_v15 = CONCAT44(temp_v14,0xc47a0000);
  temp_v11 = param_1[1];
  temp_v17 = 0;
  temp_v13 = temp_v12;
  do {
    temp_v4 = DAT_00447000;
    temp_v6 = DAT_00446fec;
    if ((temp_v7 != 0) && (temp_v4 = DAT_00447004, temp_v6 = DAT_00446ff0, temp_v7 != 1)) {
      temp_v4 = 0;
      temp_v6 = unaff_r6;
    }
    temp_v5 = 0;
    if (temp_v5 < temp_v6) {
      do {
        temp_v16 = (float)((unsigned long long)temp_v15 >> 0x20);
        temp_v9 = (temp_v12 - *(float *)(temp_v4 + 0x8c)) * *(float *)(temp_v4 + 0xc) +
                 (temp_v11 - *(float *)(temp_v4 + 0x90)) * *(float *)(temp_v4 + 0x10) +
                 (temp_v14 - *(float *)(temp_v4 + 0x94)) * *(float *)(temp_v4 + 0x14);
        temp_v10 = (temp_v13 - *(float *)(temp_v4 + 0x8c)) * *(float *)(temp_v4 + 0xc) +
                 ((float)temp_v15 - *(float *)(temp_v4 + 0x90)) * *(float *)(temp_v4 + 0x10) +
                 (temp_v16 - *(float *)(temp_v4 + 0x94)) * *(float *)(temp_v4 + 0x14);
        if (temp_v9 * temp_v10 < (float)temp_v17) {
          temp_v8 = 1;
          temp_v9 = romwright_fabs_4(temp_v9 / (temp_v10 - temp_v9));
          temp_v18 = (temp_v13 - temp_v12) * temp_v9 + temp_v12;
          temp_v19 = ((float)temp_v15 - temp_v11) * temp_v9 + temp_v11;
          temp_v20 = (temp_v16 - temp_v14) * temp_v9 + temp_v14;
          if (temp_v7 != 1) {
            temp_v0 = FUN_0024a89c(&temp_v18,temp_v4 + 0xc,temp_v4 + 0x5c,temp_v4 + 0x68,temp_v4 + 0x74);
          }
          else {
            temp_v1 = FUN_0024a89c(&temp_v18,temp_v4 + 0xc,temp_v4 + 0x5c,temp_v4 + 0x68,temp_v4 + 0x80);
            temp_v2 = FUN_0024a89c(&temp_v18,temp_v4 + 0xc,temp_v4 + 0x5c,temp_v4 + 0x80,temp_v4 + 0x68);
            temp_v3 = FUN_0024a89c(&temp_v18,temp_v4 + 0xc,temp_v4 + 0x68,temp_v4 + 0x74,temp_v4 + 0x80);
            temp_v0 = FUN_0024a89c(&temp_v18,temp_v4 + 0xc,temp_v4 + 0x68,temp_v4 + 0x80,temp_v4 + 0x74);
            temp_v0 = temp_v0 | temp_v1 | temp_v2 | temp_v3;
          }
          if (temp_v0 != 0) {
            param_1[1] = temp_v19;
          }
        }
        temp_v5 = temp_v5 + 1;
        temp_v4 = temp_v4 + 0xa8;
      } while (temp_v5 < temp_v6);
    }
    temp_v7 = temp_v7 + 1;
    unaff_r6 = temp_v6;
  } while (temp_v7 < 2);
  return temp_v8;
}

} /* extern "C" */
