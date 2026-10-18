/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012be48` (_code @ 0x12be48, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
} param_2_stack;

extern unsigned char DAT_00420e3c; /* 0x420e3c */


void FUN_0012be48(unsigned int *param_1,unsigned int param_2)

{
  param_1[1] = param_2;
  *param_1 = (unsigned int)&DAT_00420e3c;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[7] = 0;
  param_1[6] = 0x804f02b0;
  param_1[5] = 0x7fff0000;
  param_1[0xc] = 0x804f0280;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0x7fff0000;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0x10244;
  return;
}
