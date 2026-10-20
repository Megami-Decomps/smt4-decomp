#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0059dbc0; /* 0x59dbc0 */


void FUN_0036b824(unsigned int param_1)

{
  *(unsigned int *)((*(int *)((unsigned char *)&DAT_0059dbc0 + 0x4)) + 0x80) = param_1;
  return;
}

} /* extern "C" */
