#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00439c88; /* 0x439c88 */

extern int FUN_0028c5e8(int);
extern int FUN_0031f524(int);


unsigned int FUN_003af0fc(void)

{
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  temp_v0 = FUN_0028c5e8((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) + 8);
  if ((temp_v0 == 0) || (temp_v1 = FUN_0031f524(temp_v1 + 0x2200), temp_v1 == 0)) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 1;
  }
  return temp_v2;
}

} /* extern "C" */
