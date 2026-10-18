/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001149ac` (_code @ 0x1149ac, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int *DAT_00594b28; /* 0x594b28 */


unsigned int FUN_001149ac(unsigned int param_1)

{
  unsigned int temp_v0;
  
  if ((DAT_00594b28 != (int *)0x0) && (param_1 <= (unsigned int)DAT_00594b28[2])) {
    temp_v0 = 0;
    while( 1 ) {
      if ((unsigned int)DAT_00594b28[1] <= temp_v0) {
        return 0;
      }
      if (param_1 <= *(unsigned int *)(*DAT_00594b28 + temp_v0 * 0x34 + 8)) break;
      temp_v0 = temp_v0 + 1;
    }
    return *(unsigned int *)(*DAT_00594b28 + temp_v0 * 0x34 + 8);
  }
  return 0;
}
