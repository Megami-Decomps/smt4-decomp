#include "romwright_types.h"

extern "C" {

extern int FUN_00152978(void);


unsigned int FUN_004bc944(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00152978();
  return (*(unsigned char *)(temp_v0 + 3) & 0x40) >> 6;
}

} /* extern "C" */
