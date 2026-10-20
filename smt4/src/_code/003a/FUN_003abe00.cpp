/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003abe00` (_code @ 0x3abe00, 0xd4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022e0fc(int, int);
int FUN_0029e17c(void);
int buttonHelpSetPreset(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0022e0fc. */
extern int FUN_0029e130(void);
/* Supplied declaration required: FUN_0029e17c. */
extern int useCounterIsFinished(void);
extern int FUN_002a0d0c(void);
/* Supplied declaration required: buttonHelpSetPreset. */


void FUN_003abe00(int param_1)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  
  temp_v1 = useCounterIsFinished();
  if (temp_v1 != 0) {
    FUN_0029e17c();
    buttonHelpSetPreset(0x3e);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
    return;
  }
  temp_v1 = FUN_0029e130();
  if (temp_v1 == 0x4b) {
    return;
  }
  if (*(short *)(param_1 + 0x5a8) == 0) {
    return;
  }
  temp_v1 = FUN_002a0d0c();
  pbVar3 = (unsigned char *)(temp_v1 + 0x10);
  temp_v2 = *pbVar3 & 0x7f;
  if (temp_v2 == 0xb) {
    temp_v0 = '\x1c';
  }
  else {
    if (temp_v2 < 0xc) {
      if (temp_v2 == 3) {
        temp_v0 = '\x1a';
        if ((*pbVar3 & 0x80) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
        return;
      }
      if (temp_v2 == 7) {
        temp_v0 = '\x18';
        if ((*pbVar3 & 0x80) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
        return;
      }
    }
    else {
      if (temp_v2 == 0xf) {
        temp_v0 = '\x1e';
        if ((*pbVar3 & 0x80) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
        return;
      }
      if (temp_v2 == 0x11) {
        temp_v0 = ' ';
        if ((*pbVar3 & 0x80) != 0) {
          temp_v0 = temp_v0 + '\x01';
        }
        FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
        return;
      }
    }
    temp_v0 = '\x1c';
    *pbVar3 = (*pbVar3 & 0x80) | 0xb;
  }
  if ((*pbVar3 & 0x80) != 0) {
    temp_v0 = temp_v0 + '\x01';
  }
  FUN_0022e0fc(param_1 + 0x5a8,temp_v0);
  return;
}

} /* extern "C" */
