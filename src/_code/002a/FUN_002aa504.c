/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aa504` (_code @ 0x2aa504, 0x2b0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: LZCOUNT (LZCOUNT). */
#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif
extern unsigned long long FUN_001524e8(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned long long FUN_002aa504(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  long long temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned char temp_v10;
  unsigned char temp_v11;
  unsigned long long temp_v12;
  
  temp_v10 = param_4 == 0;
  temp_v8 = param_4;
  if (temp_v10) {
    temp_v8 = param_3;
  }
  temp_v9 = LZCOUNT(temp_v8);
  temp_v8 = temp_v8 << (temp_v9 + 1);
  temp_v4 = 0;
  if (!temp_v10) {
    temp_v9 = 0x3f - temp_v9;
    temp_v10 = temp_v9 == 0;
    temp_v4 = temp_v9;
  }
  if (temp_v10) {
    temp_v9 = 0x1f - temp_v9;
    temp_v4 = temp_v9;
  }
  if ((int)temp_v4 < 0) {
    temp_v12 = FUN_001524e8(0,0,param_1,param_2,param_1,param_2);
    return temp_v12;
  }
  if (param_2 != 0) {
    temp_v3 = 0x3f - LZCOUNT(param_2);
    temp_v10 = temp_v3 == 0;
  }
  else {
    temp_v3 = LZCOUNT(param_1);
    temp_v10 = 1;
  }
  if (temp_v10) {
    temp_v3 = 0x1f - temp_v3;
  }
  temp_v4 = temp_v3 - temp_v9;
  if (-1 < (int)temp_v4) {
    if (-1 < (int)(4 - temp_v4)) {
      temp_v9 = 0;
      temp_v8 = (param_4 << (temp_v4 & 0xff)) | (param_3 >> ((0x20 - temp_v4) & 0xff));
      param_3 = param_3 << (temp_v4 & 0xff);
      while( 1 ) {
        temp_v11 = param_3 <= param_1;
        temp_v10 = param_2 - temp_v8 < (unsigned int)temp_v11;
        temp_v9 = temp_v9 * 2 + (unsigned int)(temp_v8 < param_2 || temp_v10);
        if (temp_v8 < param_2 || temp_v10) {
          param_1 = param_1 - param_3;
          param_2 = param_2 - (temp_v8 + !temp_v11);
        }
        temp_v10 = temp_v4 == 0;
        temp_v4 = temp_v4 - 1;
        if (temp_v10) break;
        temp_v1 = (unsigned char)temp_v8;
        temp_v8 = temp_v8 >> 1;
        param_3 = ((unsigned int)(temp_v1 & 1) << 0x1f) | (param_3 >> 1);
      }
      return (unsigned long long)temp_v9;
    }
    if ((int)(temp_v9 - 0x20) < 5) {
      temp_v8 = temp_v8 | (param_3 >> ((temp_v9 - 0x20) & 0xff));
    }
    temp_v4 = *(unsigned int *)((temp_v8 >> 0x1c) * 4 + 0x2aa7b4);
    temp_v8 = temp_v9;
    if (temp_v9 >= 0x20) {
      temp_v8 = temp_v9 - 0x20;
    }
    temp_v5 = 0x20 - temp_v8;
    if (temp_v9 < 0x20) {
      temp_v9 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v4);
      temp_v4 = temp_v4 + (int)((unsigned long long)
                            -((((int)((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20) <<
                               (temp_v5 & 0xff)) | (temp_v9 >> (temp_v8 & 0xff))) +
                             (unsigned int)(temp_v9 << (temp_v5 & 0xff) != 0)) * (unsigned long long)temp_v4 >> 0x20);
      temp_v9 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v4);
      temp_v4 = temp_v4 + (int)((unsigned long long)
                            -((((int)((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20) <<
                               (temp_v5 & 0xff)) | (temp_v9 >> (temp_v8 & 0xff))) +
                             (unsigned int)(temp_v9 << (temp_v5 & 0xff) != 0)) * (unsigned long long)temp_v4 >> 0x20);
      if (param_2 != 0) {
        temp_v9 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v4);
        temp_v4 = temp_v4 + (int)((unsigned long long)
                              -((((int)((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20) <<
                                 (temp_v5 & 0xff)) | (temp_v9 >> (temp_v8 & 0xff))) +
                               (unsigned int)(temp_v9 << (temp_v5 & 0xff) != 0)) * (unsigned long long)temp_v4 >> 0x20);
      }
      temp_v0 = (unsigned long long)param_2 * (unsigned long long)temp_v4 +
              ((unsigned long long)param_1 * (unsigned long long)temp_v4 >> 0x20);
      temp_v9 = (unsigned int)((unsigned long long)temp_v0 >> 0x20);
      temp_v2 = ((unsigned int)temp_v0 >> (temp_v8 & 0xff)) | (temp_v9 << (temp_v5 & 0xff));
      temp_v6 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v2);
      temp_v9 = temp_v9 >> (temp_v8 & 0xff);
      temp_v5 = param_1 - temp_v6;
      param_2 = param_2 - (temp_v9 * param_3 + (int)((unsigned long long)param_3 * (unsigned long long)temp_v2 >> 0x20) +
                          (unsigned int)(param_1 < temp_v6));
      if (param_2 == 0 && temp_v5 < param_3) {
        return romwright_piece_4_4(temp_v9,temp_v2);
      }
      temp_v0 = (unsigned long long)param_2 * (unsigned long long)temp_v4 + ((unsigned long long)temp_v5 * (unsigned long long)temp_v4 >> 0x20);
      temp_v6 = (unsigned int)((unsigned long long)temp_v0 >> 0x20);
      temp_v7 = ((unsigned int)temp_v0 >> (temp_v8 & 0xff)) | (temp_v6 << ((0x20 - temp_v8) & 0xff));
      temp_v4 = temp_v2 + temp_v7;
      temp_v3 = temp_v9 + (temp_v6 >> (temp_v8 & 0xff)) + (unsigned int)romwright_carry_4(temp_v2,temp_v7);
      temp_v5 = temp_v5 - param_3 * temp_v7;
      if (temp_v5 < param_3) {
        return romwright_piece_4_4(temp_v3,temp_v4);
      }
      temp_v5 = temp_v5 - param_3;
      temp_v10 = param_3 <= temp_v5;
      if (temp_v10) {
        temp_v5 = temp_v5 - param_3;
      }
      temp_v8 = temp_v4 + 1 + (unsigned int)temp_v10;
      return romwright_piece_4_4(temp_v3 + (unsigned int)(0xfffffffe < temp_v4) + (unsigned int)romwright_carry_4(temp_v4 + 1,(unsigned int)temp_v10) +
                      (unsigned int)romwright_carry_4(temp_v8,(unsigned int)(param_3 <= temp_v5)),temp_v8 + (param_3 <= temp_v5));
    }
    temp_v0 = (unsigned long long)param_4 * (unsigned long long)temp_v4 + ((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20);
    temp_v9 = (unsigned int)temp_v0;
    temp_v4 = temp_v4 + (int)((unsigned long long)
                          -((((int)((unsigned long long)temp_v0 >> 0x20) << (temp_v5 & 0xff)) |
                            (temp_v9 >> (temp_v8 & 0xff))) + (unsigned int)(temp_v9 << (temp_v5 & 0xff) != 0)) *
                          (unsigned long long)temp_v4 >> 0x20);
    temp_v0 = (unsigned long long)param_4 * (unsigned long long)temp_v4 + ((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20);
    temp_v9 = (unsigned int)temp_v0;
    temp_v2 = (temp_v4 + (int)((unsigned long long)
                           -((((int)((unsigned long long)temp_v0 >> 0x20) << (temp_v5 & 0xff)) |
                             (temp_v9 >> (temp_v8 & 0xff))) + (unsigned int)(temp_v9 << (temp_v5 & 0xff) != 0)) *
                           (unsigned long long)temp_v4 >> 0x20)) - 1;
    temp_v4 = (unsigned int)(((unsigned long long)param_2 * (unsigned long long)temp_v2 +
                   ((unsigned long long)param_1 * (unsigned long long)temp_v2 >> 0x20)) >> 0x20) >> (temp_v8 & 0xff);
    temp_v5 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v4);
    temp_v9 = param_1 - temp_v5;
    param_2 = param_2 - (temp_v4 * param_4 + (int)((unsigned long long)param_3 * (unsigned long long)temp_v4 >> 0x20) +
                        (unsigned int)(param_1 < temp_v5));
    temp_v10 = param_4 <= param_2;
    if (param_2 == param_4) {
      temp_v10 = param_3 <= temp_v9;
    }
    if (!temp_v10) {
      return (unsigned long long)temp_v4;
    }
    temp_v8 = (unsigned int)(((unsigned long long)param_2 * (unsigned long long)temp_v2 +
                   ((unsigned long long)temp_v9 * (unsigned long long)temp_v2 >> 0x20)) >> 0x20) >> (temp_v8 & 0xff);
    temp_v5 = (unsigned int)((unsigned long long)param_3 * (unsigned long long)temp_v8);
    param_2 = param_2 - (temp_v8 * param_4 + (int)((unsigned long long)param_3 * (unsigned long long)temp_v8 >> 0x20) +
                        (unsigned int)(temp_v9 < temp_v5));
    temp_v10 = param_4 <= param_2;
    if (param_2 == param_4) {
      temp_v10 = param_3 <= temp_v9 - temp_v5;
    }
    if (!temp_v10) {
      return (unsigned long long)(temp_v4 + temp_v8);
    }
    return (unsigned long long)(temp_v4 + temp_v8 + 1);
  }
  return 0;
}
