#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_0057f568; /* 0x57f568 */

extern int jobIsValid(unsigned int);


unsigned char FUN_00167e54(void)

{
  int temp_v0;
  
  if (DAT_0057f568 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = jobIsValid(*DAT_0057f568);
  return temp_v0 != 0;
}

} /* extern "C" */
