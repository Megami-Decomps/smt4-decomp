/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023d5ac` (_code @ 0x23d5ac, 0x38 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_0023d5ac(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  temp_v0 = 0;
  if (param_1 != 0) {
    temp_v0 = 0x100;
  }
  temp_v1 = 0;
  if (param_2 != 0) {
    temp_v1 = 0x200;
  }
  if (param_3 == 0) {
    temp_v2 = 0;
  }
  else {
    temp_v2 = 0x400;
  }
  if (param_4 == 0) {
    temp_v3 = 0;
  }
  else {
    temp_v3 = 0x800;
  }
  return temp_v0 | temp_v1 | temp_v2 | temp_v3;
}
