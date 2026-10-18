/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b4ddc` (_code @ 0x1b4ddc, 0x98 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_005c1100; /* 0x5c1100 */
extern unsigned int DAT_005c1104; /* 0x5c1104 */
extern unsigned int DAT_005c1108; /* 0x5c1108 */
extern unsigned int DAT_005c110c; /* 0x5c110c */

/* Supplied declaration required: FUN_002e6354. */


void FUN_001b4ddc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  FUN_002e6354(param_1,0x80);
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
  temp_v3 = DAT_005c110c;
  temp_v2 = DAT_005c1108;
  temp_v1 = DAT_005c1104;
  temp_v0 = DAT_005c1100;
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
