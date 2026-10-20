/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047fe44` (_code @ 0x47fe44, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_00192608(void);

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019c06c(void);


unsigned int FUN_0047fe44(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0019c06c();
  if (temp_v0 == 0) {
    return 0;
  }
  if ((*(char *)(temp_v0 + 9) != '\0') && (*(char *)(temp_v0 + 9) == '\x01')) {
    switch(*(unsigned char *)(temp_v0 + 8)) {
    default:
      return 1;
    case 1:
    case 0xc:
      FUN_00192550();
      temp_v1 = 0;
      if (param_1 != 0) {
        temp_v1 = (*(unsigned char *)(param_1 + 0x42) & 8) >> 3;
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
      temp_v1 = 0;
      if (param_1 != 0) {
        return (*(unsigned short *)(param_1 + 0x72) & 2) >> 1;
      }
    }
    return temp_v1;
  }
  return 1;
}

} /* extern "C" */
