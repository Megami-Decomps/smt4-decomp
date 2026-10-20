#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f208; /* 0x57f208 */


unsigned char FUN_003c8860(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f208 + 0xc)) != 0;
}

} /* extern "C" */
