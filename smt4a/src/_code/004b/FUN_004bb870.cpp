#include "romwright_types.h"

extern "C" {

extern int FUN_004bb80c(void);


unsigned short FUN_004bb870(void)

{
  int temp_v0;
  
  temp_v0 = FUN_004bb80c();
  return *(unsigned short *)(temp_v0 + 0x10);
}

} /* extern "C" */
