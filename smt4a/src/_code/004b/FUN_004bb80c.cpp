/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bb80c` (_code @ 0x4bb80c, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0046e6b8(int, unsigned int);

extern int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int);
extern unsigned int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(void);
/* Supplied declaration required: FUN_0046e6b8. */


int FUN_004bb80c(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = dataTableGet(2);
  temp_v1 = dataTableGetEntries();
  if ((-1 < (int)param_1) && (temp_v2 = dataTableGetCount(temp_v0), param_1 < temp_v2)) {
    temp_v3 = g_aocSystem;
    FUN_0046e6b8(g_aocSystem,param_1);
    if (temp_v3 == 0) {
      temp_v3 = temp_v1 + param_1 * 0x28;
    }
    return temp_v3;
  }
  return temp_v1;
}

} /* extern "C" */
