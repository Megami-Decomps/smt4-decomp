#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00589184; /* 0x589184 */


unsigned int FUN_0017cdb4(void)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_00589184;
  DAT_00589184 = 0;
  return temp_v0;
}

} /* extern "C" */
