/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bb620` (_code @ 0x3bb620, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00230954(int, int);
int FUN_00233410(int);
int flaggedValueHolderGetTotal(...);
int asdTMTexTableLoadEntryAsync(int, unsigned int);

/* Supplied declaration required: FUN_00230954. */
extern int stateCounterBelowLimit(int, unsigned int);
extern unsigned int FUN_002333f0(int);
/* Supplied declaration required: FUN_00233410. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */
extern int FUN_0027ee9c(void);
/* Supplied declaration required: asdTMTexTableLoadEntryAsync. */


unsigned int FUN_003bb620(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int *piVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v4 = 0;
  temp_v0 = flaggedValueHolderGetTotal();
  if (*(char *)(param_1 + 0x632) == '\0') {
    FUN_00230954(param_1 + 0x74,param_1);
    FUN_00233410(param_1);
  }
  temp_v1 = flaggedValueHolderGetTotal(param_1);
  piVar3 = (int *)(param_1 + 0xcb8);
  if (temp_v1 != temp_v0) {
    *(unsigned int *)(param_1 + 0xcb8) = 0;
  }
  else {
    temp_v0 = *(int *)(param_1 + 0xcb8);
    *piVar3 = temp_v0 + 1;
    if (temp_v0 + 1 < 0) {
      temp_v0 = 0;
    }
    else {
      *piVar3 = temp_v0 + 2;
      if (temp_v0 + 2 < 0x101) {
        temp_v0 = temp_v0 + 3;
        *piVar3 = temp_v0;
      }
      else {
        temp_v0 = 0x100;
      }
    }
    *(int *)(param_1 + 0xcb8) = temp_v0;
    if (temp_v0 >= 0x10) {
      temp_v0 = flaggedValueHolderGetTotal(param_1);
      temp_v3 = (unsigned int)*(unsigned short *)(*(int *)(param_1 + temp_v0 * 4 + 0x530) + 0x5a);
      temp_v0 = temp_v3 + 1;
      temp_v1 = param_1 + temp_v0;
      if (*(char *)(temp_v1 + 0xc78) == '\0') {
        *(int *)(param_1 + 0xc74) = temp_v0;
        *(unsigned int *)(param_1 + 0xc70) = temp_v3 + 2;
        if (*(char *)(temp_v1 + 0xc78) == '\0') {
          asdTMTexTableLoadEntryAsync(0x2a,*(unsigned int *)(param_1 + 0xc74));
          *(unsigned char *)(temp_v1 + 0xc78) = 1;
        }
      }
    }
  }
  if (*(char *)(param_1 + 0x632) == '\0') {
    if (*(char *)(param_1 + 0x86) != '\0') {
      temp_v2 = FUN_002333f0(param_1 + 0x74);
      temp_v0 = stateCounterBelowLimit(param_1,temp_v2);
      if (temp_v0 != 0) {
        temp_v4 = 1;
      }
    }
    temp_v0 = FUN_0027ee9c();
    if (temp_v0 != 0) {
      temp_v4 = 1;
    }
  }
  return temp_v4;
}

} /* extern "C" */
