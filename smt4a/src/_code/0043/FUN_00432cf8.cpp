/* NON_MATCHING: this is a virtual destructor (vtable address point DAT_0055a808) and needs destructor/vtable symbol migration before a genuine C++ implementation. */
#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);

typedef int romwright_code(...);
/* Supplied declaration required: asdOperatorDeleteArray. */


unsigned int * FUN_00432cf8(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  
  *param_1 = param_2;
  puVar2 = (unsigned int *)param_1[4];
  for (puVar1 = (unsigned int *)param_1[3]; puVar1 != puVar2; puVar1 = puVar1 + 0x2e) {
    (**(romwright_code **)*puVar1)(puVar1);
  }
  asdOperatorDeleteArray(param_1[3]);
  return param_1;
}

} /* extern "C" */
