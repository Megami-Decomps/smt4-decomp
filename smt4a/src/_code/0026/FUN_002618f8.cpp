#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f248; /* 0x57f248 */


int FUN_002618f8(void)

{
  return (int)(short)((short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x660) -
                     (short)*(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f248 + 0x4)) + 0x658));
}

} /* extern "C" */
