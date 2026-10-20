#include "romwright_types.h"

extern "C" {

extern int FUN_001ab888(void);


unsigned char FUN_003e48bc(void)

{
  int temp_v0;
  
  temp_v0 = FUN_001ab888();
  if (*(unsigned short *)(temp_v0 + 0x2c4e) < 8) {
    return 0;
  }
  return 1;
}

} /* extern "C" */
