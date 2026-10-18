/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00328210` (_code @ 0x328210, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0018719c(unsigned int);
extern int FUN_004d0524(void);


unsigned int FUN_00328210(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0018719c(0x49a);
  temp_v1 = 0;
  if ((((temp_v0 != 0) && (temp_v0 = FUN_0018719c(0x404), temp_v1 = 0, temp_v0 != 0)) &&
      ((temp_v0 = FUN_0018719c(0xc), temp_v0 == 0 || (temp_v0 = FUN_0018719c(0x10), temp_v1 = 0, temp_v0 != 0)
       ))) && (temp_v0 = FUN_004d0524(), temp_v1 = 0, temp_v0 != 0)) {
    temp_v1 = 1;
  }
  return temp_v1;
}
