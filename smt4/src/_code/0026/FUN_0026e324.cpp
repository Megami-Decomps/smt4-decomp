/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026e324` (_code @ 0x26e324, 0xfc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagSetValue(unsigned int, int);
int FUN_00295a18(unsigned int, int);
int FUN_002ac0c4(void);
int FUN_002ac0f8(void);
int jyoucyuGetTableEntry(int);

/* Supplied declaration required: gameFlagSetValue. */
extern int flagValueIsPositive(unsigned int);
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: FUN_002ac0c4. */
/* Supplied declaration required: FUN_002ac0f8. */
extern int FUN_002ac12c(unsigned int);
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: jyoucyuGetTableEntry. */


void FUN_0026e324(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v2 = *(int *)(param_1 + 0x318) + temp_v5 * 0x50;
      temp_v0 = FUN_002ac12c(temp_v2);
      if (temp_v0 != 0) {
        temp_v1 = temp_v2;
        FUN_002ac0f8();
        FUN_002ac0c4();
        temp_v3 = 0;
        if (temp_v3 < temp_v2) {
          do {
            pcVar5 = (char *)(temp_v1 + temp_v3 * 0x40);
            if (*pcVar5 != '0') {
              if (*pcVar5 == '1') {
                temp_v0 = gameFlagIsSet(*(unsigned int *)(pcVar5 + 0x3c));
                if (temp_v0 != 0) break;
                gameFlagSetValue(*(unsigned int *)(pcVar5 + 0x3c),1);
                jyoucyuGetTableEntry(0);
              }
            }
            else {
              temp_v4 = *(unsigned int *)(pcVar5 + 0x3c);
              temp_v0 = flagValueIsPositive(temp_v4);
              if (temp_v0 == 0) {
                FUN_00295a18(temp_v4,1);
                jyoucyuGetTableEntry(0);
              }
            }
            temp_v3 = temp_v3 + 1;
          } while (temp_v3 < temp_v2);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  return;
}

} /* extern "C" */
