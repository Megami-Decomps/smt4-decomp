#include "romwright_types.h"

extern "C" {

extern int DAT_0057a7b8; /* 0x57a7b8 */

extern unsigned int FUN_00236038(unsigned int);


unsigned int FUN_0034e708(void)

{
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = DAT_0057a7b8;
  *(unsigned int *)(DAT_0057a7b8 + 0x138) = 0;
  *(unsigned int *)(temp_v0 + 0x13c) = 0;
  *(unsigned int *)(temp_v0 + 0x140) = 0;
  temp_v1 = FUN_00236038(0);
  temp_v2 = FUN_00236038(1);
  temp_v3 = FUN_00236038(2);
  temp_v0 = DAT_0057a7b8;
  *(unsigned int *)(DAT_0057a7b8 + 0x138) = temp_v3;
  *(unsigned int *)(temp_v0 + 0x13c) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x140) = temp_v1;
  return 1;
}

} /* extern "C" */
