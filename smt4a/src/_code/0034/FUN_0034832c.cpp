#include "romwright_types.h"

extern "C" {

extern int DAT_0057f3b0; /* 0x57f3b0 */

extern int FUN_00163e40(int);
extern int FUN_0031bc88(int);


unsigned int FUN_0034832c(void)

{
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v0 = DAT_0057f3b0;
  if (DAT_0057f3b0 == 0) {
    temp_v1 = 0;
  }
  else {
    temp_v3 = 0;
    if (0 < *(int *)(DAT_0057f3b0 + 0x44)) {
      do {
        temp_v4 = *(int *)(temp_v0 + temp_v3 * 4 + 4);
        if (((temp_v4 != 0) && (temp_v2 = FUN_00163e40(temp_v4), temp_v2 != 0)) &&
           (temp_v4 = FUN_0031bc88(temp_v4), temp_v4 == 0)) {
          return 0;
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < *(int *)(temp_v0 + 0x44));
    }
    temp_v1 = 1;
  }
  return temp_v1;
}

} /* extern "C" */
