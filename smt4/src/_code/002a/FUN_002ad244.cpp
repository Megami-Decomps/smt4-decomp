#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00471a70; /* 0x471a70 */


unsigned int FUN_002ad244(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_00471a70 + 0x1c));
}

} /* extern "C" */
