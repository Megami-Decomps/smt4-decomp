/* NON_MATCHING: romwright 0.5.0 decompilation of `frem` (_code @ 0x152688, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int LZCOUNT(unsigned int);
int coprocessor_function(int, int, int, unsigned int, unsigned int, unsigned int);

#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
extern unsigned long long FUN_001559ec(void);


unsigned int frem(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s); irregular input(s): in_cr13, in_cr15; 2 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  unsigned char temp_v8;
  unsigned int in_cr13;
  unsigned int in_cr15;
  unsigned long long temp_v9;
  
  temp_v9 = romwright_piece_4_4(param_2,param_1);
  temp_v5 = 0xff000000;
  temp_v0 = (unsigned char)(param_2 >> 0x18);
  temp_v8 = (~(param_2 << 1) & 0xff000000) == 0;
  if (!temp_v8) {
    temp_v0 = (unsigned char)(param_1 >> 0x18);
  }
  temp_v7 = (unsigned char)(temp_v0 >> 7);
  if (temp_v8 || (~(param_1 << 1) & 0xff000000) == 0) {
    temp_v9 = FUN_001559ec();
    if (!temp_v7) {
      coprocessor_function(0xf,0xf,7,in_cr15,in_cr15,in_cr13);
    }
LAB_00152790:
    temp_v4 = (unsigned int)temp_v9;
    if ((temp_v5 & (unsigned int)(temp_v9 >> 0x27)) == 0) {
      return 0x7fc00000;
    }
    if ((temp_v9 & 0x7fffffff) != 0) {
      temp_v4 = 0;
    }
    return temp_v4;
  }
  temp_v5 = 0xff0000;
  temp_v4 = (param_2 >> 7) & 0xff0000;
  if ((param_1 & 0x80000000) != 0) {
    temp_v4 = temp_v4 | 5;
  }
  temp_v3 = (param_1 >> 7) & 0xff0000;
  if (temp_v3 == 0 || (temp_v4 & 0xff0000) == 0) goto LAB_00152790;
  temp_v5 = (param_1 << 8) | 0x80000000;
  temp_v2 = (param_2 << 8) | 0x80000000;
  temp_v4 = temp_v4 - 0x10000;
  for (; (int)temp_v4 < (int)temp_v3; temp_v3 = temp_v3 - 0x10000) {
    temp_v4 = temp_v4 & 0xfffffffd;
    temp_v1 = temp_v5;
    if (0x7fffffff < temp_v5) {
      temp_v1 = temp_v5 - temp_v2;
      temp_v4 = temp_v4 | 2;
      if ((int)temp_v5 < (int)temp_v2) {
        temp_v1 = -temp_v1;
        temp_v4 = temp_v4 ^ 1;
      }
    }
    temp_v5 = temp_v1 << 1;
  }
  if ((((int)temp_v4 >> 0x10 <= (int)temp_v3 >> 0x10) && (temp_v2 <= temp_v5)) &&
     ((temp_v5 != temp_v2 || ((temp_v4 & 2) != 0)))) {
    temp_v5 = -(temp_v5 + param_2 * -0x200);
    temp_v4 = temp_v4 ^ 1;
  }
  temp_v2 = temp_v5 << 1;
  temp_v1 = temp_v3;
  if (!romwright_subpiece_4_1_0(temp_v5 >> 0x1f,0)) {
    if ((int)temp_v2 >= 0) {
      if (temp_v2 == 0) {
        return (temp_v4 & 4) << 0x1d;
      }
      temp_v6 = LZCOUNT(temp_v2);
      temp_v2 = temp_v2 << (temp_v6 + 1);
      temp_v1 = temp_v3 + (temp_v6 + 1) * -0x10000;
    }
    else {
      temp_v1 = temp_v3 - 0x10000;
      temp_v2 = temp_v5 << 2;
      if (temp_v1 != 0 && (int)temp_v3 >= 0x10000) goto LAB_0015276c;
    }
  }
  else {
LAB_0015276c:
    if (0 < (int)temp_v1) {
      return (temp_v1 << 7) | (temp_v2 >> 9) | (temp_v4 << 0x1f);
    }
  }
  if ((int)temp_v1 < 1) {
    return 0;
  }
  return (temp_v1 << 7) | (temp_v2 >> 9) | (temp_v4 << 0x1f);
}

} /* extern "C" */
