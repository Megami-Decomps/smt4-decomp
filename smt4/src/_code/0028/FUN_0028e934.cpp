/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028e934` (_code @ 0x28e934, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned int g_aocSystem; /* 0x433158 */

extern int FUN_002b8fdc(unsigned int, unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
extern unsigned int dataTableGet(unsigned int, unsigned int);


int FUN_0028e934(unsigned int param_1,int param_2)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_002b8fdc(g_aocSystem,param_1);
  if (temp_v0 != 0) {
    temp_v0 = temp_v0 + 2;
  }
  else {
    temp_v1 = dataTableGet(1,0);
    temp_v0 = dataTableGetEntries();
    temp_v2 = dataTableGetCount(temp_v1);
    if ((param_1 < temp_v2) && (temp_v0 = temp_v0 + param_1 * 0x28, param_2 != 0)) {
      temp_v0 = temp_v0 + 0x10;
    }
  }
  return temp_v0;
}

} /* extern "C" */
