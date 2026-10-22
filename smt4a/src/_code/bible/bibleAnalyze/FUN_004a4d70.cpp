/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a4d70` (_code @ 0x4a4d70, 0x114 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00163aa4(...);
int FUN_0019de98(...);
int FUN_0032d0c8(...);
int FUN_003343f0(...);
int pointConvertToFloat(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0057f0a8; /* 0x57f0a8 */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int vec2GetXInt(int);
extern unsigned int vec2GetYInt(int);
/* Supplied declaration required: FUN_0019de98. */
extern int buttonHelpIsNotActive(void);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_003343f0. */
extern int dataLookupDisplayName(unsigned char *, unsigned int);
/* Supplied declaration required: pointConvertToFloat. */
extern int flaggedValueHolderGetTotal(int);


void FUN_004a4d70(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [80];
  unsigned char temp_v4 [8];
  
  temp_v2 = param_1 + 0x55c;
  *(unsigned short *)(param_1 + 0xa872) = 8;
  FUN_00163aa4(temp_v2);
  temp_v0 = vec2GetYInt(temp_v2);
  temp_v1 = vec2GetXInt(temp_v2);
  pointConvertToFloat(param_1 + 200,temp_v1,temp_v0);
  if ((*(char *)(param_1 + 0x5e6) != '\0') && (temp_v2 = buttonHelpIsNotActive(), temp_v2 != 0)) {
    FUN_003343f0(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    pointConvertToFloat(param_1 + 200,0,0);
    if (*(char *)(param_1 + 0x860) == '\0') {
      temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
      FUN_0032d0c8(0,1,*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x868));
      return;
    }
    temp_v2 = dataLookupDisplayName(temp_v4,*(unsigned int *)(param_1 + 0xa874));
    if (temp_v2 == 0) {
      temp_v2 = 0x52b5bc;
    }
    textFormatBuffer(temp_v3,"%s%s",temp_v2,DAT_0057f0a8);
    FUN_0019de98(temp_v3,0x323232ff);
  }
  return;
}

} /* extern "C" */
