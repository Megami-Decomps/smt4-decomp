/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031a914` (_code @ 0x31a914, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00187180. */
extern int FUN_00192798(void);
extern int FUN_003f86c8(unsigned int);


char * FUN_0031a914(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  
  temp_v0 = FUN_003f86c8(0x36);
  if (temp_v0 == 0) {
    pcVar2 = "NoTableLoaded";
  }
  else if (param_1 >= 5) {
    pcVar2 = "NoName";
  }
  else {
    switch((short)param_1) {
    case 0:
      temp_v0 = 2;
      break;
    case 1:
      temp_v0 = 1;
      break;
    case 2:
      temp_v0 = 3;
      break;
    case 3:
      temp_v0 = 0;
      break;
    case 4:
      temp_v0 = 4;
      break;
    default:
      temp_v0 = -1;
    }
    FUN_00187180(0x36,0);
    temp_v1 = FUN_00192798();
    pcVar2 = (char *)(temp_v1 + temp_v0 * 0xc + 0x1e);
  }
  return pcVar2;
}
