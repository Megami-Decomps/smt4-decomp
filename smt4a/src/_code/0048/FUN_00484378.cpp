/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00484378` (_code @ 0x484378, 0x22c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

struct NameEntryMenu;
struct NameBuffer;

extern "C" {

int sysPlaySe(int);
int FUN_00183e58(void);
int uiSpriteSetImageKeyframe(int, int, int);
int scrScriptProcessStartEntry(unsigned int, int);
int FUN_003180c4(int, int *);
int logFormatBuffer(int *, int, int);
void nameEntryCopyEditedName(NameEntryMenu*, NameBuffer*);
int stateSetterEnterState(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_1_stack;

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_00183e58. */
/* Supplied declaration required: uiSpriteSetImageKeyframe. */
extern int scrRunOpcodesStub(unsigned int);
extern int messageMainIsIdle(void);
/* Supplied declaration required: scrScriptProcessStartEntry. */
extern int FUN_002a4b74(void);
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: logFormatBuffer. */
extern int convertToBufferAndStore(unsigned int *, int);
/* Supplied declaration required: stateSetterEnterState. */


void FUN_00484378(int param_1)

{
/* irregular: 1 goto(s); 8 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int *piVar3;
  int temp_v2;
  short temp_v3;
  int uStack_30;
  
  piVar3 = &uStack_30;
  if (*(char *)(param_1 + 0x270) != '\0') {
    temp_v1 = scrRunOpcodesStub(*(unsigned int *)(param_1 + 0x26c));
    if (temp_v1 == 2) {
      temp_v1 = FUN_002a4b74();
      if (temp_v1 != 0) {
        stateSetterEnterState(param_1,2);
        sysPlaySe(0x97);
        return;
      }
      uiSpriteSetImageKeyframe(param_1 + 0x3ac,0,1);
      if (*(unsigned char *)(param_1 + 0x261) >= 2 && *(unsigned char *)(param_1 + 0x261) != 4) {
        FUN_00183e58();
        stateSetterEnterState(param_1,7);
        return;
      }
      nameEntryCopyEditedName((NameEntryMenu*)param_1,(NameBuffer*)&uStack_30);
      temp_v1 = 0;
      do {
        temp_v3 = -0x7ec0;
        if (-1 < (char)temp_v1) {
          temp_v2 = param_1 + (char)temp_v1 * 2;
          temp_v3 = (unsigned short)*(unsigned char *)(temp_v2 + 0xb0) * 0x100 + (unsigned short)*(unsigned char *)(temp_v2 + 0xb1);
        }
        temp_v2 = 0;
        do {
          if (*(short *)(temp_v2 * 2 + 0x532c10) == temp_v3) {
            temp_v0 = *(unsigned short *)(temp_v2 * 2 + 0x532cfe);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            goto LAB_00484524;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x77);
        temp_v2 = 0;
        do {
          if (*(short *)(temp_v2 * 2 + 0x532dec) == temp_v3) {
            temp_v0 = *(unsigned short *)(temp_v2 * 2 + 0x532e40);
            *(char *)((int)&uStack_30 + temp_v1 * 2) = (char)(temp_v0 >> 8);
            *(char *)((int)&uStack_30 + temp_v1 * 2 + 1) = (char)temp_v0;
            break;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 0x2a);
LAB_00484524:
        temp_v1 = temp_v1 + 1;
        if (temp_v1 >= 9) {
          logFormatBuffer(&uStack_30,param_1 + 0x56e,1);
          temp_v1 = convertToBufferAndStore((unsigned int *)&uStack_30,param_1 + 0x56e);
          if ((*piVar3 == 0) && (temp_v1 < 6)) {
            FUN_00183e58();
            stateSetterEnterState(param_1,7);
            return;
          }
          stateSetterEnterState(param_1,6);
          scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x26c),4);
          return;
        }
      } while( 1 );
    }
  }
  else {
    temp_v1 = messageMainIsIdle();
    if (temp_v1 != 0) {
      nameEntryCopyEditedName((NameEntryMenu*)param_1,(NameBuffer*)&uStack_30);
      FUN_003180c4(0x32,&uStack_30);
      scrScriptProcessStartEntry(*(unsigned int *)(param_1 + 0x26c),1);
      *(unsigned char *)(param_1 + 0x270) = 1;
      sysPlaySe(0x9c);
    }
  }
  return;
}

} /* extern "C" */
