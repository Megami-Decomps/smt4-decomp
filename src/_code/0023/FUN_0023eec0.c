/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023eec0` (_code @ 0x23eec0, 0x2f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_002876d0(unsigned int);
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_0029e2f4. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002a63f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002b9094(void);
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c5b04. */


unsigned int FUN_0023eec0(unsigned int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  float temp_v2;
  float temp_v3;
  unsigned long long temp_v4;
  float temp_v5;
  unsigned int temp_v6;
  unsigned long long temp_v7;
  
  temp_v6 = 0x42700000;
  temp_v7 = 0x42700000;
  temp_v4 = 0x3f80000000000000;
  if (param_1[7] == 0) {
    param_1[10] = 0;
    param_1[0xd] = 0x3fc00000;
    param_1[0xe] = 300;
    param_1[9] = 0x42700000;
    param_1[0xb] = 0x3f800000;
    param_1[0xc] = 0x3f800000;
    FUN_002c5b04(0x2d,0);
    temp_v1 = 1;
    do {
      FUN_002a6214(0x2d,temp_v1);
      temp_v6 = (unsigned int)temp_v7;
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
    temp_v0 = 0;
    param_1[0xf] = 0;
    FUN_0029e2f4();
    param_1[0xf] = temp_v0;
    temp_v1 = FUN_002876d0(0x1000051);
    if (temp_v1 != 1) {
      FUN_002a0640(0x1000051,0);
    }
    param_1[7] = param_1[7] + 1;
  }
  temp_v1 = FUN_002c2bd0(0);
  if ((temp_v1 == 0) &&
     ((temp_v1 = FUN_002b9094(), temp_v1 == 6 || (temp_v1 = FUN_002bffbc(0), temp_v1 != 0)))) {
    param_1[7] = 2;
    param_1[0xe] = 0;
  }
  else if (param_1[7] == 0) {
    return 0;
  }
  temp_v2 = (float)param_1[9];
  temp_v5 = (float)((unsigned long long)temp_v4 >> 0x20);
  param_1[9] = temp_v2 - temp_v5;
  temp_v3 = (float)temp_v4;
  if (temp_v2 - temp_v5 <= temp_v3) {
    param_1[9] = temp_v6;
    *(float *)&param_1[10] = temp_v3;
    *(float *)&param_1[0xb] = temp_v5;
  }
  temp_v1 = param_1[9];
  if ((temp_v1 < 0x41f00001) && ((float)param_1[0xc] <= temp_v3)) {
    *(float *)&param_1[0xc] = temp_v3;
    *(float *)&param_1[0xd] = temp_v5;
  }
  temp_v2 = 0.033333335f;
  if (temp_v1 >= 0x41f00001) {
    param_1[10] = (float)param_1[10] + 0.033333335f;
    param_1[0xb] = (float)param_1[0xb] + 0.016666668f;
    param_1[0xc] = (float)param_1[0xc] - 0.033333335f;
    param_1[0xd] = (float)param_1[0xd] + 0.016666668f;
  }
  if (temp_v1 < 0x41f00000) {
    param_1[10] = (float)param_1[10] - 0.033333335f;
    param_1[0xb] = (float)param_1[0xb] + 0.016666668f;
    param_1[0xc] = (float)param_1[0xc] + 0.033333335f;
    param_1[0xd] = (float)param_1[0xd] + 0.016666668f;
  }
  if (param_1[7] == 1) {
    temp_v1 = FUN_002a63f8(0x2d,6);
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v1 = FUN_002c2bd0(0);
    if (temp_v1 == 3) {
      FUN_002a0678(0,0x1e);
    }
    temp_v1 = FUN_002c2bd0(0);
    if (temp_v1 == 2) {
      return 0;
    }
    if ((int)param_1[8] < 0x3f800000) {
      param_1[8] = (float)param_1[8] + temp_v2;
    }
    else {
      param_1[0xe] = 300;
    }
  }
  if (param_1[7] == 2) {
    temp_v1 = param_1[0xe];
    param_1[0xe] = temp_v1 - 1;
    if (-1 < temp_v1 - 1) {
      return 0;
    }
    param_1[7] = 3;
    param_1[0xe] = 300;
    FUN_0029c660(0,0x2d,0xff);
  }
  if ((param_1[7] == 3) && (temp_v1 = FUN_002c2bd0(0), temp_v1 == 3)) {
    temp_v1 = 1;
    do {
      FUN_002aeb2c(0x2d,temp_v1);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 7);
    FUN_002aea7c(0x2d);
    FUN_002b9008();
    FUN_0029c650(0xf);
    *param_1 = 9;
  }
  return 0;
}
