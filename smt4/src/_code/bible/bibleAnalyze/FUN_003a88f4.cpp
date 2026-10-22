/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a88f4` (_code @ 0x3a88f4, 0x190 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pointConvertToFloat(...);
int FUN_00233670(...);
int FUN_0029da34(...);
int FUN_0029ee6c(...);
int FUN_002a0cc8(...);
int buttonHelpSetPreset(...);
int textFormatBuffer(...);

typedef int romwright_code(...);
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned int DAT_0043d998; /* 0x43d998 */

extern int dataLookupDisplayName(unsigned char *, unsigned int);
/* Supplied declaration required: pointConvertToFloat. */
extern int uiAnimationAdvanceChannel(int, int);
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00233670. */
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);


void FUN_003a88f4(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [4];
  
  temp_v0 = uiAnimationAdvanceChannel(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
  temp_v3 = param_1 + *(short *)(param_1 + 0xa5b2) * 0x8c + 0xfc;
  temp_v1 = vec2GetYInt(temp_v3);
  temp_v2 = vec2GetXInt(temp_v3);
  pointConvertToFloat(param_1 + 200,temp_v2,temp_v1);
  if (temp_v0 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    temp_v1 = 0x2e;
  }
  else {
    temp_v1 = 0x46;
  }
  buttonHelpSetPreset(temp_v1);
  if (*(char *)(param_1 + 0x5a4) != '\0') {
    temp_v0 = dataLookupDisplayName(temp_v5,*(unsigned int *)(param_1 + 0xa5b4));
    if (temp_v0 == 0) {
      temp_v0 = 0x40226c;
    }
    textFormatBuffer(temp_v4,"%s%s",temp_v0,DAT_0043d998);
    FUN_0029ee6c(temp_v4,0x323232ff);
  }
  else {
    temp_v0 = flaggedValueHolderGetTotal(param_1 + 0x20);
    FUN_0029da34(0,1,*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
  }
  FUN_002a0cc8(0);
  *(unsigned int *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  pointConvertToFloat(param_1 + 200,0,0);
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar4 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar4 = *puVar4 | 0x1000;
  temp_v0 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233670(param_1 + 0x55c,0x1d,0x40e,temp_v0);
    return;
  }
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_00233670(param_1 + 0x55c,0x1c,0x1030,temp_v0);
  return;
}

} /* extern "C" */
