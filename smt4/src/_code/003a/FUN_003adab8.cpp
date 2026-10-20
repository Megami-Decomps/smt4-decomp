#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00439c88; /* 0x439c88 */

extern int FUN_002c09d0(unsigned int);
extern int FUN_002d0058(int);


unsigned int FUN_003adab8(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v1 = (*(int *)((unsigned char *)&DAT_00439c88 + 0x20));
  if (((((*(int *)((unsigned char *)&DAT_00439c88 + 0x20)) != 0) && (temp_v0 = FUN_002c09d0(0x525), temp_v0 == 0)) &&
      (temp_v0 = FUN_002d0058(temp_v1 + 0x2460), temp_v0 == 0)) &&
     (((temp_v1 = *(int *)(temp_v1 + 0x7e38), temp_v1 == 0 || (temp_v1 == 1 || temp_v1 == 2)) ||
      (temp_v1 == 7 || temp_v1 == 9)))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
