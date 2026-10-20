/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032ec7c` (_code @ 0x32ec7c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetEntries(void);


unsigned short FUN_0032ec7c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  
  dataTableGet(0x4a,0);
  temp_v1 = dataTableGetEntries();
  temp_v1 = temp_v1 + param_1 * 0x2c;
  temp_v0 = 0;
  if (temp_v1 != 0) {
    temp_v0 = *(unsigned short *)(temp_v1 + 0x20);
  }
  return temp_v0;
}

} /* extern "C" */
