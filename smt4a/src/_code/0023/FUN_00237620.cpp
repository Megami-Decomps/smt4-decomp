#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f110; /* 0x57f110 */

extern int FUN_00224880(unsigned int);


unsigned char FUN_00237620(void)

{
  int temp_v0;
  
  if ((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) != 0) {
    temp_v0 = FUN_00224880(*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f110 + 0x4)) + 0xf4));
    if (temp_v0 == 2) {
      return 0;
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
