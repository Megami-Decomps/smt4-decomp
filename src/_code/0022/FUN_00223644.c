/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00223644` (_code @ 0x223644, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474f4; /* 0x4474f4 */
extern int DAT_00447e88; /* 0x447e88 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002857e4(void);
extern int FUN_002c2b1c(void);


void FUN_00223644(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  unsigned int in_fpscr;
  unsigned int temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  unsigned int temp_v7;
  
  temp_v1 = FUN_002c2b1c();
  temp_v7 = 0;
  temp_v2 = FUN_002857e4();
  temp_v0 = DAT_00447e88;
  if (temp_v2 != 0) {
    temp_v2 = temp_v2 * 0x44;
    pfVar4 = (float *)(DAT_00447e88 + 0x24);
    temp_v5 = (float)VectorSignedToFloat((int)*(char *)(temp_v2 + 0x447f48),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    temp_v6 = (float)VectorSignedToFloat((int)*(char *)(temp_v2 + 0x447f49),(unsigned char)(in_fpscr >> 0x16) & 3
                                      );
    temp_v4 = temp_v5 * 500.0f + 250.0f;
    temp_v5 = temp_v6 * 500.0f + 250.0f;
    temp_v3 = VectorSignedToFloat((int)*(short *)(temp_v2 + 0x447f4a),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)(DAT_00447e88 + 0x1c) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x20) = temp_v7;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v7;
    *pfVar4 = temp_v5;
    *(float *)(temp_v0 + 0x28) = temp_v4;
    *(float *)(temp_v0 + 0x30) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v3;
    *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v3;
    return;
  }
  temp_v2 = temp_v1 + *(char *)(temp_v1 + 0xdcd) * 0x78 + *(char *)(temp_v1 + 0xdcc) * 8;
  temp_v5 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0xdcc),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v6 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0xdcd),(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v4 = temp_v5 * 500.0f + 250.0f;
  temp_v5 = temp_v6 * 500.0f + 250.0f;
  *(float *)(DAT_00447e88 + 0x1c) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x20) = temp_v7;
  *(float *)(temp_v0 + 0x24) = temp_v5;
  *(float *)(temp_v0 + 0x28) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x2c) = temp_v7;
  *(float *)(temp_v0 + 0x30) = temp_v5;
  temp_v3 = temp_v7;
  if (*(char *)(temp_v2 - 0x3c) == '\x02') {
    temp_v3 = 0x43340000;
  }
  if (*(char *)(temp_v2 + 0xb4) == '\x02') {
    temp_v3 = temp_v7;
  }
  if (*(char *)(temp_v2 + 0x34) == '\x02') {
    temp_v3 = 0x43870000;
  }
  if (*(char *)(temp_v2 + 0x44) == '\x02') {
    temp_v3 = 0x42b40000;
  }
  *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x50) = temp_v3;
  *(unsigned int *)(DAT_004474f4 + 0x18) = temp_v3;
  return;
}
