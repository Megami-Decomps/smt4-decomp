#include "romwright_types.h"

extern "C" {

extern int FUN_001ab940(void);


unsigned short FUN_004186e0(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab940();
  return *(unsigned short *)(temp_v0 + 0x8e0);
}

} /* extern "C" */
