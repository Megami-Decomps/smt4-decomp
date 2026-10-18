/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c6a20` (_code @ 0x2c6a20, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_CARRY_4_DEFINED
#define ROMWRIGHT_CARRY_4_DEFINED
#define romwright_carry_4(left, right) ((unsigned char)((unsigned long long)(unsigned int)(left) + (unsigned long long)(unsigned int)(right) > 0xffffffffULL))
#endif
extern int FUN_001008c8(short *, unsigned char, int);
extern unsigned int *FUN_002c6644(void);
extern int FUN_002c66f2(unsigned int, unsigned int, int, int);


unsigned int FUN_002c6a20(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,short *param_5,
                 unsigned int param_6,unsigned int param_7,int param_8)

{
/* irregular: 3 goto(s) */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char *unaff_r4;
  int unaff_r7;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  short asStack_4 [2];
  
  temp_v3 = 0;
  if (param_2 <= param_1 >> 2) {
    if (param_2 <= param_1 >> 5) {
      temp_v1 = param_2;
      if (param_2 <= param_1 >> 8) {
        if (param_1 >> 0xc < param_2) goto LAB_002c5fec;
        if (param_1 >> 0x10 < param_2) goto LAB_002c5fbc;
        temp_v1 = param_2 << 8;
        temp_v3 = -0x1000000;
        if (temp_v1 <= param_1 >> 0x10) {
          temp_v3 = -0x10000;
          temp_v1 = param_2 << 0x10;
        }
        if (param_1 >> 0xc < temp_v1) goto LAB_002c5fec;
        temp_v4 = 0;
        if (temp_v1 == 0) {
          return param_1;
        }
        do {
          if (temp_v4) {
            temp_v1 = temp_v1 >> 8;
          }
LAB_002c5fbc:
          temp_v4 = temp_v1 <= param_1 >> 0xf;
          if (temp_v4) {
            param_1 = param_1 + temp_v1 * -0x8000;
          }
          temp_v5 = temp_v1 <= param_1 >> 0xe;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x4000;
          }
          temp_v6 = temp_v1 <= param_1 >> 0xd;
          if (temp_v6) {
            param_1 = param_1 + temp_v1 * -0x2000;
          }
          temp_v7 = temp_v1 <= param_1 >> 0xc;
          if (temp_v7) {
            param_1 = param_1 + temp_v1 * -0x1000;
          }
          temp_v3 = (((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6) * 2 +
                  (unsigned int)temp_v7;
LAB_002c5fec:
          temp_v4 = temp_v1 <= param_1 >> 0xb;
          if (temp_v4) {
            param_1 = param_1 + temp_v1 * -0x800;
          }
          temp_v5 = temp_v1 <= param_1 >> 10;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x400;
          }
          temp_v6 = temp_v1 <= param_1 >> 9;
          if (temp_v6) {
            param_1 = param_1 + temp_v1 * -0x200;
          }
          temp_v2 = ((temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6;
          temp_v5 = temp_v1 <= param_1 >> 8;
          if (temp_v5) {
            param_1 = param_1 + temp_v1 * -0x100;
          }
          temp_v3 = temp_v2 * 2 + (unsigned int)temp_v5;
          temp_v4 = 1;
        } while (romwright_carry_4(temp_v2,temp_v2) || romwright_carry_4(temp_v2 * 2,(unsigned int)temp_v5));
      }
      temp_v2 = 0;
      if (temp_v1 == 0) {
        unaff_r7 = 1;
        unaff_r4 = (unsigned char *)0x2c61fc;
        param_5 = (short *)0x0;
      }
      if (param_8 == 0) {
        param_8 = FUN_002c66f2(0,5,temp_v3,(param_1 >> 7) - temp_v1);
      }
      while( 1 ) {
        temp_v4 = unaff_r7 == 0;
        unaff_r7 = unaff_r7 - 1;
        if (temp_v4) {
          return 0xfffffffe;
        }
        temp_v0 = *unaff_r4;
        unaff_r4 = unaff_r4 + 1;
        temp_v3 = FUN_001008c8(asStack_4,temp_v0,param_8);
        temp_v2 = temp_v2 + 1;
        if (temp_v3 == -1) break;
        if (temp_v3 != -2) {
          if (param_5 != (short *)0x0) {
            *param_5 = asStack_4[0];
          }
          temp_v1 = 0;
          if (asStack_4[0] != 0) {
            temp_v1 = temp_v2;
          }
          return temp_v1;
        }
      }
      puVar3 = (unsigned int *)FUN_002c6644();
      *puVar3 = 4;
      return 0xffffffff;
    }
    temp_v4 = param_2 <= param_1 >> 4;
    if (temp_v4) {
      param_1 = param_1 + param_2 * -0x10;
    }
    temp_v5 = param_2 <= param_1 >> 3;
    if (temp_v5) {
      param_1 = param_1 + param_2 * -8;
    }
    temp_v6 = param_2 <= param_1 >> 2;
    if (temp_v6) {
      param_1 = param_1 + param_2 * -4;
    }
    temp_v3 = ((unsigned int)temp_v4 * 2 + (unsigned int)temp_v5) * 2 + (unsigned int)temp_v6;
  }
  temp_v4 = param_2 <= param_1 >> 1;
  if (temp_v4) {
    param_1 = param_1 + param_2 * -2;
  }
  return (temp_v3 * 2 + (unsigned int)temp_v4) * 2 + (unsigned int)(param_2 <= param_1);
}
