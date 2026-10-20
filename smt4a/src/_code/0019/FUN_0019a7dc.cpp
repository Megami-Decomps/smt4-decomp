#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_0019a7dc(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x1d30;
}

} /* extern "C" */
