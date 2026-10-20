#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e140; /* 0x44e140 */


void FUN_0029a084(int param_1,unsigned int param_2)

{
  int base = *(int *)((unsigned char *)&DAT_0044e140 + 0x4);
  switch (param_1) {
  case 1:
    *(unsigned int *)(base + 0x1eac) = param_2;
    break;
  case 0:
    *(unsigned int *)(base + 0x1ea8) = param_2;
    break;
  case 2:
    *(unsigned int *)(base + 0x1eb0) = param_2;
    break;
  }
  return;
}

} /* extern "C" */
