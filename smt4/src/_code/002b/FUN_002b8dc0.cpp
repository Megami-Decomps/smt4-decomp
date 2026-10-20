/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8dc0` (_code @ 0x2b8dc0, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b45e8(void);
int FUN_002b4670(void);

/* Supplied declaration required: FUN_002b45e8. */
/* Supplied declaration required: FUN_002b4670. */
extern int FUN_002b4748(void);


unsigned int FUN_002b8dc0(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_002b4748();
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
        FUN_002b4670();
        temp_v1 = 0;
        if (param_1 != 0) {
          if ((*(unsigned int *)(param_1 + 0x70) & 0xffffff00) == 0) {
            return 999;
          }
          temp_v1 = *(unsigned int *)(param_1 + 0x70) >> 8;
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
        temp_v1 = 0;
        if (param_1 != 0) {
          if ((*(unsigned short *)(param_1 + 0x9a) & 0x7c) == 0) {
            return 999;
          }
          temp_v1 = (*(unsigned short *)(param_1 + 0x9a) & 0x7f) >> 2;
        }
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
