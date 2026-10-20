#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0055908c; /* 0x55908c */


void FUN_0010cfe8(unsigned int *param_1)

{
  *param_1 = (unsigned int)&DAT_0055908c;
  *(unsigned char *)(param_1 + 1) = 0;
  *(unsigned short *)((int)param_1 + 6) = 0;
  return;
}

} /* extern "C" */
