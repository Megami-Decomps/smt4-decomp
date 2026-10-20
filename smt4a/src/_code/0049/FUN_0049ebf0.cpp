/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049ebf0` (_code @ 0x49ebf0, 0x88 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


int FUN_0049ebf0(unsigned short *param_1,unsigned short *param_2)

{
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = dataTableGet(0x46,0);
  temp_v1 = dataTableGetEntries();
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = dataTableGetCount(temp_v0);
    temp_v3 = (unsigned int)*param_1;
    if (((int)temp_v3 < temp_v2) && (temp_v3 != 0)) {
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v3 * 0x44 + 0x2c);
    }
    else {
      temp_v3 = 99;
    }
    temp_v4 = (unsigned int)*param_2;
    if (((int)temp_v4 < temp_v2) && (temp_v4 != 0)) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v4 * 0x44 + 0x2c);
    }
    else {
      temp_v4 = 99;
    }
    temp_v2 = temp_v3 - temp_v4;
  }
  return temp_v2;
}

} /* extern "C" */
