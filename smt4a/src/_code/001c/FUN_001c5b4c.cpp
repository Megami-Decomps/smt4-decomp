#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0059dbc0; /* 0x59dbc0 */


unsigned int FUN_001c5b4c(int param_1)

{
  unsigned int temp_v0;
  
  if (param_1 == 2) {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0059dbc0 + 0x4)) + 0x84);
  }
  else {
    temp_v0 = *(unsigned int *)((*(int *)((unsigned char *)&DAT_0059dbc0 + 0x4)) + 0x80);
  }
  return temp_v0;
}

} /* extern "C" */
