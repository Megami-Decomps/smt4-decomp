/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eed9c` (_code @ 0x2eed9c, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(int, int);

extern int DAT_005806a4; /* 0x5806a4 */
extern int DAT_00581288; /* 0x581288 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_00162e8c(void);
extern int FUN_00376f94(void);


void FUN_002eed9c(void)

{
/* irregular: irregular input(s): in_fpscr; 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  float *pfVar4;
  unsigned int in_fpscr;
  float temp_v3;
  float temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  
  temp_v1 = FUN_00162e8c();
  temp_v5 = 0;
  temp_v6 = temp_v5;
  temp_v2 = FUN_00376f94();
  temp_v0 = DAT_00581288;
  if (temp_v2 >= 100) {
    temp_v4 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0xe02),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v3 = (float)VectorSignedToFloat((int)*(char *)(temp_v1 + 0xe03),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v1 = temp_v1 + *(char *)(temp_v1 + 0xe03) * 0x78 + *(char *)(temp_v1 + 0xe02) * 8;
    pfVar4 = (float *)(DAT_00581288 + 0x24);
    temp_v4 = temp_v4 * 700.0f + 350.0f;
    temp_v3 = temp_v3 * 700.0f + 350.0f;
    *(float *)(DAT_00581288 + 0x1c) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x20) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v6;
    *pfVar4 = temp_v3;
    *(float *)(temp_v0 + 0x28) = temp_v4;
    *(float *)(temp_v0 + 0x30) = temp_v3;
    if (*(char *)(temp_v1 - 0x3c) == '\x02') {
      temp_v5 = 0x43340000;
    }
    if (*(char *)(temp_v1 + 0xb4) == '\x02') {
      temp_v5 = temp_v6;
    }
    if (*(char *)(temp_v1 + 0x34) == '\x02') {
      temp_v5 = 0x43870000;
    }
    if (*(char *)(temp_v1 + 0x44) == '\x02') {
      temp_v5 = 0x42b40000;
    }
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v5;
    *(unsigned int *)(DAT_005806a4 + 0x18) = temp_v5;
  }
  return;
}

} /* extern "C" */
