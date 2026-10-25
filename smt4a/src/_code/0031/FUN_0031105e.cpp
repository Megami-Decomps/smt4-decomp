#include "romwright_types.h"

extern "C" {

int resourceRetireAndQueueTarget(unsigned int, unsigned int);
int ringAdvance(int);

extern unsigned int *FUN_002fea6a(int);
/* Supplied declaration required: resourceRetireAndQueueTarget. */
/* Supplied declaration required: ringAdvance. */


void FUN_0031105e(unsigned int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  
  while (*(int *)(param_2 + 0x18) != 0) {
    puVar1 = (unsigned int *)FUN_002fea6a(param_2);
    resourceRetireAndQueueTarget(param_1,*puVar1);
    ringAdvance(param_2);
  }
  return;
}

} /* extern "C" */
