#include "romwright_types.h"

extern "C" {

extern int g_cecProcess; /* 0x43de68 */


int FUN_002cd648(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 < 0xc) && (g_cecProcess != 0)) {
    temp_v0 = g_cecProcess + param_1 * 0x4c + 0x80;
  }
  return temp_v0;
}

} /* extern "C" */
