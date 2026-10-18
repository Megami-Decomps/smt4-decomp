/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a90ec` (_code @ 0x3a90ec, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned int DAT_0043d998; /* 0x43d998 */

extern int FUN_0022cc38(unsigned char *, unsigned int);
extern int FUN_00231318(void);
/* Supplied declaration required: FUN_002313d4. */
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_0029dcd4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b9220. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);


void FUN_003a90ec(int param_1)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3 [64];
  unsigned char temp_v4 [8];
  
  temp_v2 = param_1 + 0xfc;
  FUN_002b9220(temp_v2,0);
  temp_v0 = FUN_002bef70(temp_v2);
  temp_v1 = FUN_002bef7c(temp_v2);
  FUN_002313d4(param_1 + 200,temp_v1,temp_v0);
  if ((*(char *)(param_1 + 0x186) != '\0') && (temp_v2 = FUN_00231318(), temp_v2 != 0)) {
    FUN_002a0f68(0);
    *(unsigned int *)(param_1 + 0x14) = 2;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002313d4(param_1 + 200,0,0);
    if (*(char *)(param_1 + 0x5a4) == '\0') {
      temp_v2 = FUN_002337a0(param_1 + 0x20);
      FUN_0029dcd4(0,1,*(unsigned short *)(param_1 + temp_v2 * 0x20 + 0x5ac));
      return;
    }
    temp_v2 = FUN_0022cc38(temp_v4,*(unsigned int *)(param_1 + 0xa5b4));
    if (temp_v2 == 0) {
      temp_v2 = 0x4022bc;
    }
    FUN_002be7fc(temp_v3,"%s%s",temp_v2,DAT_0043d998);
    FUN_0029f10c(temp_v3,0x323232ff);
  }
  return;
}
