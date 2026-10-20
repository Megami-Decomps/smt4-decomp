/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00420d08` (_code @ 0x420d08, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6354(unsigned int *, int);

extern unsigned char DAT_00557e44; /* 0x557e44 */

/* Supplied declaration required: FUN_002e6354. */


unsigned int * FUN_00420d08(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *param_1 = (unsigned int)&DAT_00557e44;
  *(unsigned char *)((int)param_1 + 5) = 0xff;
  *(unsigned char *)((int)param_1 + 6) = 1;
  *(unsigned char *)((int)param_1 + 0x13) = 0;
  *(unsigned char *)(param_1 + 5) = 0;
  *(unsigned char *)((int)param_1 + 0x15) = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = 0;
  param_1[0x10] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  *(unsigned char *)(param_1 + 0x17) = 0;
  param_1[0x18] = 0;
  param_1[0x19] = 0;
  temp_v0 = 0;
  do {
    FUN_002e6354(param_1 + temp_v0 * 0x20 + 0x1b,0x80);
    temp_v1 = temp_v0 + 1;
    *(unsigned char *)((int)param_1 + temp_v0 + 0x2ec) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 5);
  param_1[0xbd] = 0;
  param_1[0xc2] = 0;
  *(unsigned char *)(param_1 + 0xc3) = 0;
  param_1[0xbe] = 0;
  return param_1;
}

} /* extern "C" */
