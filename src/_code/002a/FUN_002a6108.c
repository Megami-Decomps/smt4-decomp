/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6108` (_code @ 0x2a6108, 0xd4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

extern unsigned char LAB_0015555c; /* 0x15555c */
extern unsigned char DAT_00420d6c; /* 0x420d6c */
extern unsigned char DAT_004210b0; /* 0x4210b0 */
extern unsigned char DAT_00421ca0; /* 0x421ca0 */
extern unsigned char DAT_00421cd4; /* 0x421cd4 */


void FUN_002a6108(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_004210b0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = (unsigned int)&DAT_00421cd4;
  param_1[0xc] = (unsigned int)&DAT_00421ca0;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = (unsigned int)&LAB_0015555c;
  param_1[0x15] = 0;
  *(unsigned char *)(param_1 + 0x16) = 1;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  *(unsigned char *)((int)param_1 + 0x5a) = 0;
  param_1[0x17] = 0;
  *param_1 = (unsigned int)&DAT_00420d6c;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}
