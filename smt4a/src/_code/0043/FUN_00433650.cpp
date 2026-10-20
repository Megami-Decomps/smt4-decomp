/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00433650` (_code @ 0x433650, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055a5b0; /* 0x55a5b0 */

/* Supplied declaration required: asdOperatorDeleteArray. */


unsigned int * FUN_00433650(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_0055a5b0;
  puVar2 = (unsigned int *)param_1[0x14];
  for (puVar1 = (unsigned int *)param_1[0x13]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(romwright_code **)*puVar1)(puVar1);
  }
  asdOperatorDeleteArray(param_1[0x13]);
  asdOperatorDeleteArray(param_1[6]);
  asdOperatorDeleteArray(param_1[2]);
  return param_1;
}

} /* extern "C" */
