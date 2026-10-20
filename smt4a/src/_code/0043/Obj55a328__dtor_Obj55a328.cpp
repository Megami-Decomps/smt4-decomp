/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj55a328D1Ev` (_code @ 0x432d8c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
extern unsigned char DAT_0055aaec; /* 0x55aaec */

/* Supplied declaration required: asdOperatorDeleteArray. */


unsigned int * _ZN9Obj55a328D1Ev(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = (unsigned int)&DAT_0055aaec;
  puVar2 = (unsigned int *)param_1[0xd];
  for (puVar1 = (unsigned int *)param_1[0xc]; puVar1 != puVar2; puVar1 = puVar1 + 2) {
    (**(romwright_code **)*puVar1)(puVar1);
  }
  asdOperatorDeleteArray(param_1[0xc]);
  return param_1;
}

} /* extern "C" */
