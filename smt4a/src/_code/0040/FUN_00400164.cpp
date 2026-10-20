/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00400164` (_code @ 0x400164, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_00400564(int, int, int);

extern unsigned int DAT_00573cb8; /* 0x573cb8 */
extern unsigned int DAT_00573cbc; /* 0x573cbc */

extern int btlGetMainState(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_00400564. */


unsigned int FUN_00400164(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  
  if ((param_2 != 0) && (FUN_001aba54(), param_2 != 0)) {
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
        temp_v1 = btlGetMainState();
        if ((*(unsigned int *)(temp_v1 + 0x45a8) & DAT_00573cb8) == 0 &&
            (*(unsigned int *)(temp_v1 + 0x45ac) & DAT_00573cbc) == 0) {
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
          FUN_00400564(param_1,1,param_2);
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

} /* extern "C" */
