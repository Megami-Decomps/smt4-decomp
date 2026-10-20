/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c58e8` (_code @ 0x1c58e8, 0x264 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_001c58e8(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char temp_v17;
  unsigned char temp_v18;
  
  param_1 = param_1 ^ param_4;
  if (param_3 == 0) {
    if (unaff_r5 == 0) {
      temp_v10 = unaff_r4 >> 0x10;
      temp_v11 = param_2 >> 0x10;
      temp_v13 = unaff_r4 & ~(temp_v10 << 0x10);
      param_2 = param_2 & ~(temp_v11 << 0x10);
      temp_v2 = temp_v13 * temp_v11;
      temp_v13 = param_2 * temp_v13;
      param_2 = temp_v10 * param_2;
      temp_v1 = temp_v2 * 0x10000;
      temp_v12 = temp_v13 + temp_v1;
      temp_v0 = param_2 * 0x10000;
      temp_v14 = temp_v12 + temp_v0;
      temp_v4 = temp_v10 * temp_v11 + (temp_v2 >> 0x10) + (unsigned int)romwright_carry_4(temp_v13,temp_v1) + (param_2 >> 0x10) +
              (unsigned int)romwright_carry_4(temp_v12,temp_v0);
      if (-1 < temp_v4) {
        return romwright_piece_4_4(temp_v4 * 2 + (unsigned int)romwright_carry_4(temp_v14,temp_v14),param_1) & 0xffffffff80000000;
      }
      return romwright_piece_4_4(temp_v4,param_1) & 0xffffffff80000000;
    }
    temp_v13 = param_2 >> 0x10;
    temp_v12 = unaff_r4 >> 0x10;
    param_2 = param_2 & ~(temp_v13 << 0x10);
    temp_v9 = unaff_r4 & ~(temp_v12 << 0x10);
    temp_v2 = temp_v9 * param_2;
    temp_v9 = temp_v13 * temp_v9;
    temp_v1 = param_2 * temp_v12 * 0x10000;
    temp_v3 = temp_v2 + temp_v1;
    temp_v14 = unaff_r5 >> 0x10;
    temp_v0 = temp_v9 * 0x10000;
    temp_v5 = temp_v3 + temp_v0;
    temp_v15 = unaff_r5 & ~(temp_v14 << 0x10);
    temp_v6 = temp_v15 * param_2;
    temp_v15 = temp_v13 * temp_v15;
    temp_v10 = param_2 * temp_v14 * 0x10000;
    temp_v7 = temp_v6 + temp_v10;
    temp_v11 = temp_v15 * 0x10000;
    temp_v8 = temp_v7 + temp_v11;
    temp_v10 = temp_v13 * temp_v14 + (param_2 * temp_v14 >> 0x10) + (unsigned int)romwright_carry_4(temp_v6,temp_v10) +
             (temp_v15 >> 0x10) + (unsigned int)romwright_carry_4(temp_v7,temp_v11);
    temp_v11 = temp_v10 + temp_v5;
    temp_v4 = temp_v13 * temp_v12 + (param_2 * temp_v12 >> 0x10) + (unsigned int)romwright_carry_4(temp_v2,temp_v1) +
            (temp_v9 >> 0x10) + (unsigned int)romwright_carry_4(temp_v3,temp_v0) + (unsigned int)romwright_carry_4(temp_v10,temp_v5);
    if (-1 < temp_v4) {
      return romwright_piece_4_4(temp_v4 * 2 +
                      (unsigned int)(romwright_carry_4(temp_v11,temp_v11) || romwright_carry_4(temp_v11 * 2,(unsigned int)romwright_carry_4(temp_v8,temp_v8))),
                      param_1) & 0xffffffff80000000;
    }
    return romwright_piece_4_4(temp_v4,param_1) & 0xffffffff80000000;
  }
  if (unaff_r5 == 0) {
    temp_v13 = unaff_r4 >> 0x10;
    temp_v12 = param_2 >> 0x10;
    temp_v6 = unaff_r4 & ~(temp_v13 << 0x10);
    param_2 = param_2 & ~(temp_v12 << 0x10);
    temp_v2 = param_2 * temp_v6;
    param_2 = temp_v13 * param_2;
    temp_v1 = temp_v6 * temp_v12 * 0x10000;
    temp_v3 = temp_v2 + temp_v1;
    temp_v14 = param_3 >> 0x10;
    temp_v0 = param_2 * 0x10000;
    temp_v5 = temp_v3 + temp_v0;
    param_3 = param_3 & ~(temp_v14 << 0x10);
    temp_v7 = param_3 * temp_v6;
    param_3 = temp_v13 * param_3;
    temp_v10 = temp_v6 * temp_v14 * 0x10000;
    temp_v8 = temp_v7 + temp_v10;
    temp_v11 = param_3 * 0x10000;
    temp_v9 = temp_v8 + temp_v11;
    temp_v11 = temp_v13 * temp_v14 + (temp_v6 * temp_v14 >> 0x10) + (unsigned int)romwright_carry_4(temp_v7,temp_v10) +
             (param_3 >> 0x10) + (unsigned int)romwright_carry_4(temp_v8,temp_v11);
    temp_v10 = temp_v11 + temp_v5;
    temp_v4 = temp_v13 * temp_v12 + (temp_v6 * temp_v12 >> 0x10) + (unsigned int)romwright_carry_4(temp_v2,temp_v1) +
            (param_2 >> 0x10) + (unsigned int)romwright_carry_4(temp_v3,temp_v0) + (unsigned int)romwright_carry_4(temp_v11,temp_v5);
    if (-1 < temp_v4) {
      return romwright_piece_4_4(temp_v4 * 2 +
                      (unsigned int)(romwright_carry_4(temp_v10,temp_v10) || romwright_carry_4(temp_v10 * 2,(unsigned int)romwright_carry_4(temp_v9,temp_v9))
                            ),param_1) & 0xffffffff80000000;
    }
    return romwright_piece_4_4(temp_v4,param_1) & 0xffffffff80000000;
  }
  temp_v11 = param_2 >> 0x10;
  temp_v13 = unaff_r4 >> 0x10;
  temp_v7 = param_2 & ~(temp_v11 << 0x10);
  temp_v5 = unaff_r4 & ~(temp_v13 << 0x10);
  temp_v2 = temp_v7 * temp_v13;
  temp_v7 = temp_v5 * temp_v7;
  temp_v5 = temp_v11 * temp_v5;
  temp_v1 = temp_v2 * 0x10000;
  temp_v8 = temp_v7 + temp_v1;
  temp_v12 = param_3 >> 0x10;
  temp_v0 = temp_v5 * 0x10000;
  temp_v9 = temp_v8 + temp_v0;
  temp_v14 = unaff_r5 >> 0x10;
  temp_v15 = param_3 & ~(temp_v12 << 0x10);
  temp_v6 = unaff_r5 & ~(temp_v14 << 0x10);
  temp_v3 = temp_v15 * temp_v14;
  temp_v15 = temp_v6 * temp_v15;
  temp_v6 = temp_v12 * temp_v6;
  temp_v10 = temp_v3 * 0x10000;
  temp_v16 = temp_v15 + temp_v10;
  temp_v14 = temp_v12 * temp_v14 + (temp_v3 >> 0x10) + (unsigned int)romwright_carry_4(temp_v15,temp_v10);
  temp_v4 = 0;
  temp_v10 = temp_v6 * 0x10000;
  temp_v3 = temp_v16 + temp_v10;
  temp_v12 = temp_v14 + (temp_v6 >> 0x10) + (unsigned int)romwright_carry_4(temp_v16,temp_v10);
  temp_v10 = temp_v9 + temp_v12;
  temp_v0 = temp_v11 * temp_v13 + (temp_v2 >> 0x10) + (unsigned int)romwright_carry_4(temp_v7,temp_v1) + (temp_v5 >> 0x10) +
          (unsigned int)romwright_carry_4(temp_v8,temp_v0) + (unsigned int)romwright_carry_4(temp_v9,temp_v12);
  temp_v13 = temp_v10 + temp_v3;
  temp_v11 = temp_v10 + temp_v0 + (unsigned int)romwright_carry_4(temp_v10,temp_v3);
  temp_v18 = param_3 <= param_2;
  param_2 = param_2 - param_3;
  temp_v17 = param_2 == 0;
  temp_v1 = 0;
  if (!temp_v18) {
    temp_v1 = 0xffffffff;
    temp_v4 = unaff_r4 - unaff_r5;
  }
  if (!temp_v17) {
    temp_v18 = unaff_r4 <= unaff_r5;
    temp_v14 = unaff_r5 - unaff_r4;
    temp_v17 = temp_v14 == 0;
  }
  temp_v12 = param_2 >> 0x10;
  if (temp_v17) {
    temp_v1 = 0;
  }
  if (!temp_v18) {
    temp_v4 = temp_v4 - param_2;
  }
  param_2 = param_2 & ~(temp_v12 << 0x10);
  temp_v2 = temp_v14 >> 0x10;
  if (!temp_v18) {
    temp_v1 = ~temp_v1;
  }
  temp_v14 = temp_v14 & ~(temp_v2 << 0x10);
  temp_v9 = param_2 * temp_v2;
  param_2 = temp_v14 * param_2;
  temp_v14 = temp_v12 * temp_v14;
  temp_v5 = temp_v9 * 0x10000;
  temp_v7 = param_2 + temp_v5;
  temp_v6 = temp_v14 * 0x10000;
  temp_v8 = temp_v7 + temp_v6;
  temp_v12 = temp_v12 * temp_v2 + temp_v4 + (temp_v9 >> 0x10) + (unsigned int)romwright_carry_4(param_2,temp_v5) +
           (temp_v14 >> 0x10) + (unsigned int)romwright_carry_4(temp_v7,temp_v6);
  temp_v14 = temp_v11 + temp_v12 + (unsigned int)romwright_carry_4(temp_v13,temp_v8);
  temp_v4 = temp_v0 + (romwright_carry_4(temp_v10,temp_v0) || romwright_carry_4(temp_v10 + temp_v0,(unsigned int)romwright_carry_4(temp_v10,temp_v3))) +
          temp_v1 + (unsigned int)(romwright_carry_4(temp_v11,temp_v12) || romwright_carry_4(temp_v11 + temp_v12,(unsigned int)romwright_carry_4(temp_v13,temp_v8))
                        );
  temp_v1 = (temp_v13 + temp_v8) | ((temp_v3 | (temp_v3 * 4)) >> 2);
  if (-1 < temp_v4) {
    return romwright_piece_4_4(temp_v4 * 2 +
                    (unsigned int)(romwright_carry_4(temp_v14,temp_v14) || romwright_carry_4(temp_v14 * 2,(unsigned int)romwright_carry_4(temp_v1,temp_v1))),
                    param_1) & 0xffffffff80000000;
  }
  return romwright_piece_4_4(temp_v4,param_1) & 0xffffffff80000000;
}

} /* extern "C" */
