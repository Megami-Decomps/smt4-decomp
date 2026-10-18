/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049c9a0` (_code @ 0x49c9a0, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_0019271c(unsigned int);
/* Supplied declaration required: FUN_00480838. */
/* Supplied declaration required: FUN_00480d20. */


unsigned short FUN_0049c9a0(unsigned short *param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  
  temp_v1 = 0;
  temp_v2 = (unsigned int)*param_1;
  temp_v0 = FUN_0019271c(temp_v2);
  switch(temp_v0) {
  case 1:
  case 0xc:
    FUN_00192550();
    if (temp_v2 != 0) {
      temp_v1 = (unsigned short)*(unsigned char *)(temp_v2 + 0x43);
    }
    break;
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
    FUN_00192608();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x70);
    }
    break;
  case 9:
    FUN_00480838();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x26);
    }
    break;
  case 10:
    FUN_00480d20();
    if (temp_v2 != 0) {
      temp_v1 = *(unsigned short *)(temp_v2 + 0x28);
    }
  }
  return temp_v1;
}
