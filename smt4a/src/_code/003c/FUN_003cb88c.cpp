/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cb88c` (_code @ 0x3cb88c, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);

/* Supplied declaration required: FUN_00187180. */
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


char * FUN_003cb88c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  char *pcVar4;
  unsigned int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  FUN_00187180(0x2e,3);
  temp_v0 = FUN_00192748();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_00187180(0x2e,3);
      temp_v0 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v1);
      pcVar4 = (char *)0x0;
      if (temp_v3 < temp_v2) {
        pcVar4 = (char *)(temp_v0 + temp_v3 * 0x14);
      }
      temp_v0 = (int)*pcVar4;
      temp_v4 = temp_v0 == param_1;
      if (temp_v4) {
        temp_v0 = (int)pcVar4[1];
      }
      if (temp_v4 && temp_v0 == param_2) {
        return pcVar4;
      }
      temp_v3 = temp_v3 + 1;
      FUN_00187180(0x2e,3);
      temp_v0 = FUN_00192748();
    } while ((int)temp_v3 < temp_v0);
  }
  return (char *)0x0;
}

} /* extern "C" */
