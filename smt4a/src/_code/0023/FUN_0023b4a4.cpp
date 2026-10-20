#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f598; /* 0x57f598 */


unsigned int FUN_0023b4a4(int param_1)

{
  return *(unsigned int *)(&DAT_0057f598 + param_1 * 4);
}

} /* extern "C" */
