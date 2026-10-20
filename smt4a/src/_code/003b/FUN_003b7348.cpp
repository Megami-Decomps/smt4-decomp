/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b7348` (_code @ 0x3b7348, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGetCount(unsigned int);
int dataTableGetEntries(void);
int FUN_00471bc8(int, unsigned int);

extern int g_aocSystem; /* 0x570280 */

extern unsigned int dataTableGet(unsigned int, unsigned int);
/* Supplied declaration required: dataTableGetCount. */
/* Supplied declaration required: dataTableGetEntries. */
/* Supplied declaration required: FUN_00471bc8. */


void FUN_003b7348(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = g_aocSystem;
  FUN_00471bc8(g_aocSystem,param_1);
  if (temp_v0 == 0) {
    temp_v1 = dataTableGet(5,9);
    dataTableGetEntries();
    dataTableGetCount(temp_v1);
  }
  return;
}

} /* extern "C" */
