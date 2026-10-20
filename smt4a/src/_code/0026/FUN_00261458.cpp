#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


unsigned int FUN_00261458(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0057f698 + 0x4));
}

} /* extern "C" */
