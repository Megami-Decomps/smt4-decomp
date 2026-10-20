#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_0032135c(int);


int FUN_004aaa4c(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v1 = FUN_0032135c((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 8);
  if (temp_v1 != 0) {
    *(unsigned int *)(temp_v0 + 0x74a0) = 0;
  }
  return temp_v1;
}

} /* extern "C" */
