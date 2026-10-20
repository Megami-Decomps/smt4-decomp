/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295f28` (_code @ 0x295f28, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

extern int dataTableGetEntries(void);
/* Supplied declaration required: dataTableGet. */


unsigned int FUN_00295f28(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  dataTableGet(9,1);
  temp_v0 = dataTableGetEntries();
  if (param_1 < 99) {
    temp_v1 = *(unsigned int *)((temp_v0 + param_1 * 4) - 4);
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
