#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_00588c2c; /* 0x588c2c */


void FUN_00229314(unsigned char param_1)

{
  DAT_00588c2c = param_1;
  return;
}

} /* extern "C" */
