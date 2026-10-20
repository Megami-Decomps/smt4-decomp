#include "romwright_types.h"

extern "C" {


void FUN_004d03b4(int param_1)

{
  *(unsigned char *)(param_1 + 0xd) = 0;
  *(unsigned char *)(param_1 + 0xe) = 1;
  return;
}

} /* extern "C" */
