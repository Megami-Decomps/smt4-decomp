/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a2238` (_code @ 0x4a2238, 0x1c8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysPlaySe(int);
int uiSpriteBankApplyPreset(int *, int);
int FUN_00275bc8(int, int);
int FUN_0032d0c8(...);
int FUN_0035ad50(int, unsigned char [300]);
int panelSetTarget(unsigned int, int);
int FUN_0037c8e4(int, int);
int messageSetActiveMode(int);
int FUN_004a3b48(...);
int FUN_004a8750(unsigned int, int, int);

typedef int romwright_code(...);
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp140; /* 0x140: local_140 */
} param_1_stack;

extern unsigned char g_animatedPageSelection; /* 0x57f0b4 */

/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: uiSpriteBankApplyPreset. */
extern unsigned int slotRecordFindById(unsigned short);
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_0032d0c8. */
/* Supplied declaration required: FUN_0035ad50. */
/* Supplied declaration required: panelSetTarget. */
/* Supplied declaration required: FUN_0037c8e4. */
/* Supplied declaration required: messageSetActiveMode. */
/* Supplied declaration required: FUN_004a3b48. */
extern int utilityReturnSuccess(int);
/* Supplied declaration required: FUN_004a8750. */
extern int flaggedValueHolderGetTotal(int *);


void FUN_004a2238(int *param_1)

{
/* irregular: 10 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [300];
  
  temp_v1 = (**(romwright_code **)(*param_1 + 0x24))(param_1);
  if ((temp_v1 != 0) && (temp_v1 = utilityReturnSuccess((int)param_1 + 0x96), temp_v1 == 0)) {
    temp_v1 = param_1[0x215];
    FUN_00275bc8(temp_v1,param_1[0x216]);
    param_1[0x217] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    param_1[5] = 1;
    param_1[6] = 0;
    *(unsigned char *)((int)param_1 + 0x861) = 1;
    if ((char)param_1[0x218] != '\0') {
      temp_v1 = flaggedValueHolderGetTotal(param_1 + 8);
      temp_v1 = param_1[temp_v1 * 8 + 0x21a];
      sysPlaySe(0x4e);
      temp_v2 = slotRecordFindById((short)temp_v1);
      FUN_0032d0c8(0,1,(short)temp_v1,temp_v2);
    }
    else {
      temp_v1 = flaggedValueHolderGetTotal(param_1 + 8);
      temp_v0 = *(unsigned short *)(param_1 + temp_v1 * 8 + 0x21a);
      temp_v3 = (unsigned int)temp_v0;
      FUN_004a8750(temp_v3,*(unsigned char *)((int)param_1 + 0x861),0);
      FUN_0037c8e4(1,0);
      temp_v1 = FUN_002a4b28(temp_v0);
      if (temp_v1 != 0) {
        panelSetTarget(-temp_v3,0);
      }
      else {
        messageSetActiveMode(1);
      }
      sysPlaySe(0x2f);
      FUN_0035ad50(temp_v0,temp_v4);
      temp_v1 = FUN_002a4b28(temp_v0);
      if (temp_v1 != 0) {
        FUN_0032d0c8(0,1,temp_v0,temp_v4);
      }
      else {
        FUN_0032d0c8(0,2,temp_v0,temp_v4);
      }
    }
    uiSpriteBankApplyPreset(param_1 + 0x37,8);
    uiSpriteBankApplyPreset(param_1 + 0x37,9);
    (*(unsigned int *)((unsigned char *)&g_animatedPageSelection + 0x4)) = 0xffffffff;
    FUN_004a3b48(param_1);
    return;
  }
  return;
}

} /* extern "C" */
