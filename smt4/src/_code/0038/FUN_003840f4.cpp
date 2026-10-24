/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003840f4` (_code @ 0x3840f4, 0x318 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {

void nodeOwnerSetEnabled(NodeEnableOwner* owner, int enabled);
int FUN_00234f5c(unsigned int, unsigned int, int);
int FUN_00235250(void);
int modelSetAnimationChannels(...);
int FUN_00282bfc(...);
int FUN_00287528(int);
int FUN_00287704(...);
int asdLoadFileAsyncSimple(unsigned char [64], int, int);
int asdMdlManagerCreateLoaded(unsigned char *, int);
int gameCounterAddSaturating(...);
int FUN_002a0428(void);
int FUN_002a09b4(unsigned char [144], int);
int textFormatBuffer(...);
int asdOperatorNew(void);
int memClear(void);
void animOwnerSetScale(unsigned int, float);
int FUN_002e1230(unsigned int, int);
int sysResetTimestampState(void);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp140; /* 0x140: local_140 */
} param_4_stack;

extern unsigned char LAB_00384418; /* 0x384418 */
extern unsigned char LAB_00384428; /* 0x384428 */
extern unsigned char LAB_00384440; /* 0x384440 */
extern unsigned char LAB_00384448; /* 0x384448 */
extern unsigned char LAB_00384458; /* 0x384458 */
extern unsigned char LAB_0038447c; /* 0x38447c */

/* Supplied declaration required: nodeOwnerSetEnabled. */
/* Supplied declaration required: FUN_00234f5c. */
/* Supplied declaration required: FUN_00235250. */
extern int storyModeCanProceed(unsigned char);
/* Supplied declaration required: modelSetAnimationChannels. */
/* Supplied declaration required: FUN_00282bfc. */
/* Supplied declaration required: FUN_00287528. */
/* Supplied declaration required: FUN_00287704. */
/* Supplied declaration required: asdLoadFileAsyncSimple. */
/* Supplied declaration required: asdMdlManagerCreateLoaded. */
/* Supplied declaration required: gameCounterAddSaturating. */
/* Supplied declaration required: FUN_002a0428. */
/* Supplied declaration required: FUN_002a09b4. */
/* Supplied declaration required: textFormatBuffer. */
extern int _ZN10FloatStateC1Ev(int);
/* Supplied declaration required: asdOperatorNew. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: animOwnerSetScale. */
/* Supplied declaration required: FUN_002e1230. */
extern int timerStampIsExpired(void);
/* Supplied declaration required: sysResetTimestampState. */


void FUN_003840f4(int param_1,char param_2,unsigned char param_3,unsigned char param_4)

{
/* irregular: 18 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  unsigned int *puVar5;
  int temp_v2;
  int *piVar7;
  int temp_v3;
  char temp_v4 [12];
  char *temp_v5;
  unsigned char temp_v6 [64];
  unsigned char temp_v7 [64];
  unsigned char temp_v8 [144];
  
  *(char *)(param_1 + 0x10) = param_2;
  *(unsigned char *)(param_1 + 0x11) = param_3;
  *(unsigned char *)(param_1 + 0x21) = param_4;
  if (param_2 != '\v') {
    if ('\v' >= param_2) {
      if (param_2 == '\x01') {
        *(unsigned char *)(param_1 + 0x18) = 0;
      }
      else if (param_2 == '\t') {
        temp_v0 = 2;
        *(unsigned char *)(param_1 + 0x18) = temp_v0;
      }
      else if (param_2 != '\n') {
        *(unsigned char *)(param_1 + 0x18) = 1;
      }
      else {
        temp_v0 = 3;
        *(unsigned char *)(param_1 + 0x18) = temp_v0;
      }
    }
    else if (param_2 != '\f' && param_2 != '\r') {
      *(unsigned char *)(param_1 + 0x18) = 1;
    }
    else {
      temp_v0 = 3;
      *(unsigned char *)(param_1 + 0x18) = temp_v0;
    }
  }
  else {
    temp_v0 = 3;
    *(unsigned char *)(param_1 + 0x18) = temp_v0;
  }
  temp_v1 = 0;
  temp_v5 = "quest_center/bg/hunter_company_chaos/hunter_company_chaos";
  temp_v4[0] = -100;
  temp_v4[1] = '\\';
  temp_v4[2] = 'B';
  temp_v4[3] = '\0';
  temp_v4[4] = '*';
  temp_v4[5] = ']';
  temp_v4[6] = 'B';
  temp_v4[7] = '\0';
  temp_v4[8] = -0xc;
  temp_v4[9] = '\\';
  temp_v4[10] = 'B';
  temp_v4[0xb] = '\0';
  do {
    textFormatBuffer(temp_v8,&LAB_00384418,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v1 + 1);
    puVar2 = temp_v8;
    asdMdlManagerCreateLoaded(puVar2,7);
    temp_v3 = param_1 + temp_v1 * 4;
    puVar5 = (unsigned int *)(temp_v3 + 0xd10);
    *(unsigned char **)(temp_v3 + 0xd10) = puVar2;
    FUN_002a0428();
    modelSetAnimationChannels(*puVar5,0);
    animOwnerSetScale(*puVar5, 0.0f);
    FUN_002e1230(*puVar5,0);
    textFormatBuffer(temp_v8,&LAB_00384428,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),temp_v1 + 1);
    puVar2 = temp_v8;
    asdMdlManagerCreateLoaded(puVar2,7);
    piVar7 = (int *)(temp_v3 + 0xd28);
    *(unsigned char **)(temp_v3 + 0xd28) = puVar2;
    FUN_002a0428();
    modelSetAnimationChannels(*piVar7,0);
    animOwnerSetScale(*piVar7, 1.0f);
    FUN_002e1230(*puVar5,1);
    puVar3 = (unsigned int *)*piVar7;
    temp_v1 = temp_v1 + 1;
    *puVar3 = *puVar3 | 2;
    *(unsigned char *)(*(int *)(puVar3[2] + 0x2c) + 0x1f6) = 0;
  } while (temp_v1 < 6);
  *(unsigned int *)(param_1 + 0xd44) = 0x41f00000;
  if (*(char *)(param_1 + 0x21) == '\x02') {
    textFormatBuffer(temp_v8,&LAB_00384440,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    puVar2 = temp_v8;
    asdMdlManagerCreateLoaded(puVar2,7);
    *(unsigned char **)(param_1 + 0xfb8) = puVar2;
    FUN_002a0428();
    textFormatBuffer(temp_v8,&LAB_00384448,
                 *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4));
    FUN_002a09b4(temp_v8,0);
  }
  temp_v2 = 0x17f0;
  asdOperatorNew();
  temp_v3 = 0;
  if (temp_v2 != 0) {
    memClear();
    temp_v3 = _ZN10FloatStateC1Ev(temp_v2 + 0x4cc);
    temp_v3 = temp_v3 - 0x4cc;
  }
  *(int *)(param_1 + 0xfac) = temp_v3;
  FUN_00235250();
  FUN_00234f5c(*(unsigned int *)(param_1 + 0xfac),
               *(unsigned int *)(temp_v4 + (unsigned int)*(unsigned char *)(param_1 + 0x18) * 4),0);
  nodeOwnerSetEnabled((NodeEnableOwner*)*(unsigned int *)(param_1 + 0xfac),0);
  textFormatBuffer(temp_v6,&LAB_00384458,(int)*(char *)(param_1 + 0x10));
  textFormatBuffer(temp_v7,&LAB_0038447c,(int)*(char *)(param_1 + 0x10));
  asdLoadFileAsyncSimple(temp_v6,param_1 + 0x5ac,0);
  asdLoadFileAsyncSimple(temp_v7,param_1 + 0x5b0,0);
  if (*(char *)(param_1 + 0x18) != '\x02' && *(char *)(param_1 + 0x18) != '\x03') {
    FUN_00287704();
    temp_v3 = timerStampIsExpired();
    if (temp_v3 != 0) {
      FUN_00287704(*(unsigned char *)(param_1 + 0x18));
      sysResetTimestampState();
    }
  }
  temp_v3 = storyModeCanProceed(*(unsigned char *)(param_1 + 0x18));
  if (temp_v3 != 0) {
    FUN_00287528(0);
  }
  FUN_00282bfc(0,0xff);
  FUN_00282bfc(1,0xff);
  gameCounterAddSaturating(0x1c,1);
  return;
}

} /* extern "C" */
