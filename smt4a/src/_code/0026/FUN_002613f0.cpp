#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698;


int FUN_002613f0(int param_1)

{
  int *p = (int *)(*(int *)((unsigned char *)&DAT_0057f698 + 0x4));
  p = p + param_1 * 2;
  return (int)p + 0x2714c;
}

} /* extern "C" */
