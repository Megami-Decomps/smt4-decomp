/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a3f28` (_code @ 0x3a3f28, 0x2b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int buttonHelpSelectMenuPreset(int);
int flaggedValueHolderGetTotal(int);
int FUN_0027f3dc(...);
int useCounterRelease(void);
int FUN_002a0cc8(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int FUN_0039fcd8(...); /* 0x39fcd8 */
extern int FUN_0039fd24(...); /* 0x39fd24 */
extern int FUN_0039fd44(...); /* 0x39fd44 */
extern int FUN_003a0078(...); /* 0x3a0078 */
extern int FUN_003a0118(...); /* 0x3a0118 */
extern int FUN_003a0164(...); /* 0x3a0164 */
extern int FUN_003a05e8(...); /* 0x3a05e8 */
extern int FUN_003a0674(...); /* 0x3a0674 */
extern int FUN_003a06b8(...); /* 0x3a06b8 */
extern int FUN_003a06fc(...); /* 0x3a06fc */
extern int FUN_003a075c(...); /* 0x3a075c */
extern int FUN_003a63a8(...); /* 0x3a63a8 */

extern int useCounterGetValue(void);
/* Supplied declaration required: buttonHelpSelectMenuPreset. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */
/* Supplied declaration required: FUN_0027f3dc. */
extern int useCounterGetCurrentValue(void);
/* Supplied declaration required: useCounterRelease. */
extern int useCounterIsFinished(void);
/* Supplied declaration required: FUN_002a0cc8. */


void FUN_003a3f28(int param_1)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = useCounterIsFinished();
  if (temp_v0 != 0) {
    useCounterRelease();
    FUN_002a0cc8(0);
    buttonHelpSelectMenuPreset(param_1);
    temp_v0 = *(int *)(param_1 + 0x860);
    if (*(int *)(param_1 + 0x10) == 1) {
      if (temp_v0 == 8) {
        temp_v1 = 0x10;
      }
      else {
        temp_v1 = 0xf;
      }
      *(unsigned int *)(param_1 + 4) = temp_v1;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
    if (temp_v0 == 7) {
      *(unsigned int *)(param_1 + 4) = 6;
      *(unsigned int *)(param_1 + 8) = 0;
      return;
    }
    if (temp_v0 == 8) {
      temp_v1 = 7;
    }
    else {
      temp_v1 = 5;
    }
    *(unsigned int *)(param_1 + 4) = temp_v1;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    temp_v2 = param_1 + *(int *)(param_1 + 0x860) * 0x1002;
    temp_v3 = temp_v2 + 0xc94;
    flaggedValueHolderGetTotal(param_1 + *(int *)(param_1 + 0x860) * 0x74 + 0x880);
    temp_v0 = useCounterGetCurrentValue();
    if (temp_v0 == 0xf) {
      temp_v0 = useCounterGetValue();
      if (temp_v0 == 0) {
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a05e8);
        return;
      }
      FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0078);
      return;
    }
    if (temp_v0 < 0xf) {
      if (temp_v0 == 3) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0164);
          return;
        }
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039fd44);
        return;
      }
      if (temp_v0 == 7) {
        if (*(int *)(param_1 + 0x860) == 8) {
          temp_v0 = useCounterGetValue();
          if (temp_v0 == 0) {
            FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a075c);
            return;
          }
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a06b8);
          return;
        }
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a06fc);
          return;
        }
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0674);
        return;
      }
      if (temp_v0 == 0xc) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039fd24);
          return;
        }
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a63a8);
        return;
      }
    }
    else {
      if (temp_v0 == 0x10) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_003a0118);
          return;
        }
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,FUN_0039fcd8);
        return;
      }
      if (temp_v0 == 0x1c) {
        temp_v0 = useCounterGetValue();
        if (temp_v0 == 0) {
          FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,0x3a0028);
          return;
        }
        FUN_0027f3dc(temp_v3,*(unsigned short *)(temp_v2 + 0x1c94),4,0x3a64cc);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
