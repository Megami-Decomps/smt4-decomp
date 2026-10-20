#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


unsigned char FUN_0037b538(unsigned int param_1)

{
  unsigned char temp_v0;
  int base = *(int *)(&DAT_0057f0c4 + 4);
  
  if ((base != 0) && (param_1 < 6)) {
    temp_v0 = *(unsigned char *)(base + param_1 * 4 + 0x5ac);
  }
  else {
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
