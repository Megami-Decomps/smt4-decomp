#include "romwright_types.h"

extern "C" {

extern int DAT_0058103c; /* 0x58103c */


void FUN_00223670(void)

{
  int temp_v0;
  
  temp_v0 = DAT_0058103c;
  *(unsigned int *)(DAT_0058103c + 0x3c) = 1;
  *(unsigned int *)(temp_v0 + 0x44) = 1;
  return;
}

} /* extern "C" */
