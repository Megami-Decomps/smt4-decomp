#include "romwright_types.h"

extern "C" {

int FUN_002c43b4(unsigned int, int);

extern unsigned int *DAT_0043e088; /* 0x43e088 */

extern int FUN_002bf244(unsigned int);
/* Supplied declaration required: FUN_002c43b4. */


unsigned int FUN_002222a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((DAT_0043e088 != (unsigned int *)0x0) && (temp_v0 = FUN_002bf244(*DAT_0043e088), temp_v0 != 0)) {
    FUN_002c43b4(*DAT_0043e088,0);
  }
  return 1;
}

} /* extern "C" */
