#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005806a0; /* 0x5806a0 */

extern int FUN_003f9e6c(unsigned int);


unsigned int FUN_003958cc(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  if ((*(char *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 0x304) == '\0') ||
     (temp_v0 = FUN_003f9e6c(*(unsigned int *)((*(int *)((unsigned char *)&DAT_005806a0 + 0x4)) + 700)), temp_v0 == 0)) {
    temp_v1 = 1;
  }
  else {
    temp_v1 = 0;
  }
  return temp_v1;
}

} /* extern "C" */
