/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cdd3c` (_code @ 0x3cdd3c, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00187180(int, int);
int FUN_00192748(...);

extern int DAT_00570280; /* 0x570280 */

/* Supplied declaration required: FUN_00187180. */
extern int FUN_0018719c(void);
/* Supplied declaration required: FUN_00192748. */
extern int FUN_00192798(void);


char * FUN_003cdd3c(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  
  temp_v3 = 0;
  FUN_00187180(0x23,8);
  temp_v0 = FUN_00192748();
  if (0 < temp_v0 + *(int *)(DAT_00570280 + 0x424)) {
    do {
      temp_v1 = FUN_00187180(0x23,8);
      temp_v0 = FUN_00192798();
      temp_v2 = FUN_00192748(temp_v1);
      if (temp_v3 < temp_v2) {
        pcVar5 = (char *)(temp_v0 + temp_v3 * 0x18);
      }
      else {
        pcVar5 = (char *)0x0;
        if (temp_v3 < temp_v2 + *(int *)(DAT_00570280 + 0x424)) {
          pcVar5 = (char *)(*(int *)(DAT_00570280 + 0x428) + (temp_v3 - temp_v2) * 0x18);
        }
      }
      if (*pcVar5 == -1) {
        return (char *)0x0;
      }
      if ((((*pcVar5 == param_1) && (pcVar5[1] == param_2)) &&
          ((*(short *)(pcVar5 + 2) == 0 || (temp_v0 = FUN_0018719c(), temp_v0 != 0)))) &&
         ((*(short *)(pcVar5 + 4) == 0 || (temp_v0 = FUN_0018719c(), temp_v0 == 0)))) {
        return pcVar5;
      }
      temp_v3 = temp_v3 + 1;
      FUN_00187180(0x23,8);
      temp_v0 = FUN_00192748();
    } while ((int)temp_v3 < temp_v0 + *(int *)(DAT_00570280 + 0x424));
  }
  return (char *)0x0;
}

} /* extern "C" */
