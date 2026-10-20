#include "romwright_types.h"

extern "C" {

extern int DAT_0058103c; /* 0x58103c */


void FUN_003659c4(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  if (*(short *)(DAT_0058103c + 0xcce8) != 0) {
    *(unsigned short *)(DAT_0058103c + 0xcce8) = 3;
    *(unsigned short *)(temp_v0 + 0xccea) = 0;
  }
  return;
}

} /* extern "C" */
