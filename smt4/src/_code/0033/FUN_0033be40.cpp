/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033be40` (_code @ 0x33be40, 0x50 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int devilGetRecord(void);

extern int FUN_0024ea50(void);
/* Supplied declaration required: devilGetRecord. */


unsigned char FUN_0033be40(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v0 = (unsigned int)*(unsigned short *)(param_1 + 0x46);
  devilGetRecord();
  temp_v2 = 1;
  if (((*(short *)(temp_v0 + 0x2a) != 0) && (temp_v1 = FUN_0024ea50(), temp_v1 == 0)) &&
     (temp_v2 = 0, *(unsigned char *)(param_1 + 0x48) < *(unsigned char *)(temp_v0 + 0x29))) {
    temp_v2 = 2;
  }
  return temp_v2;
}

} /* extern "C" */
