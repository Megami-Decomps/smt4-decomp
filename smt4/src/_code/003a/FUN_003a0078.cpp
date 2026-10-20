/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a0078` (_code @ 0x3a0078, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_00230ecc(unsigned short);
extern int FUN_00230f44(unsigned short *);
extern int FUN_002ae3c0(unsigned short);


int FUN_003a0078(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v3 = 0;
  temp_v0 = *param_1;
  temp_v1 = *param_2;
  temp_v4 = 0;
  temp_v2 = FUN_002ae3c0(temp_v0);
  if ((temp_v2 == 2 || temp_v2 == 3) || temp_v2 == 8) {
    temp_v3 = FUN_00230ecc(temp_v0);
  }
  temp_v2 = FUN_002ae3c0(temp_v1);
  if ((temp_v2 == 2 || temp_v2 == 3) || temp_v2 == 8) {
    temp_v4 = FUN_00230ecc(temp_v1);
  }
  temp_v3 = temp_v3 - temp_v4;
  if (temp_v3 == 0) {
    temp_v3 = FUN_00230f44(param_1);
    temp_v2 = FUN_00230f44(param_2);
    temp_v3 = temp_v3 - temp_v2;
  }
  return temp_v3;
}

} /* extern "C" */
