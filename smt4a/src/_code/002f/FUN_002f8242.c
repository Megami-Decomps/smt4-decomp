/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f8242` (_code @ 0x2f8242, 0x1a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


void FUN_002f8242(unsigned int *param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = *param_1;
  *param_1 = (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) |
             (temp_v0 >> 0x18);
  temp_v0 = param_1[1];
  param_1[1] = (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) |
               (temp_v0 >> 0x18);
  temp_v0 = param_1[2];
  param_1[2] = (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) |
               (temp_v0 >> 0x18);
  temp_v0 = param_1[3];
  param_1[3] = (temp_v0 << 0x18) | (((temp_v0 >> 8) & 0xff) << 0x10) | (((temp_v0 >> 0x10) & 0xff) << 8) |
               (temp_v0 >> 0x18);
  return;
}
