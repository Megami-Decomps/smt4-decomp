#include "romwright_types.h"

extern "C" {

extern int jobGetWork(void);


unsigned char FUN_00221e00(void)

{
  int temp_v0;
  
  temp_v0 = jobGetWork();
  return *(int *)(temp_v0 + 0xc) == 0;
}

} /* extern "C" */
