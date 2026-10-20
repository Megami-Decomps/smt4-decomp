/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050dda4` (_code @ 0x50dda4, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __set_errno(int);
int FUN_001c4360(void);
int FUN_001c4370(unsigned int [4]);

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
/* Supplied declaration required: __set_errno. */
/* Supplied declaration required: FUN_001c4360. */
/* Supplied declaration required: FUN_001c4370. */


void FUN_0050dda4(void)

{
/* irregular: irregular input(s): in_s0; 9 native warning(s); review required */
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
    FUN_001c4370(temp_v2);
  }
  if (-1 < (int)temp_v2[0]) {
    if ((temp_v2[0] & 1) != 0) {
                    /* WARNING: Treating indirect jump as return */
      return;
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((unsigned int)((int)in_s0 * 2) < 0xff000000) {
    temp_v0 = ARM_fpclassifyf(in_s0);
    if (temp_v0 == 4) {
      FUN_001c4360();
    }
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  if ((int)in_s0 * 2 == 0xff000000) {
    __set_errno(1);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
