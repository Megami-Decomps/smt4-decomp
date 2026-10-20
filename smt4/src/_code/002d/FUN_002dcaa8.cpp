/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dcaa8` (_code @ 0x2dcaa8, 0x58 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable06Sub1GetRecord(void);

/* Supplied declaration required: dataTable06Sub1GetRecord. */


int FUN_002dcaa8(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned short *puVar1;
  unsigned short *puVar2;
  int temp_v0;
  
  puVar1 = (unsigned short *)(unsigned int)*param_1;
  dataTable06Sub1GetRecord();
  puVar2 = (unsigned short *)(unsigned int)*param_2;
  dataTable06Sub1GetRecord();
  temp_v0 = (*(unsigned char *)((int)puVar2 + 3) & 0x1f) - (*(unsigned char *)((int)puVar1 + 3) & 0x1f);
  if ((temp_v0 == 0) && (temp_v0 = (unsigned int)(unsigned char)puVar1[1] - (unsigned int)(unsigned char)puVar2[1], temp_v0 == 0)) {
    temp_v0 = (unsigned int)*puVar1 - (unsigned int)*puVar2;
  }
  return temp_v0;
}

} /* extern "C" */
