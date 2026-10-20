#include "romwright_types.h"

extern "C" {

extern unsigned int *FUN_001ab888(void);


unsigned int FUN_004d05b4(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)FUN_001ab888();
  return *puVar1;
}

} /* extern "C" */
