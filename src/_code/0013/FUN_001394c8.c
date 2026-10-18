/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001394c8` (_code @ 0x1394c8, 0xc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


/* WARNING: Removing unreachable block (ram,0x001394dc) */
/* WARNING: Removing unreachable block (ram,0x00139564) */

unsigned int * FUN_001394c8(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  *param_1 = 0x300;
  param_1[1] = 0x2025e;
  param_1[2] = 0;
  temp_v0 = 5;
  param_1[3] = 0x900251;
  puVar1 = param_1 + 3;
  do {
    temp_v0 = temp_v0 - 1;
    puVar1[1] = 0xead0fead;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xead0fead;
  } while (temp_v0 != 0);
  param_1[0xe] = 0;
  param_1[0xf] = 0x1d00200;
  temp_v0 = 0xf;
  puVar1 = param_1 + 0xf;
  do {
    temp_v0 = temp_v0 - 1;
    puVar1[1] = 0xead0fead;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xead0fead;
  } while (temp_v0 != 0);
  param_1[0x2e] = 0;
  param_1[0x2f] = 0x10229;
  param_1[0x30] = 0;
  param_1[0x31] = 0x1d00200;
  temp_v0 = 0xf;
  puVar1 = param_1 + 0x31;
  do {
    temp_v0 = temp_v0 - 1;
    puVar1[1] = 0xead0fead;
    puVar1 = puVar1 + 2;
    *puVar1 = 0xead0fead;
  } while (temp_v0 != 0);
  param_1[0x50] = 0;
  param_1[0x51] = 0x10244;
  return param_1 + 0x52;
}
