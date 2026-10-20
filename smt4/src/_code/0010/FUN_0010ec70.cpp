#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00464d48;


void FUN_0010ec70(unsigned int param_1)

{
  (*(unsigned int *)((unsigned char *)&DAT_00464d48 + 0x24)) = param_1;
  return;
}

} /* extern "C" */
