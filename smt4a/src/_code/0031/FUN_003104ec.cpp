#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */


void FUN_003104ec(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x48)) = (*(unsigned int *)((unsigned char *)&g_flagBlock + 0x48)) | param_1;
  return;
}

} /* extern "C" */
