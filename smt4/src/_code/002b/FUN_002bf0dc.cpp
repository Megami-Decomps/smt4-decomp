#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0044e328; /* 0x44e328 */


unsigned int FUN_002bf0dc(void)

{
  unsigned int temp_v0;
  
  temp_v0 = DAT_0044e328;
  DAT_0044e328 = 0;
  return temp_v0;
}

} /* extern "C" */
