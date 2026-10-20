#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_0038e6bc(int);


unsigned char FUN_004abb30(void)

{
  int temp_v0;
  
  temp_v0 = FUN_0038e6bc((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  return temp_v0 != 0;
}

} /* extern "C" */
