/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a5dc4` (_code @ 0x2a5dc4, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

extern unsigned char LAB_00155650; /* 0x155650 */
extern unsigned char DAT_00421124; /* 0x421124 */
extern unsigned char DAT_00421468; /* 0x421468 */
extern unsigned char DAT_00422058; /* 0x422058 */
extern unsigned char DAT_0042208c; /* 0x42208c */


void FUN_002a5dc4(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (unsigned int)&DAT_00421468;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[8] = 0;
  param_1[7] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xd] = (unsigned int)&DAT_0042208c;
  param_1[0xc] = (unsigned int)&DAT_00422058;
  param_1[0xf] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0x3f800000;
  param_1[0x11] = 0;
  param_1[0x12] = 0x3f800000;
  param_1[0x14] = 0;
  param_1[0x13] = (unsigned int)&LAB_00155650;
  param_1[0x15] = 0;
  *(unsigned char *)(param_1 + 0x16) = 1;
  *(unsigned char *)((int)param_1 + 0x59) = 0;
  *(unsigned char *)((int)param_1 + 0x5a) = 0;
  param_1[0x17] = 0;
  *param_1 = (unsigned int)&DAT_00421124;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  return;
}
