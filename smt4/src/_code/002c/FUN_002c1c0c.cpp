#include "romwright_types.h"

extern "C" {

extern int asdTMTexTableCallFileB(void);


unsigned int FUN_002c1c0c(void)

{
  int temp_v0;
  
  temp_v0 = asdTMTexTableCallFileB();
  return *(unsigned int *)(temp_v0 + 8);
}

} /* extern "C" */
