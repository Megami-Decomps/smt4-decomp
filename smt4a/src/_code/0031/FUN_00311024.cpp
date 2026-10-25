#include "romwright_types.h"

extern "C" {

int asdOperatorDeleteArray(unsigned int);
int ringAdvance(int);

/* Supplied declaration required: asdOperatorDeleteArray. */
extern int FUN_002f5966(int);
extern unsigned int *FUN_002fea6a(int);
/* Supplied declaration required: ringAdvance. */
extern int FUN_002fecc2(int);


int FUN_00311024(int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  while (*(int *)(param_1 + 0x3c) != 0) {
    puVar1 = (unsigned int *)FUN_002fea6a(param_1 + 0x24);
    asdOperatorDeleteArray(*puVar1);
    ringAdvance(param_1 + 0x24);
  }
  temp_v0 = FUN_002f5966(param_1 + 0x4c);
  temp_v0 = FUN_002fecc2(temp_v0 - 0x28);
  temp_v0 = FUN_002fecc2(temp_v0 - 0x20);
  return temp_v0 - 4;
}

} /* extern "C" */
