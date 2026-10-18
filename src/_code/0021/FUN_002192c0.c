/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002192c0` (_code @ 0x2192c0, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002990bc(unsigned short);
/* Supplied declaration required: FUN_002b6700. */


void FUN_002192c0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002990bc(*param_1);
  temp_v1 = FUN_002990bc(*param_2);
  if (((temp_v0 & ~temp_v1) == 0) && ((temp_v1 & ~temp_v0) == 0)) {
    temp_v0 = (unsigned int)*param_1;
    FUN_002b6700();
    temp_v1 = (unsigned int)*param_2;
    FUN_002b6700();
    if ((temp_v0 != 0) && (temp_v1 != 0)) {
      if (*(char *)(temp_v0 + 6) != '\x06') {
        if (*(char *)(temp_v1 + 6) == '\x06') {
          return;
        }
      }
      else if (*(char *)(temp_v1 + 6) != '\x06') {
        return;
      }
      FUN_002b6700();
      FUN_002b6700();
    }
  }
  return;
}
