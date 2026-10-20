#include "romwright_types.h"

extern "C" {

extern int DAT_00435d90; /* 0x435d90 */

extern int FUN_002bf244(unsigned int);


unsigned char FUN_002e3894(void)

{
  int temp_v0;
  
  if (DAT_00435d90 == 0) {
    return 0;
  }
  temp_v0 = FUN_002bf244(*(unsigned int *)(DAT_00435d90 + 0x2c));
  return temp_v0 != 0;
}

} /* extern "C" */
