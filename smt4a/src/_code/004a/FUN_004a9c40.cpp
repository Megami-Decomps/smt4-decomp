#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057a9b8; /* 0x57a9b8 */

extern int FUN_002cccf8(int);


void FUN_004a9c40(unsigned int param_1,unsigned short *param_2,unsigned short *param_3)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10));
  temp_v1 = FUN_002cccf8((*(int *)((unsigned char *)&DAT_0057a9b8 + 0x10)) + 0x28c4);
  if (temp_v1 != 0) {
    *param_2 = *(unsigned short *)(temp_v0 + 0x74b6);
    *param_3 = *(unsigned short *)(temp_v0 + 0x74b8);
  }
  return;
}

} /* extern "C" */
