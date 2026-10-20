#include "romwright_types.h"

extern "C" {

extern unsigned char g_asdTextDefaults; /* 0x464d48 */


void FUN_0010afac(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&g_asdTextDefaults + 0x14)) = param_1;
  return;
}

} /* extern "C" */
