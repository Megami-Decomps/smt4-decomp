#include "romwright_types.h"

extern "C" {

extern int FUN_0014af84(void);


unsigned char FUN_0015fb68(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0014af84();
  return *(unsigned char *)(temp_v0 + 0x21589);
}

} /* extern "C" */
