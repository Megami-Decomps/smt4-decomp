#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_002a8764(void);


unsigned int FUN_0022ea28(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002a8764();
  return *puVar1;
}

} /* extern "C" */
