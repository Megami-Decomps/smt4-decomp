/* NON_MATCHING: romwright 0.5.0 decompilation of `_ZN9Obj557dccD1Ev` (_code @ 0x41c63c, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdDeallocateArrayStorage(int, unsigned int, int);
int resourceListDestroy(void);
int asdOperatorDelete(int);

/* Supplied declaration required: asdDeallocateArrayStorage. */
/* Supplied declaration required: resourceListDestroy. */
/* Supplied declaration required: asdOperatorDelete. */


unsigned int * _ZN9Obj557dccD1Ev(unsigned int *param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  int *piVar4;
  
  *param_1 = (unsigned int)"옼A올A";
  piVar4 = (int *)param_1[4];
  for (piVar2 = (int *)param_1[3]; piVar2 != piVar4; piVar2 = piVar2 + 1) {
    temp_v1 = *piVar2;
    if (temp_v1 != 0) {
      if (*(int *)(temp_v1 + 0xc) != 0) {
        resourceListDestroy();
        *(unsigned int *)(temp_v1 + 0xc) = 0;
      }
      asdOperatorDelete(temp_v1);
    }
  }
  temp_v1 = param_1[3];
  temp_v0 = param_1[4];
  if (temp_v1 != temp_v0) {
    param_1[4] = temp_v0 - ((temp_v0 - temp_v1) & 0xfffffffcU);
  }
  asdDeallocateArrayStorage(temp_v1,(param_1[5] - temp_v1) >> 2,0);
  return param_1;
}

} /* extern "C" */
