#include "romwright_types.h"

extern "C" {

extern unsigned int *jobGetWork(void);


unsigned int FUN_002b7174(void)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)jobGetWork();
  return *puVar1;
}

} /* extern "C" */
