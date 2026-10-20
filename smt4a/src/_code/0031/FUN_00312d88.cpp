#include "romwright_types.h"

extern "C" {

extern int DAT_00581274; /* 0x581274 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_00312d88(void)

{
  int temp_v0;
  
  temp_v0 = FUN_00224880(*(unsigned int *)(DAT_00581274 + 0x58));
  return temp_v0 == 2;
}

} /* extern "C" */
