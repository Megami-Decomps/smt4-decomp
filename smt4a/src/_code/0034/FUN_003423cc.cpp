#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f0c4; /* 0x57f0c4 */


void FUN_003423cc(unsigned short param_1)

{
  if ((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) != 0) {
    *(unsigned short *)((*(int *)((unsigned char *)&DAT_0057f0c4 + 0x4)) + 0x5e6) = param_1;
  }
  return;
}

} /* extern "C" */
