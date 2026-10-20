/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030ed04` (_code @ 0x30ed04, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorNewC(void);
int libc_strcpy(void);
int FUN_0030f220(...);

extern int wstrlen(void);
/* Supplied declaration required: asdOperatorNewC. */
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: FUN_0030f220. */


unsigned int *
FUN_0030ed04(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  *param_1 = param_3;
  temp_v0 = FUN_0030f220(param_3,0,param_3,param_4,param_4);
  param_1[1] = temp_v0;
  if (temp_v0 != 0) {
    temp_v0 = wstrlen();
    temp_v0 = temp_v0 + 1;
    asdOperatorNewC();
    libc_strcpy();
    param_1[1] = temp_v0;
  }
  FUN_0030f220(param_3,param_2);
  return param_1;
}

} /* extern "C" */
