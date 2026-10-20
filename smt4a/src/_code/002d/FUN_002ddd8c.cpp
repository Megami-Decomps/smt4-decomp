#include "romwright_types.h"

extern "C" {

extern int DAT_005821c4; /* 0x5821c4 */


unsigned int FUN_002ddd8c(int param_1)

{
  return *(unsigned int *)(DAT_005821c4 + param_1 * 8 + 0x780);
}

} /* extern "C" */
