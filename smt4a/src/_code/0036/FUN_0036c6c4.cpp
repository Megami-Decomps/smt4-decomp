/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c6c4` (_code @ 0x36c6c4, 0x3c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


unsigned short FUN_0036c6c4(unsigned int param_1)

{
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = dataTableGet(0xe,1);
  temp_v2 = dataTableGetEntries();
  temp_v3 = dataTableGetCount(temp_v1);
  if (param_1 < temp_v3) {
    temp_v0 = *(unsigned short *)(temp_v2 + param_1 * 4);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
