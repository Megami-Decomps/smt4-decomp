#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588fd0; /* 0x588fd0 */


void FUN_0023b45c(int param_1)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_00588fd0 + 0x4));
  *(char *)((*(int *)((unsigned char *)&DAT_00588fd0 + 0x4)) + 0x2011) = (char)param_1;
  if (((param_1 == 0) && (*(char *)(temp_v0 + 0x2018) != '\n')) &&
     (temp_v1 = *(int *)(temp_v0 + 0x1368), (temp_v1 == 5 || temp_v1 == 6) || temp_v1 == 7)) {
    *(unsigned int *)(temp_v0 + 0x136c) = 0;
  }
  return;
}

} /* extern "C" */
