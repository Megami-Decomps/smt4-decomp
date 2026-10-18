/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6c5c` (_code @ 0x2a6c5c, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);


int FUN_002a6c5c(int param_1,int param_2,char *param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  int temp_v4;
  unsigned int temp_v5;
  
  if ((param_2 != -1) && (temp_v4 = 0, 0 < *(int *)(param_1 + 0x310))) {
    do {
      temp_v5 = *(int *)(param_1 + 0x318) + temp_v4 * 0x50;
      temp_v1 = FUN_002ac12c(temp_v5);
      if (temp_v1 != 0) {
        temp_v2 = temp_v5;
        FUN_002ac0f8();
        FUN_002ac0c4();
        temp_v3 = 0;
        if (temp_v3 < temp_v5) {
          do {
            pcVar5 = (char *)(temp_v2 + temp_v3 * 0x40);
            temp_v0 = *pcVar5;
            if (temp_v0 == param_2) {
              pcVar5 = *(char **)(pcVar5 + 0x3c);
            }
            if (temp_v0 == param_2 && pcVar5 == param_3) {
              return temp_v2 + temp_v3 * 0x40;
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v5);
        }
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
