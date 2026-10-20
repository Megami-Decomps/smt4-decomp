#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


unsigned char FUN_00473244(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return (unsigned int)(*(unsigned char *)(temp_v0 + 0x27e98) - 1) <= 2;
}

} /* extern "C" */
