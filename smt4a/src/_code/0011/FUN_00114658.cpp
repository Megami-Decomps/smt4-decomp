#include "romwright_types.h"

extern "C" {

int strInit(unsigned char [36]);
int FUN_002ec8a8(unsigned int, unsigned char [36]);
int strDestroy(unsigned char [36]);

typedef int romwright_code(...);
/* Supplied declaration required: strInit. */
/* Supplied declaration required: FUN_002ec8a8. */
/* Supplied declaration required: strDestroy. */


int FUN_00114658(int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [36];
  
  strInit(temp_v1);
  temp_v0 = (**(romwright_code **)(*param_1 + 8))(param_1,param_2,temp_v1);
  if (temp_v0 == 0) {
    FUN_002ec8a8(param_2,temp_v1);
  }
  strDestroy(temp_v1);
  return temp_v0;
}

} /* extern "C" */
