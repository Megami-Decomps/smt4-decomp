/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385ccc` (_code @ 0x385ccc, 0xbc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ac0c4(void);
int FUN_002ac0f8(void);

/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);


unsigned int FUN_00385ccc(int param_1,char *param_2)

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
  
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x310)) {
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
            if (temp_v0 == '\x03') {
              pcVar6 = *(char **)(pcVar6 + 0x3c);
            }
            if ((temp_v0 == '\x03' && pcVar6 == param_2) &&
               (*(char *)(*(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10 + 0xc) != '\0')) {
              return *(unsigned int *)(*(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10);
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

} /* extern "C" */
