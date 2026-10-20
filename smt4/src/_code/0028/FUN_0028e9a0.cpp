/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028e9a0` (_code @ 0x28e9a0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable08Sub1GetRecord(void);

/* Supplied declaration required: dataTable08Sub1GetRecord. */


unsigned int FUN_0028e9a0(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if ((param_1 - 1U < 0x3c) &&
     (dataTable08Sub1GetRecord(), *(char *)(param_1 + 0x6d) == '\x02' || *(char *)(param_1 + 0x6d) == '\x03')) {
    temp_v0 = 1;
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
