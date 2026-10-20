#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698;


int FUN_002840c4(int param_1)

{
  int t = *(int *)((unsigned char *)&DAT_0057f698 + 0x4);
  return param_1 + t + 0x2831c;
}

} /* extern "C" */
