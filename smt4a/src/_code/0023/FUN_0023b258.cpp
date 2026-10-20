#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f27c; /* 0x57f27c */


unsigned char FUN_0023b258(void)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((*(int *)((unsigned char *)&DAT_0057f27c + 0x4)) != 0) {
    temp_v0 = *(int *)((*(int *)((unsigned char *)&DAT_0057f27c + 0x4)) + 0x744);
  }
  return (*(int *)((unsigned char *)&DAT_0057f27c + 0x4)) == 0 || temp_v0 == 4;
}

} /* extern "C" */
