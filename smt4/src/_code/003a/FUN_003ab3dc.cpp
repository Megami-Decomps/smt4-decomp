/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab3dc` (_code @ 0x3ab3dc, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022d7b0(...);
int FUN_00230cc0(int, int, int, int, int);
int FUN_00231bcc(int, int, int, int, int, int);
int flaggedValueHolderGetTotal(...);
int FUN_00240d5c(...);
int FUN_00288e68(...);
int buttonHelpShowSkillDetails(void);
int FUN_003abae8(...);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0022d7b0. */
/* Supplied declaration required: FUN_00230cc0. */
/* Supplied declaration required: FUN_00231bcc. */
/* Supplied declaration required: flaggedValueHolderGetTotal. */
extern int rangeLimitMin(int);
/* Supplied declaration required: FUN_00240d5c. */
/* Supplied declaration required: FUN_00288e68. */
/* Supplied declaration required: buttonHelpShowSkillDetails. */
extern int FUN_0029e924(int);
/* Supplied declaration required: FUN_003abae8. */


void FUN_003ab3dc(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  
  FUN_00230cc0(param_1 + 200,3,0,0,0x1f);
  FUN_00231bcc(param_1 + 200,0x4c7,0,0,0x1f,1);
  FUN_00231bcc(param_1 + 200,0x4c8,0,0,0x1f,1);
  FUN_00231bcc(param_1 + 200,0x4ca,0,0,0x1f,1);
  if (*(int *)(param_1 + 0x28) != 0) {
    temp_v0 = FUN_0029e924(param_1 + 0x20);
    temp_v1 = rangeLimitMin(param_1 + 0x20);
    temp_v5 = 0;
    if (temp_v5 < temp_v1) {
      do {
        if ((*(int *)(param_1 + 0x14) != 3) ||
           (temp_v2 = FUN_00240d5c(param_1 + 0x20), temp_v2 != temp_v5)) {
          FUN_003abae8(param_1,temp_v5,temp_v0 + temp_v5,0,0x1f);
        }
        temp_v5 = temp_v5 + 1;
      } while (temp_v5 < temp_v1);
    }
    if (*(int *)(param_1 + 0x14) == 3) {
      temp_v3 = flaggedValueHolderGetTotal(param_1 + 0x20);
      temp_v4 = FUN_00240d5c(param_1 + 0x20);
      FUN_003abae8(param_1,temp_v4,temp_v3,1,0x20);
      temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x20);
      FUN_00288e68((int)*(short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
      buttonHelpShowSkillDetails();
    }
    FUN_0022d7b0(param_1,0x1f);
    return;
  }
  return;
}

} /* extern "C" */
