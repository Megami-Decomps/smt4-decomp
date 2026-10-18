/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b9cf8` (_code @ 0x2b9cf8, 0x6dc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_function (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_movefromRt (CALLOTHER). */
/* Unsupported intrinsic, declaration required: coprocessor_moveto (CALLOTHER). */
/* Supplied declaration required: FUN_002a464e. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x002ba1a8) overlaps instruction at (ram,0x002ba1a6)
    */

void FUN_002b9cf8(void)

{
/* irregular: 7 goto(s); irregular input(s): in_cr0, in_cr1, in_cr2, in_cr4, in_cr5, in_cr8, in_fpscr, in_s0, in_s1; 17 native warning(s); review required */
  float temp_v0;
  float temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  unsigned char temp_v5;
  unsigned int in_fpscr;
  unsigned int in_cr0;
  unsigned int in_cr1;
  unsigned int in_cr2;
  unsigned int in_cr4;
  unsigned int in_cr5;
  unsigned int in_cr8;
  float in_s0;
  float in_s1;
  float temp_v6;
  float temp_v7;
  int temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v2 = 0;
  temp_v3 = (int)in_s1 * 2 + 0x2000000;
  temp_v7 = in_s1;
  if ((int)in_s0 - 0x800000U >= 0x7f000000) {
    if (temp_v3 < 0x40000000) goto LAB_002b9df0;
LAB_002b9d48:
    if ((int)in_s0 + 0x7f800000U >= 0x7f000000) {
      temp_v5 = romwright_fabs_4(in_s0) == 0.0f;
      temp_v4 = 1;
      if (!temp_v5) {
        temp_v4 = (unsigned int)((int)in_s0 * 2) < 0x1000001;
        temp_v5 = (int)in_s0 * 2 == 0x1000000;
      }
      if (!temp_v4 || temp_v5) {
        if ((int)in_s0 - 0x800000U < 0x7f000000) goto LAB_002ba028;
        goto LAB_002b9e44;
      }
      temp_v2 = 0xffffffe5;
      in_s0 = in_s0 * 1.3421773e+08f;
      if (((unsigned int)in_s0 & 0x80000000) == 0) goto LAB_002ba028;
    }
    in_s0 = romwright_fabs_4(in_s0);
    temp_v3 = (unsigned int)romwright_fabs_4(in_s1) >> 0x17;
    if ((temp_v3 < 0x7f) ||
       ((temp_v3 < 0x97 && ((((1 << ((0x96 - temp_v3) & 0xff)) - 1U) & (unsigned int)in_s1) != 0)))) {
      FUN_002a464e(1,0xff000000,temp_v2);
      return;
    }
LAB_002ba028:
    temp_v10 = 0.5f;
    if ((int)in_s0 + 0xc0801000U < 0x2001) {
      temp_v6 = in_s0 - 1.0f;
      temp_v9 = temp_v6 * -0.0028168457f +
               -(temp_v6 * temp_v6 * (0.5f - temp_v6 * (0.33333334f - temp_v6 * 0.25f))) * 23.08312f;
      temp_v0 = (float)(((int)(temp_v6 * 23.085938f + temp_v9) + 0x800U) & 0xfffff000);
      temp_v1 = (float)(((int)temp_v7 + 0x800U) & 0xfffff000);
      temp_v6 = temp_v0 * (temp_v7 - temp_v1) +
              ((temp_v6 * 23.085938f - temp_v0) + temp_v9) * (temp_v1 + (temp_v7 - temp_v1));
      temp_v7 = (float)(((int)(temp_v0 * temp_v1 + temp_v6) + 0x800U) & 0xfffff000);
      temp_v7 = temp_v7 + (temp_v0 * temp_v1 - temp_v7) + temp_v6;
      temp_v3 = (in_fpscr & 0xfffffff) | ((unsigned int)(0.0f <= temp_v7) << 0x1d);
      if (!romwright_subpiece_4_1_0(temp_v3 >> 0x1d,0)) {
        temp_v10 = -0.5f;
      }
      temp_v8 = (int)(temp_v10 + temp_v7);
      VectorSignedToFloat(temp_v8 >> 4,(unsigned char)(temp_v3 >> 0x16) & 3);
      VectorSignedToFloat(temp_v8,(unsigned char)(temp_v3 >> 0x16) & 3);
      temp_v3 = 0x417b6c;
    }
    else {
      VectorSignedToFloat((((int)in_s0 + 0x40000U) >> 0x13) & 0xf,(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v3 = 0x15d938;
    }
    coprocessor_function(0,7,0,in_cr0,in_cr2,in_cr0);
    coprocessor_movefromRt(10,5,0,in_cr4,in_cr0);
    coprocessor_function(10,0xf,5,in_cr8,in_cr1,in_cr1);
    coprocessor_function(0,7,1,in_cr0,in_cr0,in_cr5);
    coprocessor_moveto(10,1,0,temp_v3 >> 10,in_cr0,in_cr0);
    coprocessor_movefromRt(0xb,0,1,in_cr0,in_cr4);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (temp_v3 >= 0x40000000) goto LAB_002ba028;
LAB_002b9df0:
  temp_v3 = (int)in_s1 * 2 + 0x2000000;
  if (temp_v3 >= 0x2000000) {
    in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(in_s1 == 0.0f) << 0x1e);
    if (romwright_subpiece_4_1_0(in_fpscr >> 0x1e,0)) {
      temp_v5 = romwright_fabs_4(in_s0) == 0.0f;
      temp_v4 = 1;
      if (!temp_v5) {
        temp_v4 = (unsigned int)((int)in_s0 * 2) < 0xff000001;
        temp_v5 = (int)in_s0 * 2 == 0xff000000;
      }
      if (temp_v4 && !temp_v5) {
        return;
      }
    }
    else {
      in_s1 = (float)(((unsigned int)in_s1 & 0x80000000) | 0x1f800000);
      temp_v7 = in_s1;
    }
    goto LAB_002b9d48;
  }
  if (temp_v3 < 0x1000000) {
    temp_v7 = (float)((int)in_s1 - 0x800000);
    goto LAB_002b9d48;
  }
LAB_002b9e44:
  if (((int)romwright_fabs_4(in_s0) + 0x807fffffU < 0x3fffff) || ((int)romwright_fabs_4(in_s1) + 0x807fffffU < 0x3fffff)) {
    return;
  }
  if (in_s0 == 1.0f) {
    return;
  }
  if (romwright_fabs_4(in_s1) == 0.0f) {
    return;
  }
  if ((unsigned int)romwright_fabs_4(in_s0) >= 0x7f800001) {
    return;
  }
  if ((unsigned int)romwright_fabs_4(in_s1) >= 0x7f800001) {
    return;
  }
  if (in_s0 == INFINITY) {
    if (((unsigned int)in_s1 & 0x80000000) != 0) {
      return;
    }
    return;
  }
  temp_v3 = (unsigned int)romwright_fabs_4(in_s1) >> 0x17;
  if (temp_v3 >= 0x7f) {
    if (temp_v3 < 0x97) {
      temp_v3 = 1 << ((0x96 - temp_v3) & 0xff);
      if (((temp_v3 - 1) & (unsigned int)in_s1) != 0) {
        temp_v8 = 0;
      }
      else if ((temp_v3 & (unsigned int)in_s1) == 0) {
        temp_v8 = 2;
      }
      else {
        temp_v8 = 1;
      }
    }
    else {
      temp_v8 = 2;
    }
  }
  else {
    temp_v8 = 0;
  }
  if (in_s0 != -INFINITY) {
    if (in_s0 != 0.0f) {
      if (in_s0 != -0.0f) {
        if (in_s0 == -1.0f) {
          return;
        }
        if ((unsigned int)((unsigned int)((int)in_s0 * 2) >= 0x7f000000) != ((int)in_s1 >> 0x1f) + 1U) {
          return;
        }
        return;
      }
      if (in_s1 == INFINITY) {
        return;
      }
      if (in_s1 != -INFINITY) {
        if (((unsigned int)in_s1 & 0x80000000) == 0) {
          if (temp_v8 == 0) {
            return;
          }
          if (temp_v8 != 1) {
            return;
          }
          return;
        }
        if ((temp_v8 != 0) && (temp_v8 == 1)) {
          FUN_002a464e(2);
          return;
        }
      }
    }
    else if (((unsigned int)in_s1 & 0x80000000) == 0) {
      return;
    }
    FUN_002a464e(2);
    return;
  }
  if (((unsigned int)in_s1 & 0x80000000) == 0) {
    if (temp_v8 != 1) {
      return;
    }
    return;
  }
  if (temp_v8 != 1) {
    return;
  }
  return;
}
