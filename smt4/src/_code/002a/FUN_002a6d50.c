/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a6d50` (_code @ 0x2a6d50, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);


int FUN_002a6d50(int param_1,int param_2,char *param_3)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  char *pcVar6;
  int temp_v5;
  unsigned int temp_v6;
  
  if ((param_2 != -1) && (temp_v5 = 0, 0 < *(int *)(param_1 + 0x310))) {
    do {
      temp_v6 = *(int *)(param_1 + 0x318) + temp_v5 * 0x50;
      temp_v1 = FUN_002ac12c(temp_v6);
      if (temp_v1 != 0) {
        temp_v2 = temp_v6;
        FUN_002ac0f8();
        temp_v3 = temp_v6;
        FUN_002ac0c4();
        temp_v4 = 0;
        if (temp_v4 < temp_v3) {
          do {
            pcVar6 = (char *)(temp_v2 + temp_v4 * 0x40);
            temp_v0 = *pcVar6;
            if (temp_v0 == param_2) {
              pcVar6 = *(char **)(pcVar6 + 0x3c);
            }
            if (temp_v0 == param_2 && pcVar6 == param_3) {
              return *(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v3);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  return 0;
}
