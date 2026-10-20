/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028250c` (_code @ 0x28250c, 0x188 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a438c(void);
int FUN_002a43ae(int);
int FUN_003eb2c8(unsigned int [4]);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

#ifndef ROMWRIGHT_FABS_4_DEFINED
#define ROMWRIGHT_FABS_4_DEFINED
static float romwright_fabs_4(float value)
{
    return value < (float)0 ? -value : value;
}
#endif
extern int ARM_fpclassifyf(float);
/* Supplied declaration required: FUN_002a438c. */
/* Supplied declaration required: FUN_002a43ae. */
/* Supplied declaration required: FUN_003eb2c8. */


void FUN_0028250c(void)

{
/* irregular: irregular input(s): in_s0; 10 native warning(s); review required */
  int temp_v0;
  float in_s0;
  float temp_v1;
  unsigned int temp_v2 [4];
  
  if ((unsigned int)((int)in_s0 * 2) < 0x7e921fb6) {
    if ((unsigned int)((int)in_s0 * 2) < 0x73000000) {
      temp_v2[0] = 0xffffffff;
    }
    else {
      temp_v2[0] = 0;
    }
  }
  else if ((unsigned int)romwright_fabs_4(in_s0) < 0x46490e49) {
    if (((unsigned int)in_s0 & 0x80000000) != 0) {
      temp_v1 = (in_s0 * 0.63661975f - 8388608.0f) + 8388608.0f;
    }
    else {
      temp_v1 = (in_s0 * 0.63661975f + 8388608.0f) - 8388608.0f;
    }
    temp_v2[0] = (int)temp_v1 & 3;
    in_s0 = (((in_s0 - temp_v1 * 1.5703125f) - temp_v1 * 0.0004837513f) - temp_v1 * 7.5495336e-08f) -
            temp_v1 * 2.563344e-12f;
  }
  else {
    FUN_003eb2c8(temp_v2);
  }
  if (-1 < (int)temp_v2[0]) {
    if ((temp_v2[0] & 1) != 0) {
      if ((temp_v2[0] & 2) == 0) {
                    /* WARNING: Treating indirect jump as return */
        return;
      }
    }
    else if ((temp_v2[0] & 2) == 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((unsigned int)((int)in_s0 * 2) < 0xff000000) {
    temp_v0 = ARM_fpclassifyf(in_s0);
    if (temp_v0 == 4) {
      FUN_002a438c();
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((int)in_s0 * 2 == 0xff000000) {
    FUN_002a43ae(1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
