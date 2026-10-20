#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */

extern int FUN_004ff9b4(unsigned int);


unsigned int FUN_0033bed4(int param_1)

{
  int temp_v0;
  int temp_v1;
  char *p;
  
  temp_v1 = 0;
  while (p = (char *)DAT_00580ca0 + temp_v1 * 0x3c + 0x90, (*p == '\0' ||
          (*(short *)(p + 0x16) != param_1)) ||
         (temp_v0 = FUN_004ff9b4(*(unsigned int *)(*(int *)(p + 0x18) + 4)), temp_v0 == 0)) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 0x23) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
