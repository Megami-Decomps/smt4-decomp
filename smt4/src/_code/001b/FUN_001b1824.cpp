/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1824` (_code @ 0x1b1824, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b63c0(void);

extern unsigned int FUN_00298e20(unsigned short);
/* Supplied declaration required: FUN_002b63c0. */


void FUN_001b1824(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00298e20(*param_1);
  temp_v2 = 0;
  temp_v1 = FUN_00298e20(*param_2);
  if ((temp_v1 & ~temp_v0) != 0) {
    temp_v2 = -1;
  }
  if (((temp_v0 & ~temp_v1) == 0) && (temp_v2 == 0)) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b63c0();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b63c0();
    if ((temp_v0 != 0) && (temp_v1 != 0)) {
      if (*(char *)(temp_v0 + 6) != '\x06') {
        if (*(char *)(temp_v1 + 6) == '\x06') {
          return;
        }
      }
      else if (*(char *)(temp_v1 + 6) != '\x06') {
        return;
      }
      FUN_002b63c0();
      FUN_002b63c0();
    }
  }
  return;
}

} /* extern "C" */
