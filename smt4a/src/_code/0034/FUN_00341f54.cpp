#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


unsigned short FUN_00341f54(unsigned int param_1)

{
  int p = *(int *)(&DAT_0057f0c4 + 4);
  if ((p != 0) && (param_1 < 6)) {
    return *(unsigned short *)(p + param_1 * 4 + 0x5ae);
  }
  return 0;
}

} /* extern "C" */
