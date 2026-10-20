/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1ce4` (_code @ 0x2c1ce4, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_aocSystem; /* 0x570280 */

extern int FUN_0017607c(unsigned int, unsigned int);
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);


int FUN_002c1ce4(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0017607c(g_aocSystem,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 2;
  }
  else {
    temp_v1 = dataTableGet(1,0);
    temp_v0 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v1);
    if ((param_1 < temp_v2) && (temp_v0 = temp_v0 + param_1 * 0x30, param_2 != 0)) {
      temp_v0 = temp_v0 + 0x10;
    }
  }
  return temp_v0;
}

} /* extern "C" */
