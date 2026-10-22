/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00397b40` (_code @ 0x397b40, 0x268 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct NameTask;
struct NameBuffer;

extern "C" {

int logFormatBuffer(int *, int, int);
void nameEntryCopyEditedName(NameTask*, NameBuffer*);
int buttonHelpResetSlots(void);
int textEncodeFontSlot(int, int *);
int FUN_00296ee0(int, int);
int scrScriptProcessStartEntry(unsigned int, int);
int uiSpriteSetImageKeyframe(int, int, int);
int buttonHelpSetPreset(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

extern int scrRunOpcodesStub(unsigned int);
/* Supplied declaration required: logFormatBuffer. */
/* Supplied declaration required: buttonHelpResetSlots. */
/* Supplied declaration required: textEncodeFontSlot. */
/* Supplied declaration required: FUN_00296ee0. */
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int messageMainGetChoiceResult(void);
extern int sys43e188GetState(void);
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
/* Supplied declaration required: buttonHelpSetPreset. */
extern int FUN_00309fcc(unsigned int *, int);


void FUN_00397b40(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int *piVar3;
  short temp_v2;
  int temp_v3;
  int uStack_30;
  
  piVar3 = &uStack_30;
  if (*(char *)(param_1 + 0x658) != '\0') {
    temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x654));
    if (temp_v1 == 2) {
      temp_v1 = messageMainGetChoiceResult();
      if (temp_v1 != 0) {
        FUN_00296ee0(param_1,2);
        if (*(char *)(param_1 + 0x29) != '\0') {
          buttonHelpSetPreset(0x97);
          return;
        }
        if (*(char *)(param_1 + 0x20) == '\x02' || *(char *)(param_1 + 0x20) == '\x06') {
          buttonHelpSetPreset(0x96);
          return;
        }
        buttonHelpSetPreset(0x95);
        return;
      }
      uiSpriteSetImageKeyframe(param_1 + 0x794,0,1);
      if (*(unsigned char *)(param_1 + 0x649) >= 2) {
        buttonHelpResetSlots();
        FUN_00296ee0(param_1,7);
        return;
      }
      nameEntryCopyEditedName((NameTask*)param_1,(NameBuffer*)&uStack_30);
      temp_v1 = 0;
      do {
        temp_v2 = -0x7ec0;
        if (-1 < (char)temp_v1) {
          temp_v3 = param_1 + (char)temp_v1 * 2;
          temp_v2 = (unsigned short)*(unsigned char *)(temp_v3 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v3 + 0xb1);
        }
        temp_v3 = 0;
        do {
          if (*(short *)(temp_v3 * 2 + 0x405070) == temp_v2) {
            temp_v0 = *(unsigned short *)(temp_v3 * 2 + 0x405278);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            goto LAB_00397cf4;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x104);
        temp_v3 = 0;
        do {
          if (*(short *)(temp_v3 * 2 + 0x405480) == temp_v2) {
            temp_v0 = *(unsigned short *)(temp_v3 * 2 + 0x405528);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            break;
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 0x54);
LAB_00397cf4:
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 9) {
          logFormatBuffer(&uStack_30,param_1 + 0x94e,1);
          temp_v1 = FUN_00309fcc((unsigned int *)&uStack_30,param_1 + 0x94e);
          if ((*piVar3 == 0) && (temp_v1 < 6)) {
            buttonHelpResetSlots();
            FUN_00296ee0(param_1,7);
            return;
          }
          FUN_00296ee0(param_1,6);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x654),4);
          return;
        }
      } while( 1 );
    }
  }
  else {
    temp_v1 = sys43e188GetState();
    if (temp_v1 != 0) {
      nameEntryCopyEditedName((NameTask*)param_1,(NameBuffer*)&uStack_30);
      textEncodeFontSlot(0x32,&uStack_30);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x654),1);
      *(unsigned char *)(param_1 + 0x658) = 1;
      buttonHelpSetPreset(0x9a);
    }
  }
  return;
}

} /* extern "C" */
