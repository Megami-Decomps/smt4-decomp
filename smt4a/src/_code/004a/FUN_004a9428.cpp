#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_0018719c(unsigned int);
extern int FUN_00336aa4(int);


unsigned int FUN_004a9428(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  if (((((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) != 0) && (temp_v0 = FUN_0018719c(0x525), temp_v0 == 0)) &&
      (temp_v0 = FUN_00336aa4(temp_v1 + 0x28c4), temp_v0 == 0)) &&
     (((temp_v1 = *(int *)(temp_v1 + 0x74a0), temp_v1 == 0 || (temp_v1 == 1 || temp_v1 == 3)) ||
      ((temp_v1 == 2 || temp_v1 == 0xb) || temp_v1 == 0xd)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
