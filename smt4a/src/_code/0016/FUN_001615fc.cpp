#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0061a470; /* 0x61a470 */


void FUN_001615fc(int param_1,int param_2)

{
  if ((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) != 0) {
    switch (param_1) {
    case 0x200:
      *(int *)((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) + 0x2c) = param_2;
      break;
    case 0x20f:
      *(unsigned char *)((*(int *)((unsigned char *)&DAT_0061a470 + 0x9c)) + 0x3d) = param_2 != 0;
      break;
    }
  }
  return;
}

} /* extern "C" */
