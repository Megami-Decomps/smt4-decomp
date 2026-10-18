/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8b14` (_code @ 0x3a8b14, 0x190 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

extern unsigned int DAT_0043d998; /* 0x43d998 */

extern int FUN_0022cc38(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002313d4. */
extern int FUN_002334d8(int, int);
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_00233804. */
/* Supplied declaration required: FUN_0029dcd4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002bef70(int);
extern unsigned int FUN_002bef7c(int);


void FUN_003a8b14(int param_1)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  int temp_v3;
  unsigned char temp_v4 [64];
  unsigned char temp_v5 [4];
  
  temp_v0 = FUN_002334d8(param_1 + 0xdc,(int)*(short *)(param_1 + 0xa5b2));
  temp_v3 = param_1 + *(short *)(param_1 + 0xa5b2) * 0x8c + 0xfc;
  temp_v1 = FUN_002bef70(temp_v3);
  temp_v2 = FUN_002bef7c(temp_v3);
  FUN_002313d4(param_1 + 200,temp_v2,temp_v1);
  if (temp_v0 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    temp_v1 = 0x2e;
  }
  else {
    temp_v1 = 0x46;
  }
  FUN_002b8b78(temp_v1);
  if (*(char *)(param_1 + 0x5a4) != '\0') {
    temp_v0 = FUN_0022cc38(temp_v5,*(unsigned int *)(param_1 + 0xa5b4));
    if (temp_v0 == 0) {
      temp_v0 = 0x4022bc;
    }
    FUN_002be7fc(temp_v4,"%s%s",temp_v0,DAT_0043d998);
    FUN_0029f10c(temp_v4,0x323232ff);
  }
  else {
    temp_v0 = FUN_002337a0(param_1 + 0x20);
    FUN_0029dcd4(0,1,*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac));
  }
  FUN_002a0f68(0);
  *(unsigned int *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_002313d4(param_1 + 200,0,0);
  (**(romwright_code **)(**(int **)(param_1 + 0x590) + 8))(*(int **)(param_1 + 0x590),param_1 + 0x20);
  puVar4 = (unsigned short *)(*(int *)(param_1 + 0x590) + 4);
  *puVar4 = *puVar4 | 0x1000;
  temp_v0 = *(int *)(param_1 + 0x28);
  if (*(char *)(param_1 + 0x5a4) == '\0') {
    if (temp_v0 >= 10) {
      temp_v0 = 10;
    }
    FUN_00233804(param_1 + 0x55c,0x1d,0x40e,temp_v0);
    return;
  }
  if (temp_v0 >= 10) {
    temp_v0 = 10;
  }
  FUN_00233804(param_1 + 0x55c,0x1c,0x1030,temp_v0);
  return;
}
