#include "romwright_types.h"

extern "C" {

int FUN_003283ac(unsigned int);

extern unsigned int *FUN_001ab888(void);
/* Supplied declaration required: FUN_003283ac. */


unsigned int FUN_0035f6e0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001ab888();
  FUN_003283ac(*puVar1);
  return 1;
}

} /* extern "C" */
