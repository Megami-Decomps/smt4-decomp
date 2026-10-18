/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230f98` (_code @ 0x230f98, 0xc0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00297688(void);
extern unsigned int FUN_002ae650(unsigned int);
extern int FUN_002b47cc(unsigned int);
/* Supplied declaration required: FUN_002b4854. */


int FUN_00230f98(unsigned short *param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = (unsigned int)*param_1;
  temp_v0 = FUN_002ae650(temp_v3);
  temp_v2 = 0;
  switch(temp_v0) {
  case 1:
    FUN_002b4854();
    temp_v2 = 99999999;
    if (temp_v3 != 0) {
      temp_v2 = *(int *)(temp_v3 + 0x78);
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    temp_v1 = FUN_002b47cc(temp_v3);
    temp_v2 = 99999999;
    if (temp_v1 != 0) {
      temp_v2 = *(int *)(temp_v1 + 0x9c);
    }
  }
  if ((param_1[1] & 2) != 0) {
    temp_v2 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v2) / 100;
  }
  temp_v1 = FUN_00297688();
  if (temp_v1 == 2) {
    temp_v2 = temp_v2 * 3;
  }
  return temp_v2;
}
