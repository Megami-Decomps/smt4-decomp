#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0059dba4; /* 0x59dba4 */


int FUN_001739c4(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0059dba4 + 0x1));
}

} /* extern "C" */
