/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00399378` (_code @ 0x399378, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int FUN_0046e800(int, unsigned int);

extern int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_0046e800. */


void FUN_00399378(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_aocSystem;
  FUN_0046e800(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(0x20,1);
    dataTableGetEntries();
    dataTableGetCount(temp_v1);
  }
  return;
}

} /* extern "C" */
