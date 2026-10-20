/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102e7c` (_code @ 0x102e7c, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6c60(int *);

extern int FUN_00102a6c(int *);
extern int FUN_002e6c50(int);
extern int FUN_002e6c58(int);
/* Supplied declaration required: FUN_002e6c60. */


unsigned int FUN_00102e7c(int *param_1,int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  
  temp_v6 = param_1[5];
  if (((param_1[3] & 3U) == 0) || (temp_v0 = FUN_002e6c50(temp_v6), temp_v0 != 0)) {
    return 2;
  }
  if (param_3 != 0) {
    if (param_3 != 1) {
      if (param_3 != 2) {
        return 2;
      }
      temp_v6 = FUN_002e6c58(temp_v6);
      temp_v1 = param_1[3];
      param_1[3] = temp_v1 | 0x10;
      if (temp_v6 < 0) {
        FUN_002e6c60(param_1);
        return 1;
      }
      if ((int)((temp_v1 | 0x10) << 0xf) < 0) {
        temp_v1 = param_1[0xb];
        if ((unsigned int)param_1[0xb] <= (unsigned int)param_1[1]) {
          temp_v1 = param_1[1];
        }
        temp_v0 = (temp_v1 + param_1[6]) - param_1[4];
        if (temp_v6 < temp_v0) {
          temp_v6 = temp_v0;
        }
      }
      param_2 = param_2 + temp_v6;
    }
    else {
      temp_v6 = FUN_00102a6c(param_1);
      param_2 = temp_v6 + param_2;
    }
  }
  if (param_2 < 0) {
    return 2;
  }
  temp_v1 = param_1[1];
  temp_v3 = param_1[3];
  if (((unsigned int)param_1[0xb] < temp_v1) && (param_1[0xb] = temp_v1, (int)(temp_v3 << 0xe) < 0)) {
    temp_v3 = (temp_v3 & 0xfffdffff) | 0x10;
  }
  temp_v6 = param_1[6];
  if (temp_v6 <= param_2) {
    temp_v2 = param_1[0xb];
    temp_v4 = temp_v1;
    if (temp_v1 < temp_v2) {
      temp_v4 = temp_v2;
    }
    temp_v5 = param_1[4];
    if (param_2 < (int)((temp_v4 + temp_v6) - temp_v5)) {
      temp_v4 = temp_v1;
      if (temp_v1 < temp_v2) {
        temp_v4 = temp_v2;
      }
      if (temp_v4 != temp_v5) {
        param_2 = param_2 - temp_v6;
        param_1[2] = param_2 - param_1[7];
        if (temp_v1 < temp_v2) {
          temp_v1 = temp_v2;
        }
        *param_1 = param_2 - (temp_v1 - temp_v5);
        param_1[1] = temp_v5 + param_2;
        temp_v3 = temp_v3 & 0xffffffdf;
        param_1[3] = temp_v3 & 0xffd7cfbf;
        *(unsigned char *)(param_1 + 0x11) = 0;
        return 0;
      }
    }
  }
  temp_v3 = temp_v3 | 0x20;
  param_1[2] = 0;
  param_1[10] = param_2;
  *param_1 = 0;
  param_1[3] = temp_v3 & 0xffd7cfbf;
  *(unsigned char *)(param_1 + 0x11) = 0;
  return 0;
}

} /* extern "C" */
