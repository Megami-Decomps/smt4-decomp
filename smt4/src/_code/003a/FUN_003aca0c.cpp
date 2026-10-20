#include "romwright_types.h"

extern "C" {

extern unsigned char g_countdown; /* 0x43d9e0 */


void FUN_003aca0c(void)

{
  if (*(unsigned char *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 0x1c) >= 3) {
    *(unsigned char *)((*(int *)((unsigned char *)&g_countdown + 0x4)) + 0x1f) = 4;
  }
  return;
}

} /* extern "C" */
