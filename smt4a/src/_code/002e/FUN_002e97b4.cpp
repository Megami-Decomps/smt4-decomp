/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e97b4` (_code @ 0x2e97b4, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int inet_ntop(int, int, unsigned char [20], int);
int FUN_002eed44(unsigned char [20], unsigned int, unsigned int);

/* Supplied declaration required: inet_ntop. */
/* Supplied declaration required: FUN_002eed44. */


unsigned char FUN_002e97b4(int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [20];
  
  if (param_3 >= 0x20) {
    inet_ntop(2,param_1 + 8,temp_v0,0x14);
    FUN_002eed44(temp_v0,param_2,param_3);
  }
  return param_3 >= 0x20;
}

} /* extern "C" */
