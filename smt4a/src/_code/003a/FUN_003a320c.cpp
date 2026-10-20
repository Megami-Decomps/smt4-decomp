/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a320c` (_code @ 0x3a320c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetCount(void);


int FUN_003a320c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  dataTableGet(0x23,5);
  temp_v0 = dataTableGetCount();
  return temp_v0 + *(int *)(g_aocSystem + 0x40c);
}

} /* extern "C" */
