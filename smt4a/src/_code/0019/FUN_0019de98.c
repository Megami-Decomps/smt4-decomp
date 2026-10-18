/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019de98` (_code @ 0x19de98, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f0c8; /* 0x57f0c8 */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: rt_memcpy. */


void FUN_0019de98(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned char temp_v5;
  
  temp_v1 = DAT_0057f0c8;
  *(unsigned int *)(DAT_0057f0c8 + 0x5ec) = param_2;
  *(unsigned int *)(temp_v1 + 0x670) = 0;
  *(unsigned char *)(temp_v1 + 0x674) = 0xff;
  if (param_1 == 0) {
    *(unsigned char *)(temp_v1 + 0x5ea) = 0;
  }
  else {
    *(unsigned int *)(temp_v1 + 0x5f0) = 0;
    *(unsigned int *)(temp_v1 + 0x5f4) = 0;
    *(unsigned int *)(temp_v1 + 0x5f8) = 0;
    *(unsigned int *)(temp_v1 + 0x5fc) = 0;
    *(unsigned int *)(temp_v1 + 0x600) = 0;
    *(unsigned int *)(temp_v1 + 0x604) = 0;
    *(unsigned int *)(temp_v1 + 0x608) = 0;
    *(unsigned int *)(temp_v1 + 0x60c) = 0;
    *(unsigned int *)(temp_v1 + 0x610) = 0;
    *(unsigned int *)(temp_v1 + 0x614) = 0;
    *(unsigned int *)(temp_v1 + 0x618) = 0;
    *(unsigned int *)(temp_v1 + 0x61c) = 0;
    *(unsigned int *)(temp_v1 + 0x620) = 0;
    *(unsigned int *)(temp_v1 + 0x624) = 0;
    *(unsigned int *)(temp_v1 + 0x628) = 0;
    *(unsigned int *)(temp_v1 + 0x62c) = 0;
    *(unsigned int *)(temp_v1 + 0x630) = 0;
    *(unsigned int *)(temp_v1 + 0x634) = 0;
    *(unsigned int *)(temp_v1 + 0x638) = 0;
    *(unsigned int *)(temp_v1 + 0x63c) = 0;
    *(unsigned int *)(temp_v1 + 0x640) = 0;
    *(unsigned int *)(temp_v1 + 0x644) = 0;
    *(unsigned int *)(temp_v1 + 0x648) = 0;
    *(unsigned int *)(temp_v1 + 0x64c) = 0;
    *(unsigned int *)(temp_v1 + 0x650) = 0;
    *(unsigned int *)(temp_v1 + 0x654) = 0;
    *(unsigned int *)(temp_v1 + 0x658) = 0;
    *(unsigned int *)(temp_v1 + 0x65c) = 0;
    *(unsigned int *)(temp_v1 + 0x660) = 0;
    *(unsigned int *)(temp_v1 + 0x664) = 0;
    temp_v4 = 0;
    *(unsigned int *)(temp_v1 + 0x668) = 0;
    temp_v2 = 0;
    temp_v3 = 0;
    *(unsigned int *)(temp_v1 + 0x66c) = 0;
    do {
      if (*(char *)(param_1 + temp_v3) == '\0') {
        rt_memcpy(temp_v1 + temp_v4 * 0x40 + 0x5f0,param_1 + temp_v2,temp_v3 - temp_v2);
        break;
      }
      if (*(char *)(param_1 + temp_v3) == '\n') {
        rt_memcpy(temp_v1 + temp_v4 * 0x40 + 0x5f0,param_1 + temp_v2,temp_v3 - temp_v2);
        temp_v2 = temp_v3 + 1;
        temp_v4 = temp_v4 + 1;
      }
      temp_v5 = SBORROW4(temp_v4,1);
      temp_v0 = temp_v4 - 1;
      if (temp_v4 < 2) {
        temp_v5 = SBORROW4(temp_v3 + 1,0x80);
        temp_v0 = temp_v3 - 0x7f;
        temp_v3 = temp_v3 + 1;
      }
    } while (temp_v0 < 0 != temp_v5);
    *(unsigned char *)(temp_v1 + 0x67c) = 0;
    *(unsigned char *)(temp_v1 + 0x5ea) = 1;
  }
  return;
}
