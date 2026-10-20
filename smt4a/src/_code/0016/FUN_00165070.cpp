#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


int FUN_00165070(void)

{
  return (int)*(short *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x64e);
}

} /* extern "C" */
