/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010bedc` (_code @ 0x10bedc, 0x1c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00464a74; /* 0x464a74 */
extern unsigned int DAT_00464a78; /* 0x464a78 */


unsigned char FUN_0010bedc(unsigned int param_1)

{
  unsigned int temp_v0;
  
  temp_v0 = param_1;
  if (param_1 >= DAT_00464a74) {
    temp_v0 = DAT_00464a78;
  }
  DAT_00464a78 = temp_v0;
  return param_1 < DAT_00464a74;
}

} /* extern "C" */
