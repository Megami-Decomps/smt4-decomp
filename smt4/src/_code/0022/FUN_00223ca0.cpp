#include "romwright_types.h"

extern "C" {

extern int DAT_0043dd50; /* 0x43dd50 */

extern int FUN_0029efa8(int);
extern int FUN_0029efc0(int);


unsigned short FUN_00223ca0(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = DAT_0043dd50;
  temp_v1 = FUN_0029efc0(DAT_0043dd50 + 0x660);
  temp_v2 = FUN_0029efa8(temp_v0 + 0x660);
  return *(unsigned short *)(temp_v0 + (temp_v2 + temp_v1) * 2 + 0x78a);
}

} /* extern "C" */
