#include "romwright_types.h"

extern "C" {

extern int DAT_00588f98; /* 0x588f98 */


unsigned int FUN_0020ea90(void)

{
  return *(unsigned int *)(DAT_00588f98 + 0x18);
}

} /* extern "C" */
