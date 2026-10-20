#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0059dbc0; /* 0x59dbc0 */


unsigned int FUN_00152f54(void)

{
  return *(unsigned int *)((*(int *)((unsigned char *)&DAT_0059dbc0 + 0x4)) + 0x80);
}

} /* extern "C" */
