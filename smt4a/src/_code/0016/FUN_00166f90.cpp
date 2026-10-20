#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_00164a9c(void);


unsigned int FUN_00166f90(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_00164a9c();
  return *puVar1;
}

} /* extern "C" */
