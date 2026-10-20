/* NON_MATCHING: romwright 0.5.0 decompilation of `dataTableGet` (_code @ 0x2c0cec, 0x18 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableFileGetTable(unsigned int);

/* Supplied declaration required: dataTableFileGetTable. */


void dataTableGet(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  if (param_1 < 0x43) {
    temp_v0 = *(unsigned int *)(param_1 * 0x10 + 0x493830);
  }
  else {
    temp_v0 = 0;
  }
  dataTableFileGetTable(temp_v0);
  return;
}

} /* extern "C" */
