#include "romwright_types.h"

extern "C" {

extern int gameGetOptions(void);


unsigned int FUN_00177654(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = gameGetOptions();
  if ((*(short *)(temp_v0 + 0x62) == 0) || (*(short *)(temp_v0 + 300) == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
