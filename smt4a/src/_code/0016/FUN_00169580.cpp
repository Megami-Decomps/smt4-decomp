#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


unsigned int FUN_00169580(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return *(unsigned int *)(temp_v0 + 0x3c);
}

} /* extern "C" */
