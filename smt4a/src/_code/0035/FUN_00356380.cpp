/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00356380` (_code @ 0x356380, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


int FUN_00356380(unsigned int param_1)

{
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = dataTableGet(0x23,5);
  temp_v1 = dataTableGetEntries();
  temp_v2 = dataTableGetCount(temp_v0);
  if (param_1 < temp_v2) {
    temp_v1 = temp_v1 + param_1 * 0x2c;
  }
  else {
    if (param_1 < *(int *)(g_aocSystem + 0x40c) + temp_v2) {
      return *(int *)(g_aocSystem + 0x410) + (param_1 - temp_v2) * 0x2c;
    }
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
