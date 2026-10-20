#include "romwright_types.h"

extern "C" {

extern int g_menuState; /* 0x57f56c */


void FUN_00330414(unsigned short param_1)

{
  int temp_v0;
  
  temp_v0 = g_menuState;
  *(unsigned int *)(g_menuState + 0x14) = 4;
  *(unsigned short *)(temp_v0 + 0x18) = param_1;
  *(unsigned char *)(temp_v0 + 0x2b1) = 0;
  return;
}

} /* extern "C" */
