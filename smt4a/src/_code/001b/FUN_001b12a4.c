/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b12a4` (_code @ 0x1b12a4, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

extern unsigned char LAB_001b9f9c; /* 0x1b9f9c */
extern unsigned char DAT_0055b574; /* 0x55b574 */
extern unsigned char DAT_0055b884; /* 0x55b884 */
extern unsigned char DAT_0055c4f0; /* 0x55c4f0 */
extern unsigned char DAT_0055c524; /* 0x55c524 */


void FUN_001b12a4(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_0055b884;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = (unsigned int)&DAT_0055c524;
  param_1[0xc] = (unsigned int)&DAT_0055c4f0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = (unsigned int)&LAB_001b9f9c;
  param_1[0x15] = 0;
  *(unsigned char *)(param_1 + 0x16) = 1;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  *(unsigned char *)((int)param_1 + 0x5a) = 0;
  param_1[0x17] = 0;
  *param_1 = (unsigned int)&DAT_0055b574;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}
