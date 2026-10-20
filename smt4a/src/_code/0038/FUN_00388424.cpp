#include "romwright_types.h"

extern "C" {

extern int g_menuState; /* 0x57f56c */


void FUN_00388424(unsigned int param_1,unsigned char param_2)

{
  int temp_v0;
  
  temp_v0 = g_menuState;
  *(unsigned int *)(g_menuState + 0x2ac) = param_1;
  *(unsigned char *)(temp_v0 + 0x2b0) = param_2;
  return;
}

} /* extern "C" */
