/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031b7dc` (_code @ 0x31b7dc, 0x34 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0025bed8(int, int, int);
int dataTableGet(int, int);

extern int g_aocSystem; /* 0x433158 */

/* Supplied declaration required: FUN_0025bed8. */
extern int dataTableGetCount(void);
/* Supplied declaration required: dataTableGet. */


int FUN_0031b7dc(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  dataTableGet(0x2a,1);
  temp_v0 = dataTableGetCount();
  temp_v1 = g_aocSystem;
  FUN_0025bed8(g_aocSystem,0x24,1);
  return temp_v1 + temp_v0;
}

} /* extern "C" */
