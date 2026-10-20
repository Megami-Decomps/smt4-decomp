#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, int);
int FUN_00184c00(int, int, int);

extern int DAT_0057f574; /* 0x57f574 */

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_002c2cc4(unsigned int param_1,unsigned char param_2,unsigned int param_3,unsigned char param_4,
                 unsigned char param_5)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057f574;
  temp_v1 = DAT_0057f574 + 0x54;
  *(unsigned int *)(DAT_0057f574 + 8) = 1;
  FUN_00184758(temp_v1,5,0);
  FUN_00184c00(temp_v0 + 0x54,0,0);
  FUN_00184758(temp_v0 + 0xe0,3,0);
  *(unsigned char *)(temp_v0 + 0x33) = param_2;
  *(unsigned char *)(temp_v0 + 0x30) = 1;
  *(unsigned int *)(temp_v0 + 0x10) = 0x1e;
  *(unsigned int *)(temp_v0 + 0x20) = 2;
  *(unsigned int *)(temp_v0 + 0x2c) = param_1;
  *(unsigned char *)(temp_v0 + 0x32c) = param_4;
  *(unsigned char *)(temp_v0 + 0x32d) = param_5;
  return;
}

} /* extern "C" */
