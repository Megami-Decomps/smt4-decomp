/* NON_MATCHING: romwright 0.5.0 decompilation of `nn_applet_CTR_detail_GetDisplayInfo` (_code @ 0x147de0, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern void nn_gxlow_CTR_ImportDisplayCaptureInfo(unsigned int);


void nn_applet_CTR_detail_GetDisplayInfo(unsigned int *param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  if (param_1 == (unsigned int *)0x0) {
    return;
  }
  nn_gxlow_CTR_ImportDisplayCaptureInfo((unsigned int)&temp_v0);
  *param_1 = temp_v0;
  param_1[1] = temp_v1;
  param_1[4] = temp_v4;
  param_1[5] = temp_v5;
  param_1[2] = temp_v2;
  param_1[6] = temp_v6;
  param_1[3] = temp_v3;
  param_1[7] = temp_v7;
  return;
}
