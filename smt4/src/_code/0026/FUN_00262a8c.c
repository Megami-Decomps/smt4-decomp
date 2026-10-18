/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00262a8c` (_code @ 0x262a8c, 0x218 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
} param_1_stack;

extern int DAT_00446ff8; /* 0x446ff8 */
extern int DAT_0044700c; /* 0x44700c */

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
/* Supplied declaration required: FUN_0026e80c. */
/* Supplied declaration required: FUN_0026ea5c. */


void FUN_00262a8c(unsigned short param_1)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s10, in_s11, in_s12, in_s13, in_s14, in_s2, in_s3, in_s4, in_s5, in_s6, in_s7, in_s8, in_s9; 17 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float in_s1;
  float in_s2;
  float in_s3;
  float in_s4;
  float in_s5;
  float in_s6;
  float in_s7;
  float in_s8;
  float in_s9;
  float in_s10;
  float in_s11;
  float in_s12;
  float in_s13;
  float in_s14;
  unsigned char temp_v1 [60];
  
  temp_v0 = DAT_0044700c + DAT_00446ff8 * 0xa8;
  *(float *)(temp_v0 + 0xc) = in_s12;
  *(float *)(temp_v0 + 0x10) = in_s13;
  *(float *)(temp_v0 + 0x14) = in_s14;
  *(float *)(temp_v0 + 0x18) = in_s12 * in_s0 + in_s13 * in_s1 + in_s14 * in_s2;
  *(float *)(temp_v0 + 0x5c) = in_s0;
  *(float *)(temp_v0 + 0x60) = in_s1;
  *(float *)(temp_v0 + 100) = in_s2;
  *(float *)(temp_v0 + 0x68) = in_s3;
  *(float *)(temp_v0 + 0x6c) = in_s4;
  *(float *)(temp_v0 + 0x70) = in_s5;
  *(float *)(temp_v0 + 0x74) = in_s6;
  *(float *)(temp_v0 + 0x78) = in_s7;
  *(float *)(temp_v0 + 0x7c) = in_s8;
  *(float *)(temp_v0 + 0x80) = in_s9;
  *(float *)(temp_v0 + 0x84) = in_s10;
  *(float *)(temp_v0 + 0x88) = in_s11;
  *(float *)(temp_v0 + 0x94) = (in_s2 + in_s5 + in_s8 + in_s11) * 0.25f;
  *(float *)(temp_v0 + 0x8c) = (in_s0 + in_s3 + in_s6 + in_s9) * 0.25f;
  *(float *)(temp_v0 + 0x90) = (in_s1 + in_s4 + in_s7 + in_s10) * 0.25f;
  *(unsigned char *)(temp_v0 + 5) = 4;
  *(unsigned short *)(temp_v0 + 6) = param_1;
  *(unsigned char *)(temp_v0 + 8) = 1;
  *(unsigned char *)(temp_v0 + 9) = 0;
  if ((int)romwright_fabs_4(in_s13) < 0x3f666666) {
    if (romwright_fabs_4(in_s14) <= romwright_fabs_4(*(float *)(temp_v0 + 0xc))) {
      *(unsigned char *)(temp_v0 + 4) = 0;
    }
    else {
      *(unsigned char *)(temp_v0 + 4) = 2;
    }
    FUN_0026e80c((int)*(char *)(temp_v0 + 4),temp_v1);
    FUN_0026ea5c((int)*(char *)(temp_v0 + 4),0,temp_v0 + 0x1c,temp_v0 + 0x4c);
    FUN_0026ea5c((int)*(char *)(temp_v0 + 4),1,temp_v0 + 0x28,temp_v0 + 0x50);
    FUN_0026ea5c((int)*(char *)(temp_v0 + 4),2,temp_v0 + 0x34,temp_v0 + 0x54);
    FUN_0026ea5c((int)*(char *)(temp_v0 + 4),2,temp_v0 + 0x40,temp_v0 + 0x58);
    DAT_00446ff8 = DAT_00446ff8 + 1;
  }
  return;
}
