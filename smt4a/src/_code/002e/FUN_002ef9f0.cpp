#include "romwright_types.h"

extern "C" {

extern unsigned int *DAT_00588e2c; /* 0x588e2c */

extern int jobFind(unsigned int);


unsigned char FUN_002ef9f0(void)

{
  int temp_v0;
  
  if (DAT_00588e2c == (unsigned int *)0x0) {
    return 0;
  }
  temp_v0 = jobFind(*DAT_00588e2c);
  return temp_v0 != 0;
}

} /* extern "C" */
