/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00100c50` (_code @ 0x100c50, 0x44 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e358c(unsigned int *, int, unsigned int, unsigned int);

/* Supplied declaration required: FUN_002e358c. */


void FUN_00100c50(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  for (; param_3 != 0 || param_4 != 0; param_3 = (param_3 >> 3) | temp_v3) {
    *(unsigned char *)((int)param_1 + temp_v0 + 0x24) = ((unsigned char)param_3 & 7) + 0x30;
    temp_v3 = param_4 << 0x1d;
    temp_v0 = temp_v0 + 1;
    param_4 = param_4 >> 3;
  }
  temp_v2 = 0;
  temp_v1 = 0x100cb8;
  if (((int)(*param_1 << 0x1c) < 0) && ((*param_1 & 0x20) != 0 || temp_v0 != 0)) {
    temp_v2 = 1;
    temp_v1 = 0x100cbc;
    param_1[7] = param_1[7] - 1;
  }
  FUN_002e358c(param_1,temp_v0,temp_v1,temp_v2);
  return;
}

} /* extern "C" */
