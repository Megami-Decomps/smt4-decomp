/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c57ac` (_code @ 0x1c57ac, 0xdc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
#ifndef ROMWRIGHT_PIECE_4_4_DEFINED
#define ROMWRIGHT_PIECE_4_4_DEFINED
#define romwright_piece_4_4(upper, lower) ((unsigned long long)(((unsigned long long)(unsigned int)(upper) << 32) | (unsigned int)(lower)))
#endif


unsigned long long FUN_001c57ac(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int unaff_r6;
  int unaff_r11;
  unsigned char temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = param_4;
  if ((int)param_4 < 0) {
    unaff_r6 = (unaff_r6 | (unaff_r6 << 0x10)) >> 0x10;
    if ((int)param_4 >= -0x3f) {
      if ((int)param_4 < -0x1f) {
        unaff_r6 = unaff_r6 | param_3;
        param_4 = param_4 + 0x20;
        param_2 = 0;
        param_3 = param_2;
      }
      temp_v0 = -param_4;
      temp_v1 = 0;
      if (temp_v0 != 0) {
        unaff_r6 = ((unaff_r6 | (unaff_r6 << 0x10)) >> 0x10) |
                   (param_3 << ((param_4 + 0x20) & 0xff));
        param_3 = (param_3 >> (temp_v0 & 0xff)) | (param_2 << ((param_4 + 0x20) & 0xff));
        param_2 = param_2 >> (temp_v0 & 0xff);
        temp_v1 = 0;
      }
    }
    else {
      temp_v0 = unaff_r6 | param_3;
      temp_v1 = 0;
      param_3 = 0;
      unaff_r6 = ((temp_v0 | (temp_v0 << 0x10)) >> 0x10) | param_2;
      param_2 = 0;
      if ((int)param_4 < -0x40) {
        unaff_r6 = (unaff_r6 | (unaff_r6 << 0x10)) >> 0x10;
      }
    }
  }
  temp_v3 = romwright_subpiece_4_1_0(unaff_r6 >> 0x1f,0);
  if ((unaff_r6 & 0x7fffffff) == 0) {
    if (!temp_v3) {
      return romwright_piece_4_4(param_2,temp_v1 | (param_1 & 0x80000000));
    }
    temp_v3 = (unsigned char)((unsigned char)param_3 & 1);
  }
  temp_v2 = unaff_r11 != -1;
  if (unaff_r11 == 0) {
    temp_v2 = romwright_subpiece_4_1_0(((unsigned int)temp_v3 << 0x1f) >> 0x1f,0);
  }
  temp_v2 = temp_v2 && 0xfffffffe < param_3;
  temp_v0 = param_2;
  if (temp_v2) {
    temp_v0 = param_2 + 1;
  }
  temp_v2 = temp_v2 && 0xfffffffe < param_2;
  if (temp_v2) {
    temp_v0 = 0x80000000;
  }
  temp_v1 = temp_v1 + temp_v2;
  param_2 = temp_v0;
  return romwright_piece_4_4(param_2,temp_v1 | (param_1 & 0x80000000));
}

} /* extern "C" */
