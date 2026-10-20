#include "romwright_types.h"

extern "C" {

extern int FUN_002b6b20(void);


unsigned int FUN_002b6ad0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b6b20();
  if ((*(short *)(temp_v0 + 0x46) == 0) || (*(short *)(temp_v0 + 0x604) == 0)) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
