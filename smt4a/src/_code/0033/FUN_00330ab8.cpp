#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_00330ab8(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27e8c);
}

} /* extern "C" */
