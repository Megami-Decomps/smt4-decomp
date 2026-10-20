/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001774d8` (_code @ 0x1774d8, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00192550(void);
int FUN_00192608(void);

/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019c06c(void);


unsigned int FUN_001774d8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0019c06c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    if (*(char *)(temp_v0 + 9) == '\0') {
      temp_v1 = 1;
    }
    else if (*(char *)(temp_v0 + 9) != '\x01') {
      temp_v1 = 0;
    }
    else {
      switch(*(unsigned char *)(temp_v0 + 8)) {
      default:
        return 999;
      case 1:
      case 0xc:
        FUN_00192550();
        temp_v1 = 0;
        if (param_1 != 0) {
          if ((*(unsigned int *)(param_1 + 0x44) & 0xffffff00) == 0) {
            return 999;
          }
          temp_v1 = *(unsigned int *)(param_1 + 0x44) >> 8;
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
          if ((*(unsigned short *)(param_1 + 0x72) & 0x7c) == 0) {
            return 999;
          }
          temp_v1 = (*(unsigned short *)(param_1 + 0x72) & 0x7f) >> 2;
        }
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
