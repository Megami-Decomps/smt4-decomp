/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002310d8` (_code @ 0x2310d8, 0xa0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0022e58c. */
/* Supplied declaration required: FUN_00256a50. */
extern unsigned int FUN_002ae650(unsigned int);
extern int FUN_002b47cc(unsigned int);
/* Supplied declaration required: FUN_002b4854. */


unsigned short FUN_002310d8(unsigned short *param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = 0;
  temp_v3 = (unsigned int)*param_1;
  temp_v0 = FUN_002ae650(temp_v3);
  switch(temp_v0) {
  case 1:
    FUN_002b4854();
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
    temp_v1 = FUN_002b47cc(temp_v3);
    if (temp_v1 != 0) {
      temp_v2 = *(unsigned short *)(temp_v1 + 0x98);
    }
    break;
  case 9:
    FUN_00256a50();
    if (temp_v3 != 0) {
      temp_v2 = *(unsigned short *)(temp_v3 + 0x26);
    }
    break;
  case 10:
    FUN_0022e58c();
    if (temp_v3 != 0) {
      temp_v2 = *(unsigned short *)(temp_v3 + 0x28);
    }
  }
  return temp_v2;
}
