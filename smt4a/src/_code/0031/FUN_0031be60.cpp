#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


unsigned char FUN_0031be60(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return *(int *)(temp_v0 + 4) == 0;
}

} /* extern "C" */
