/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033ff9c` (_code @ 0x33ff9c, 0x108 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_0023db14. */
extern int FUN_00293c98(void);
/* Supplied declaration required: FUN_002ae3f0. */


unsigned int FUN_0033ff9c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if ((param_2 != 0) && (FUN_002ae3f0(), param_2 != 0)) {
    temp_v2 = 2;
    temp_v3 = (*(unsigned int *)(param_2 + 0x28) & 0x7ff) >> 9 != 2;
    if (temp_v3) {
      temp_v2 = 3;
    }
    if (!temp_v3 || temp_v2 == (*(unsigned int *)(param_2 + 0x28) & 0x7ff) >> 9) {
      switch(*(unsigned char *)(param_2 + 0x23)) {
      case 0:
      case 1:
      case 2:
      case 5:
      case 6:
      case 10:
        break;
      default:
        temp_v1 = FUN_00293c98();
        if ((*(unsigned int *)(temp_v1 + 0x44a8) & 0x2000000) == 0) {
          if (*(char *)(param_2 + 0x23) != '\x03') {
            switch((*(unsigned int *)(param_2 + 0x28) & 0x1ff) >> 5) {
            case 0:
            case 1:
            case 3:
            case 4:
            case 5:
            case 6:
            case 8:
              return 0;
            }
          }
          FUN_0023db14(param_1,1,param_2);
          temp_v0 = 0;
          if (param_1 != 0) {
            temp_v0 = 3;
          }
          return temp_v0;
        }
      }
      return 0;
    }
    temp_v0 = 2;
  }
  else {
    temp_v0 = 1;
  }
  return temp_v0;
}
