#include "romwright_types.h"

extern "C" {

extern unsigned char *FUN_0037d494(int);


void FUN_0040a810(void)

{
  unsigned char *pbVar1;
  int temp_v0;
  
  temp_v0 = 0;
  do {
    pbVar1 = (unsigned char *)FUN_0037d494(temp_v0);
    temp_v0 = temp_v0 + 1;
    pbVar1[1] = 0;
    *pbVar1 = *pbVar1 & ~7;
  } while (temp_v0 < 300);
  return;
}

} /* extern "C" */
