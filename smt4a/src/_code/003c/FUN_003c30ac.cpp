/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c30ac` (_code @ 0x3c30ac, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTableGet(int, int);
int FUN_0046c35c(int, int, int);

extern int g_aocSystem; /* 0x570280 */

/* Supplied declaration required: dataTableGet. */
extern int dataTableGetCount(void);
/* Supplied declaration required: FUN_0046c35c. */


int FUN_003c30ac(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  dataTableGet(0x29,2);
  temp_v0 = dataTableGetCount();
  temp_v1 = g_aocSystem;
  FUN_0046c35c(g_aocSystem,0x23,2);
  return temp_v1 + temp_v0;
}

} /* extern "C" */
