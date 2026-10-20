#include "romwright_types.h"

extern "C" {

extern int DAT_00580ca0; /* 0x580ca0 */

extern int FUN_004ffba8(unsigned int);


unsigned int FUN_00398110(int param_1)
{
  int temp_v0;
  int temp_v1;
  char *p;
  
  temp_v1 = 0;
  while (p = (char *)(DAT_00580ca0 + temp_v1 * 0x18 + 0x8c4),
         (*p == '\0' || *(short *)(p + 4) != param_1) ||
         (temp_v0 = FUN_004ffba8(*(unsigned int *)(*(int *)(p + 8) + 4)), temp_v0 == 0)) {
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 10) {
      return 0;
    }
  }
  return 1;
}
} /* extern "C" */
