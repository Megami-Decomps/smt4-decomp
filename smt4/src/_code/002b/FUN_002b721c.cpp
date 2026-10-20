#include "romwright_types.h"

extern "C" {

extern unsigned int *jobGetWork(void);


unsigned int FUN_002b721c(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)jobGetWork();
  return *puVar1;
}

} /* extern "C" */
