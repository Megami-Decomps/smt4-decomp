#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


int FUN_002c2c98(void)

{
  return (int)(short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x670);
}

} /* extern "C" */
