#include "romwright_types.h"

extern "C" {

int FUN_002eb7f4(int, int);

extern int FUN_00248a9c(void);
/* Supplied declaration required: FUN_002eb7f4. */


void FUN_003bbb04(unsigned int param_1,int param_2,int param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00248a9c();
  temp_v1 = 0;
  if (temp_v1 < param_4) {
    do {
      if (temp_v0 <= temp_v1 + param_3) {
        return;
      }
      FUN_002eb7f4(temp_v1 + param_3,param_2 + temp_v1 * 0x4c);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < param_4);
  }
  return;
}

} /* extern "C" */
