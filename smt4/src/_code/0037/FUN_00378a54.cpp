/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00378a54` (_code @ 0x378a54, 0xd8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00421a20; /* 0x421a20 */
extern unsigned char DAT_00421a34; /* 0x421a34 */
extern unsigned char DAT_00421a48; /* 0x421a48 */
extern unsigned char DAT_00421ec4; /* 0x421ec4 */
extern unsigned char DAT_00421ef4; /* 0x421ef4 */


void FUN_00378a54(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_00421a48;
  param_1[1] = 0;
  param_1[2] = (unsigned int)&DAT_00421a34;
  param_1[3] = (unsigned int)param_1;
  param_1[4] = (unsigned int)&DAT_00421a20;
  param_1[5] = (unsigned int)param_1;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = (unsigned int)(param_1 + 0xd);
  param_1[0xe] = (unsigned int)(param_1 + 0xd);
  param_1[0xf] = 0;
  param_1[0x10] = (unsigned int)(param_1 + 0x10);
  param_1[0x12] = 0;
  param_1[0x11] = (unsigned int)(param_1 + 0x10);
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = (unsigned int)(param_1 + 0x15);
  param_1[0x16] = (unsigned int)(param_1 + 0x15);
  param_1[0x17] = 0;
  param_1[0x18] = (unsigned int)(param_1 + 0x18);
  param_1[0x1a] = 0;
  param_1[0x19] = (unsigned int)(param_1 + 0x18);
  param_1[0x1b] = 0;
  param_1[0x1c] = 0;
  param_1[0x1d] = (unsigned int)(param_1 + 0x1d);
  param_1[0x1e] = (unsigned int)(param_1 + 0x1d);
  param_1[0x1f] = 0;
  param_1[0x20] = (unsigned int)(param_1 + 0x20);
  param_1[0x21] = (unsigned int)(param_1 + 0x20);
  param_1[0x2a] = (unsigned int)(param_1 + 0x2c);
  param_1[0x2b] = 0;
  param_1[0x2c] = (unsigned int)&DAT_00421ef4;
  param_1[0x29] = (unsigned int)&DAT_00421ec4;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  return;
}

} /* extern "C" */
