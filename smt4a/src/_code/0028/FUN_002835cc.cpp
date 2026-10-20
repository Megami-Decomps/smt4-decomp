#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f3b4; /* 0x57f3b4 */


unsigned char FUN_002835cc(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f3b4 + 0xc)) != 0;
}

} /* extern "C" */
