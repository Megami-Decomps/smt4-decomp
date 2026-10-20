#include "romwright_types.h"

extern "C" {

extern int DAT_0057f118; /* 0x57f118 */


unsigned int FUN_0035a028(void)

{
  unsigned int temp_v0;
  
  if (DAT_0057f118 != 0) {
    temp_v0 = *(unsigned int *)(DAT_0057f118 + 0x14c);
  }
  else {
    temp_v0 = 0xffffffff;
  }
  return temp_v0;
}

} /* extern "C" */
