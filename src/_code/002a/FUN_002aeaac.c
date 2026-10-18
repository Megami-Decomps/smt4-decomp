/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002aeaac` (_code @ 0x2aeaac, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00464a70; /* 0x464a70 */
extern unsigned int *DAT_00464a74; /* 0x464a74 */


int FUN_002aeaac(unsigned int *param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)&DAT_00464a70;
  if (DAT_00464a70 != 0) {
    puVar1 = DAT_00464a74;
  }
  if (!(DAT_00464a70 != 0 && param_1 < puVar1)) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = DAT_00464a70 + (int)param_1 * 0x2c;
  }
  return temp_v0;
}
