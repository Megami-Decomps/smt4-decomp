#include "romwright_types.h"

extern "C" {

extern int g_cecProcess; /* 0x57f390 */


int FUN_00330014(unsigned int param_1)

{
  int temp_v0;
  
  temp_v0 = 0;
  if ((param_1 < 0x20) && (g_cecProcess != 0)) {
    temp_v0 = g_cecProcess + param_1 * 100 + 0x98;
  }
  return temp_v0;
}

} /* extern "C" */
