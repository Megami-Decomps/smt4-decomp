/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0046bd44` (_code @ 0x46bd44, 0xfc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int jyoucyuGetTableEntry(int);
int FUN_001b31ac(void);
int FUN_001b31e0(void);
int gameFlagSetValue(unsigned int, int);
int flagValueAdd(unsigned int, int);

/* Supplied declaration required: jyoucyuGetTableEntry. */
extern int gameFlagIsSet(unsigned int);
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: flagValueAdd. */
extern int flagValueIsPositive(unsigned int);


void FUN_0046bd44(int param_1)

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
      temp_v0 = FUN_001b315c(temp_v2);
      if (temp_v0 != 0) {
        temp_v1 = temp_v2;
        FUN_001b31ac();
        FUN_001b31e0();
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
                flagValueAdd(temp_v4,1);
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
