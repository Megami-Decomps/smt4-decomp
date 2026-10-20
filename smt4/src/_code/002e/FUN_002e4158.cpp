#include "romwright_types.h"

extern "C" {

int FUN_0028dcb0(unsigned int);

/* Supplied declaration required: FUN_0028dcb0. */
extern unsigned int *FUN_002a8764(void);


unsigned int FUN_002e4158(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a8764();
  FUN_0028dcb0(*puVar1);
  return 1;
}

} /* extern "C" */
