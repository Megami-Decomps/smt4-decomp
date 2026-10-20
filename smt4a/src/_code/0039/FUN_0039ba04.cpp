#include "romwright_types.h"

extern "C" {

extern int DAT_0057f244; /* 0x57f244 */


unsigned char FUN_0039ba04(void)

{
  return *(char *)(DAT_0057f244 + 4) == '\0';
}

} /* extern "C" */
