/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dcda0` (_code @ 0x2dcda0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable08Sub2GetRecord(void);

/* Supplied declaration required: dataTable08Sub2GetRecord. */


int FUN_002dcda0(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = (unsigned int)*param_1;
  dataTable08Sub2GetRecord();
  temp_v1 = (unsigned int)*param_2;
  dataTable08Sub2GetRecord();
  return (unsigned int)*(unsigned short *)(temp_v0 + 0x98) - (unsigned int)*(unsigned short *)(temp_v1 + 0x98);
}

} /* extern "C" */
