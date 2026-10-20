/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230e04` (_code @ 0x230e04, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b45e8(void);
int FUN_002b4670(void);

extern int FUN_002973ec(void);
extern unsigned int FUN_002ae3c4(unsigned int);
/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */


int FUN_00230e04(unsigned short *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = (unsigned int)*param_1;
  temp_v0 = FUN_002ae3c4(temp_v3);
  temp_v2 = 0;
  switch(temp_v0) {
  case 1:
    FUN_002b4670();
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
    FUN_002b45e8();
    temp_v2 = 99999999;
    if (temp_v3 != 0) {
      temp_v2 = *(int *)(temp_v3 + 0x9c);
    }
  }
  if ((param_1[1] & 2) != 0) {
    temp_v2 = (int)(((param_1[1] & 0x3ff) >> 2) * temp_v2) / 100;
  }
  temp_v1 = FUN_002973ec();
  if (temp_v1 == 2) {
    temp_v2 = temp_v2 * 3;
  }
  return temp_v2;
}

} /* extern "C" */
