/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00263c34` (_code @ 0x263c34, 0x48 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b8cc8(void);

extern unsigned char DAT_00422590; /* 0x422590 */

/* Supplied declaration required: FUN_002b8cc8. */


unsigned int * FUN_00263c34(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  *param_1 = (unsigned int)&DAT_00422590;
  if (0 < *(short *)(param_1 + 0xc)) {
    do {
      FUN_002b8cc8();
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < *(short *)(param_1 + 0xc));
  }
  *(unsigned short *)(param_1 + 0xc) = 0;
  return param_1;
}

} /* extern "C" */
