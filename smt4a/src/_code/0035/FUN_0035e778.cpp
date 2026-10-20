#include "romwright_types.h"

extern "C" {

extern int DAT_00573920; /* 0x573920 */

extern int FUN_00163e40(unsigned int);


unsigned char FUN_0035e778(void)

{
  int temp_v0;
  
  if (DAT_00573920 == 0) {
    return 0;
  }
  temp_v0 = FUN_00163e40(*(unsigned int *)(DAT_00573920 + 0x4c));
  return temp_v0 != 0;
}

} /* extern "C" */
