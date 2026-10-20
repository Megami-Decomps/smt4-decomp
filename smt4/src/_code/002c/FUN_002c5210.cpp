#include "romwright_types.h"

extern "C" {

extern unsigned char g_asdGxPresets; /* 0x4e39e0 */


unsigned int FUN_002c5210(void)

{
  return (*(unsigned int *)((unsigned char *)&g_asdGxPresets + 0x1c8));
}

} /* extern "C" */
