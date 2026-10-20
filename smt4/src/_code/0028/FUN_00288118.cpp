/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288118` (_code @ 0x288118, 0x3c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int FUN_002c0c74(unsigned int);
extern unsigned short *FUN_002c0cc4(void);
extern unsigned int FUN_002c0cec(unsigned int, unsigned int);


unsigned short FUN_00288118(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  unsigned short *puVar3;
  unsigned int temp_v2;
  
  temp_v1 = FUN_002c0cec(1,2);
  puVar3 = (unsigned short *)FUN_002c0cc4();
  temp_v2 = FUN_002c0c74(temp_v1);
  if (param_1 < temp_v2) {
    temp_v0 = puVar3[param_1 * 2];
  }
  else {
    temp_v0 = *puVar3;
  }
  return temp_v0;
}

} /* extern "C" */
