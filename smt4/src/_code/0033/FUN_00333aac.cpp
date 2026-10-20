/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00333aac` (_code @ 0x333aac, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable1bOr1cGetRecord(void);

/* Supplied declaration required: dataTable1bOr1cGetRecord. */


void FUN_00333aac(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if (param_1 >= 0x15e) {
    dataTable1bOr1cGetRecord();
  }
  return;
}

} /* extern "C" */
