#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0059dbc0; /* 0x59dbc0 */


unsigned int FUN_0019e31c(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0059dbc0 + 0x4)) + 0x84);
}

} /* extern "C" */
