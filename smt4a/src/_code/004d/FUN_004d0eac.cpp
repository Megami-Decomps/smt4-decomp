#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);
extern int FUN_004bd340(int, unsigned int);


unsigned int FUN_004d0eac(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_001ab888();
  if ((param_1 < 0) || (temp_v0 = FUN_004bd340(temp_v0 + param_1 * 300 + 0x68,1), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
