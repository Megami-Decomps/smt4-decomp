#include "romwright_types.h"

extern "C" {


unsigned int FUN_002ea408(int param_1)

{
  char temp_v0;
  
  temp_v0 = *(char *)(param_1 + 0x10);
  if (((temp_v0 != '\x02') && (temp_v0 != '\x03')) && (temp_v0 != '\x04')) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
