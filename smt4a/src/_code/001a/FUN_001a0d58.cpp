#include "romwright_types.h"

extern "C" {

extern int DAT_005c1bfc; /* 0x5c1bfc */


int FUN_001a0d58(void)

{
  int temp_v0;
  
  temp_v0 = DAT_005c1bfc;
  if (DAT_005c1bfc != 0) {
    temp_v0 = DAT_005c1bfc + 0x80;
  }
  return temp_v0;
}

} /* extern "C" */
