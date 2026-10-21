/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ab9a4` (_code @ 0x3ab9a4, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int messageMainSetTargetFlags(int);
int FUN_0029c43c(int, int);

extern int scrRunOpcodesStub(unsigned int);
extern int FUN_00212088(void);
extern unsigned int gameSlotTableGetHeader(void);
extern int flaggedValueHolderGetTotal(int);
/* Supplied declaration required: messageMainSetTargetFlags. */
extern int FUN_00262cb0(unsigned short);
extern int FUN_0026aa78(void);
extern int FUN_002973d8(void);
/* Supplied declaration required: FUN_0029c43c. */


void FUN_003ab9a4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  
  temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v1 == 2) {
    temp_v1 = FUN_002973d8();
    if (temp_v1 == 0) {
      pcVar5 = (char *)(param_1 + 0xa5b0);
      *pcVar5 = '\0';
      temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
      temp_v4 = *(unsigned int *)(param_1 + temp_v1 * 0x20 + 0x5b4);
      temp_v2 = gameSlotTableGetHeader();
      if (temp_v2 < temp_v4) {
        *pcVar5 = '\x01';
      }
      else {
        temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
        temp_v1 = FUN_00262cb0(*(unsigned short *)(param_1 + temp_v1 * 0x20 + 0x5ac));
        if (temp_v1 != 0) {
          temp_v0 = '\x02';
          *pcVar5 = temp_v0;
        }
        else {
          temp_v1 = FUN_00212088();
          temp_v3 = FUN_0026aa78();
          if (temp_v1 >= temp_v3) {
            temp_v0 = '\x05';
            *pcVar5 = temp_v0;
          }
        }
      }
      if (*pcVar5 == '\0') {
        temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x20);
        FUN_0029c43c(-*(int *)(param_1 + temp_v1 * 0x20 + 0x5b4),0);
        *(unsigned int *)(param_1 + 0x14) = 6;
        *(unsigned int *)(param_1 + 0x18) = 0;
        return;
      }
      if (*pcVar5 == '\x05') {
        messageMainSetTargetFlags(0);
        *(unsigned int *)(param_1 + 0x14) = 9;
        *(unsigned int *)(param_1 + 0x18) = 0;
        return;
      }
      messageMainSetTargetFlags(0);
      *(unsigned int *)(param_1 + 0x14) = 8;
      *(unsigned int *)(param_1 + 0x18) = 0;
      return;
    }
    messageMainSetTargetFlags(0);
    *(unsigned int *)(param_1 + 0x14) = 3;
    *(unsigned int *)(param_1 + 0x18) = 0;
  }
  return;
}

} /* extern "C" */
