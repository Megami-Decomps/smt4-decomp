/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a3ff8` (_code @ 0x2a3ff8, 0x98 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_00472520; /* 0x472520 */
extern unsigned int DAT_00472524; /* 0x472524 */
extern unsigned int DAT_00472528; /* 0x472528 */
extern unsigned int DAT_0047252c; /* 0x47252c */

/* Supplied declaration required: FUN_002c4b30. */


void FUN_002a3ff8(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002c4b30(param_1,0x80);
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[3] = 0x3f800000;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[7] = 0x3f800000;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x13] = 0x3f800000;
  param_1[0x11] = 0x40a00000;
  param_1[0x14] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x17] = 0;
  param_1[0x17] = 0x3f800000;
  temp_v3 = DAT_0047252c;
  temp_v2 = DAT_00472528;
  temp_v1 = DAT_00472524;
  temp_v0 = DAT_00472520;
  param_1[0x18] = 0x3f800000;
  param_1[0x1d] = 0x3f800000;
  param_1[8] = temp_v0;
  param_1[9] = temp_v1;
  param_1[10] = temp_v2;
  param_1[0xb] = temp_v3;
  param_1[0x19] = 0xffffffff;
  param_1[0x1a] = 0x80;
  return;
}
