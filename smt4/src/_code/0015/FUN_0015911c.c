/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015911c` (_code @ 0x15911c, 0x2c8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


/* WARNING: Restarted to delay deadcode elimination for space: stack */

unsigned long long FUN_0015911c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  unsigned int unaff_r4;
  unsigned int unaff_r5;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned char temp_v23;
  unsigned char temp_v24;
  unsigned char temp_v25;
  unsigned char temp_v26;
  unsigned char temp_v27;
  
  temp_v9 = unaff_r4 >> 0x10;
  temp_v8 = unaff_r5 >> 0x10;
  temp_v11 = (unsigned int)*(unsigned char *)((unaff_r4 >> 0x18) + 0x159364);
  temp_v22 = unaff_r5 & ~(temp_v8 << 0x10);
  temp_v18 = unaff_r4 & ~(temp_v9 << 0x10);
  temp_v0 = ((unsigned int)((unsigned char)param_2 & 1) << 0x1f) | (param_3 >> 1);
  if ((unsigned char)((unsigned char)param_3 & 1)) {
    temp_v2 = 0x80000000;
  }
  else {
    temp_v2 = 0;
  }
  temp_v12 = ((0x800000 - (temp_v9 * temp_v11 + temp_v11)) * temp_v11 >> 0x13) + 2;
  temp_v19 = 0x20000000 - ((unaff_r4 >> 0xd) * temp_v12 + temp_v12);
  temp_v11 = temp_v19 >> 0x10;
  temp_v21 = (temp_v11 * temp_v12 + ((temp_v19 & ~(temp_v11 << 0x10)) * temp_v12 >> 0x10)) >> 6;
  temp_v11 = temp_v21 * (param_2 >> 0x10) >> 0x10;
  temp_v3 = temp_v0 - temp_v11 * temp_v8;
  temp_v19 = temp_v11 * temp_v22;
  temp_v23 = temp_v19 * 0x10000 <= temp_v2;
  temp_v2 = temp_v2 + temp_v19 * -0x10000;
  temp_v19 = temp_v19 >> 0x10;
  temp_v1 = temp_v3 - temp_v19 < (unsigned int)temp_v23;
  temp_v24 = temp_v19 < temp_v3 || temp_v1;
  temp_v4 = temp_v3 - (temp_v19 + !temp_v23);
  temp_v13 = temp_v11 * temp_v18;
  if (temp_v19 < temp_v3 || temp_v1) {
    temp_v24 = temp_v13 * 0x10000 <= temp_v4;
  }
  temp_v4 = temp_v4 + temp_v13 * -0x10000;
  temp_v3 = ((param_2 >> 1) - (temp_v9 * temp_v11 + (unsigned int)(temp_v0 < temp_v11 * temp_v8))) -
          ((temp_v13 >> 0x10) + (unsigned int)!temp_v24);
  temp_v0 = temp_v21 * (temp_v3 >> 2) >> 0x10;
  temp_v19 = temp_v0 * temp_v8;
  temp_v23 = temp_v19 * 0x80000 <= temp_v2;
  temp_v2 = temp_v2 + temp_v19 * -0x80000;
  temp_v19 = temp_v19 >> 0xd;
  temp_v1 = temp_v4 - temp_v19 < (unsigned int)temp_v23;
  temp_v24 = temp_v19 < temp_v4 || temp_v1;
  temp_v13 = temp_v4 - (temp_v19 + !temp_v23);
  temp_v14 = temp_v9 * temp_v0;
  if (temp_v19 < temp_v4 || temp_v1) {
    temp_v24 = temp_v14 * 0x80000 <= temp_v13;
  }
  temp_v13 = temp_v13 + temp_v14 * -0x80000;
  temp_v19 = temp_v0 * temp_v22;
  temp_v25 = temp_v19 * 8 <= temp_v2;
  temp_v4 = temp_v19 >> 0x1d;
  temp_v1 = temp_v13 - temp_v4 < (unsigned int)temp_v25;
  temp_v23 = temp_v4 < temp_v13 || temp_v1;
  temp_v5 = temp_v13 - (temp_v4 + !temp_v25);
  temp_v15 = temp_v0 * temp_v18;
  if (temp_v4 < temp_v13 || temp_v1) {
    temp_v23 = temp_v15 * 8 <= temp_v5;
  }
  temp_v5 = temp_v5 + temp_v15 * -8;
  temp_v4 = (((temp_v3 - ((temp_v14 >> 0xd) + (unsigned int)!temp_v24)) - ((temp_v15 >> 0x1d) + (unsigned int)!temp_v23)) *
          0x4000000) | (temp_v5 >> 6);
  temp_v13 = (temp_v5 * 0x4000000) | ((temp_v2 + temp_v19 * -8) >> 6);
  temp_v20 = temp_v21 * (temp_v4 >> 0xf);
  temp_v19 = temp_v19 * -0x20000000;
  temp_v2 = temp_v20 >> 0x10;
  temp_v14 = temp_v13 - temp_v2 * temp_v8;
  temp_v3 = temp_v2 * temp_v22;
  temp_v23 = temp_v3 * 0x10000 <= temp_v19;
  temp_v19 = temp_v19 + temp_v3 * -0x10000;
  temp_v3 = temp_v3 >> 0x10;
  temp_v1 = temp_v14 - temp_v3 < (unsigned int)temp_v23;
  temp_v24 = temp_v3 < temp_v14 || temp_v1;
  temp_v5 = temp_v14 - (temp_v3 + !temp_v23);
  temp_v15 = temp_v2 * temp_v18;
  if (temp_v3 < temp_v14 || temp_v1) {
    temp_v24 = temp_v15 * 0x10000 <= temp_v5;
  }
  temp_v5 = temp_v5 + temp_v15 * -0x10000;
  temp_v13 = (temp_v4 - (temp_v9 * temp_v2 + (unsigned int)(temp_v13 < temp_v2 * temp_v8))) -
           ((temp_v15 >> 0x10) + (unsigned int)!temp_v24);
  temp_v3 = temp_v21 * (temp_v13 >> 2) >> 0x10;
  temp_v4 = temp_v3 * temp_v8;
  temp_v23 = temp_v4 * 0x80000 <= temp_v19;
  temp_v19 = temp_v19 + temp_v4 * -0x80000;
  temp_v4 = temp_v4 >> 0xd;
  temp_v1 = temp_v5 - temp_v4 < (unsigned int)temp_v23;
  temp_v24 = temp_v4 < temp_v5 || temp_v1;
  temp_v14 = temp_v5 - (temp_v4 + !temp_v23);
  temp_v15 = temp_v9 * temp_v3;
  if (temp_v4 < temp_v5 || temp_v1) {
    temp_v24 = temp_v15 * 0x80000 <= temp_v14;
  }
  temp_v14 = temp_v14 + temp_v15 * -0x80000;
  temp_v4 = temp_v3 * temp_v22;
  temp_v25 = temp_v4 * 8 <= temp_v19;
  temp_v5 = temp_v4 >> 0x1d;
  temp_v1 = temp_v14 - temp_v5 < (unsigned int)temp_v25;
  temp_v23 = temp_v5 < temp_v14 || temp_v1;
  temp_v6 = temp_v14 - (temp_v5 + !temp_v25);
  temp_v16 = temp_v3 * temp_v18;
  if (temp_v5 < temp_v14 || temp_v1) {
    temp_v23 = temp_v16 * 8 <= temp_v6;
  }
  temp_v6 = temp_v6 + temp_v16 * -8;
  temp_v15 = (((temp_v13 - ((temp_v15 >> 0xd) + (unsigned int)!temp_v24)) - ((temp_v16 >> 0x1d) + (unsigned int)!temp_v23)) *
           0x4000000) | (temp_v6 >> 6);
  temp_v10 = temp_v2 * 0x400000 + temp_v3 * 0x200;
  temp_v21 = temp_v21 * (temp_v15 >> 0xf);
  temp_v6 = (temp_v6 * 0x4000000) | ((temp_v19 + temp_v4 * -8) >> 6);
  temp_v4 = temp_v4 * -0x20000000;
  temp_v13 = temp_v21 >> 0x10;
  temp_v19 = temp_v13 << 0x1c;
  temp_v16 = temp_v6 - temp_v13 * temp_v8;
  temp_v5 = temp_v13 * temp_v22;
  temp_v23 = temp_v5 * 0x10000 <= temp_v4;
  temp_v14 = temp_v5 >> 0x10;
  temp_v1 = temp_v16 - temp_v14 < (unsigned int)temp_v23;
  temp_v24 = temp_v14 < temp_v16 || temp_v1;
  temp_v7 = temp_v16 - (temp_v14 + !temp_v23);
  temp_v17 = temp_v13 * temp_v18;
  if (temp_v14 < temp_v16 || temp_v1) {
    temp_v24 = temp_v17 * 0x10000 <= temp_v7;
  }
  temp_v7 = temp_v7 + temp_v17 * -0x10000;
  temp_v21 = temp_v21 >> 0x14;
  temp_v16 = temp_v10 + temp_v21;
  temp_v14 = (((temp_v15 - (temp_v9 * temp_v13 + (unsigned int)(temp_v6 < temp_v13 * temp_v8))) -
            ((temp_v17 >> 0x10) + (unsigned int)!temp_v24)) * 0x4000) | (temp_v7 >> 0x12);
  temp_v13 = (temp_v7 * 0x4000) | ((temp_v4 + temp_v5 * -0x10000) >> 0x12);
  temp_v4 = temp_v5 * -0x40000000;
  temp_v18 = temp_v18 | (temp_v9 << 0x10);
  temp_v22 = temp_v22 | (temp_v8 << 0x10);
  temp_v1 = temp_v14 - temp_v18 < (unsigned int)(temp_v22 <= temp_v13);
  temp_v9 = temp_v14;
  if (temp_v18 < temp_v14 || temp_v1) {
    temp_v9 = temp_v14 - (temp_v18 + (temp_v22 > temp_v13));
    temp_v13 = temp_v13 - temp_v22;
  }
  temp_v5 = temp_v5 * -0x80000000;
  temp_v23 = romwright_carry_4(temp_v13,temp_v13) || romwright_carry_4(temp_v13 * 2,(unsigned int)romwright_carry_4(temp_v4,temp_v4));
  temp_v8 = temp_v13 * 2 + (unsigned int)romwright_carry_4(temp_v4,temp_v4);
  temp_v24 = romwright_carry_4(temp_v9 * 2,(unsigned int)temp_v23);
  temp_v25 = romwright_carry_4(temp_v9,temp_v9) || temp_v24;
  temp_v4 = temp_v9 * 2 + (unsigned int)temp_v23;
  temp_v23 = temp_v25 < (temp_v18 < temp_v4 || temp_v4 - temp_v18 < (unsigned int)(temp_v22 <= temp_v8));
  if ((romwright_carry_4(temp_v9,temp_v9) || temp_v24) || temp_v23) {
    temp_v4 = temp_v4 - (temp_v18 + (temp_v22 > temp_v8));
    temp_v8 = temp_v8 - temp_v22;
  }
  temp_v26 = romwright_carry_4(temp_v8,temp_v8) || romwright_carry_4(temp_v8 * 2,(unsigned int)romwright_carry_4(temp_v5,temp_v5));
  temp_v9 = temp_v8 * 2 + (unsigned int)romwright_carry_4(temp_v5,temp_v5);
  temp_v24 = romwright_carry_4(temp_v4 * 2,(unsigned int)temp_v26);
  temp_v27 = romwright_carry_4(temp_v4,temp_v4) || temp_v24;
  temp_v8 = temp_v4 * 2 + (unsigned int)temp_v26;
  temp_v26 = temp_v27 < (temp_v18 < temp_v8 || temp_v8 - temp_v18 < (unsigned int)(temp_v22 <= temp_v9));
  if ((romwright_carry_4(temp_v4,temp_v4) || temp_v24) || temp_v26) {
    temp_v8 = temp_v8 - (temp_v18 + (temp_v22 > temp_v9));
    temp_v9 = temp_v9 - temp_v22;
  }
  if (temp_v8 != 0 || temp_v9 != 0) {
    temp_v19 = temp_v19 | 1;
  }
  temp_v9 = (((unsigned int)(temp_v18 < temp_v14 || temp_v1) * 2 + (unsigned int)(temp_v25 || temp_v23)) * 2 +
           (unsigned int)(temp_v27 || temp_v26)) * 0x10000000;
  temp_v8 = temp_v16 + romwright_carry_4(temp_v19,temp_v9);
  temp_v12 = temp_v11 * 0x10000 + temp_v0 * 8 + (temp_v20 >> 0x1a) +
           (unsigned int)romwright_carry_4(temp_v2 * 0x400000,temp_v3 * 0x200) + (unsigned int)romwright_carry_4(temp_v10,temp_v21) +
           (unsigned int)romwright_carry_4(temp_v16,(unsigned int)romwright_carry_4(temp_v19,temp_v9));
  if (-1 < temp_v12) {
    return romwright_piece_4_4(temp_v12 * 2 +
                    (unsigned int)(romwright_carry_4(temp_v8,temp_v8) ||
                          romwright_carry_4(temp_v8 * 2,(unsigned int)romwright_carry_4(temp_v19 + temp_v9,temp_v19 + temp_v9))),
                    param_1 ^ param_4) & 0xffffffff80000000;
  }
  return romwright_piece_4_4(temp_v12,param_1 ^ param_4) & 0xffffffff80000000;
}
