/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030f490` (_code @ 0x30f490, 0x2c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int listIteratorNext4(int *);

extern int wordRefsEqual_00132162(int *, unsigned int);
/* Supplied declaration required: listIteratorNext4. */


void FUN_0030f490(int *param_1,int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  while ((temp_v0 = wordRefsEqual_00132162(param_2,param_3), temp_v0 == 0 && (*param_2 != *param_4))) {
    listIteratorNext4(param_2);
  }
  *param_1 = *param_2;
  return;
}

} /* extern "C" */
