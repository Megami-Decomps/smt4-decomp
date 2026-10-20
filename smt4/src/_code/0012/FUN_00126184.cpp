#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_002c08f0(void);


unsigned int FUN_00126184(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_002c08f0();
  return *puVar1;
}

} /* extern "C" */
