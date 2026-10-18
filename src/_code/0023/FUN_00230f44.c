/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00230f44` (_code @ 0x230f44, 0xa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0022e3f8. */
/* Supplied declaration required: FUN_00256810. */
extern unsigned int FUN_002ae3c4(unsigned int);
extern int FUN_002b45e8(unsigned int);
/* Supplied declaration required: FUN_002b4670. */


unsigned short FUN_00230f44(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = 0;
  temp_v3 = (unsigned int)*param_1;
  temp_v0 = FUN_002ae3c4(temp_v3);
  switch(temp_v0) {
  case 1:
    FUN_002b4670();
    if (temp_v3 != 0) {
      temp_v2 = (unsigned short)*(unsigned char *)(temp_v3 + 0x6f);
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    temp_v1 = FUN_002b45e8(temp_v3);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned short *)(temp_v1 + 0x98);
    }
    break;
  case 9:
    FUN_00256810();
    if (temp_v3 != 0) {
      temp_v2 = *(unsigned short *)(temp_v3 + 0x26);
    }
    break;
  case 10:
    FUN_0022e3f8();
    if (temp_v3 != 0) {
      temp_v2 = *(unsigned short *)(temp_v3 + 0x28);
    }
  }
  return temp_v2;
}
