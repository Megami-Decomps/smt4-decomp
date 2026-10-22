/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8ecc` (_code @ 0x3a8ecc, 0x104 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int pointConvertToFloat(...);
int FUN_0029da34(...);
int FUN_0029ee6c(...);
int FUN_002a0cc8(...);
int FUN_002b8ee0(...);
int textFormatBuffer(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0043d998; /* 0x43d998 */

extern int dataLookupDisplayName(unsigned char *, unsigned int);
extern int buttonHelpIsNotActive(void);
/* Supplied declaration required: pointConvertToFloat. */
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_0029da34. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a0cc8. */
/* Supplied declaration required: FUN_002b8ee0. */
/* Supplied declaration required: textFormatBuffer. */
extern unsigned int vec2GetYInt(int);
extern unsigned int vec2GetXInt(int);


void FUN_003a8ecc(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [8];
  
  temp_v2 = param_1 + 0xfc;
  FUN_002b8ee0(temp_v2,0);
  temp_v0 = vec2GetYInt(temp_v2);
  temp_v1 = vec2GetXInt(temp_v2);
  pointConvertToFloat(param_1 + 200,temp_v1,temp_v0);
  if ((*(char *)(param_1 + 0x186) != '\0') && (temp_v2 = buttonHelpIsNotActive(), temp_v2 != 0)) {
    FUN_002a0cc8(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    pointConvertToFloat(param_1 + 200,0,0);
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      temp_v2 = flaggedValueHolderGetTotal(param_1 + 0x20);
      FUN_0029da34(0,1,*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x5ac));
      return;
    }
    temp_v2 = dataLookupDisplayName(temp_v4,*(unsigned int *)(param_1 + 0xa5b4));
    if (temp_v2 == 0) {
      temp_v2 = 0x40226c;
    }
    textFormatBuffer(temp_v3,"%s%s",temp_v2,DAT_0043d998);
    FUN_0029ee6c(temp_v3,0x323232ff);
  }
  return;
}

} /* extern "C" */
