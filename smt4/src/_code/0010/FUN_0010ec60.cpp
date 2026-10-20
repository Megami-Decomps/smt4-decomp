#include "romwright_types.h"

extern "C" {

extern unsigned char g_asdGxPresets; /* 0x4e39e0 */


unsigned int FUN_0010ec60(void)

{
  return (*(unsigned int *)((unsigned char *)&g_asdGxPresets + 0x1c0));
}

} /* extern "C" */
