/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00296774` (_code @ 0x296774, 0x1b8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00292c0c(void);
int FUN_00292ca0(int);
int FUN_00295214(int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_0029a128(int);
int FUN_0029c4c8(int);
int FUN_0029dfc0(int);
int FUN_0029e874(int);
int FUN_0029ee6c(int, int);
int FUN_002b827c(int);
int buttonHelpSetPreset(...);
int ifTouchRegionRemove(void);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

extern unsigned int FUN_00292bf0(void);
/* Supplied declaration required: FUN_00292c0c. */
/* Supplied declaration required: FUN_00292ca0. */
/* Supplied declaration required: FUN_00295214. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
/* Supplied declaration required: FUN_0029a128. */
/* Supplied declaration required: FUN_0029c4c8. */
/* Supplied declaration required: FUN_0029dfc0. */
/* Supplied declaration required: FUN_0029e874. */
/* Supplied declaration required: FUN_0029ee6c. */
extern unsigned int *gameGetSlotTable(void);
/* Supplied declaration required: FUN_002b827c. */
/* Supplied declaration required: buttonHelpSetPreset. */
/* Supplied declaration required: ifTouchRegionRemove. */


void FUN_00296774(int param_1,int param_2)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  
  piVar5 = (int *)(param_1 + 0x352c);
  *(int *)(param_1 + 0x3530) = *piVar5;
  *piVar5 = param_2;
  *(unsigned int *)(param_1 + 0x3534) = 0;
  *(unsigned int *)(param_1 + 0x353c) = 0;
  *(unsigned int *)(param_1 + 0x3544) = 0;
  temp_v1 = 0;
  if (temp_v1 < *(short *)(param_1 + 0x357c)) {
    do {
      ifTouchRegionRemove();
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < *(short *)(param_1 + 0x357c));
  }
  *(unsigned short *)(param_1 + 0x357c) = 0;
  temp_v1 = *piVar5;
  if (temp_v1 == 0xe) {
    temp_v2 = 0xdf;
  }
  else if (temp_v1 < 0xf) {
    if (temp_v1 == 1) {
      temp_v2 = 0x62;
    }
    else if (temp_v1 == 10) {
      temp_v2 = 0x9e;
    }
    else if (temp_v1 == 0xb) {
      temp_v2 = 0x65;
    }
    else {
      if (temp_v1 != 0xd) goto LAB_00296874;
      temp_v2 = 0x66;
    }
  }
  else if (temp_v1 == 0xf) {
    temp_v2 = 0x68;
  }
  else if (temp_v1 == 0x10) {
    temp_v2 = 0x6a;
  }
  else if (temp_v1 == 0x11) {
    temp_v2 = 0xe1;
  }
  else {
    if (temp_v1 != 0x12) goto LAB_00296874;
    temp_v2 = 100;
  }
  FUN_0029ee6c(0,0x323232ff);
  buttonHelpSetPreset(temp_v2);
LAB_00296874:
  if (*piVar5 != 0x14) {
    return;
  }
  FUN_0029a128(0);
  FUN_00292ca0(0);
  FUN_0029dfc0(0);
  FUN_0029e874(0);
  FUN_0029c4c8(0);
  FUN_00292c0c();
  temp_v0 = FUN_00292bf0();
  if ((temp_v0 != 0) && (puVar2 = (unsigned int *)gameGetSlotTable(), temp_v0 <= *puVar2)) {
    *piVar5 = 0x13;
    buttonHelpSetPreset(0x90);
    scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x3568),5);
    return;
  }
  FUN_00295214(0);
  FUN_002b827c(3);
  return;
}

} /* extern "C" */
