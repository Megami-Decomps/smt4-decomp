/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0024a808` (_code @ 0x24a808, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002aa568(int, unsigned int);

extern int DAT_00433278; /* 0x433278 */

/* Supplied declaration required: FUN_002aa568. */


unsigned int FUN_0024a808(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if ((int)temp_v1 < DAT_00433278) {
    do {
      temp_v0 = (temp_v1 & 0xff) * 0x148 + 0x478001;
      FUN_002aa568(temp_v0,param_1);
      if (temp_v0 == 0) {
        return temp_v1 & 0xff;
      }
      temp_v1 = temp_v1 + 1;
    } while ((int)temp_v1 < DAT_00433278);
  }
  return 0xff;
}

} /* extern "C" */
