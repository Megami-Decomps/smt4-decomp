#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0063fd88; /* 0x63fd88 */

extern int nngxIsStereoVisionAllowed(void);


unsigned int FUN_00399c60(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if (((*(int *)((unsigned char *)&DAT_0063fd88 + 0x1c8)) == 1) && (temp_v0 = nngxIsStereoVisionAllowed(), temp_v0 != 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
