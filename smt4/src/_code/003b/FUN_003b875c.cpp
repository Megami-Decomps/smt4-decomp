/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b875c` (_code @ 0x3b875c, 0x2e8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match3_NodeEnable.h"

extern "C" {
// The fields of g_gameState this function uses.
struct GameStateView {
    u8 pad000[0x100];
    unsigned char f0049fa1c; /* 0x100 */
};
extern GameStateView g_gameState;


int modelSetVisible(unsigned int, int);
int uiClampScrollOffset(int, int);
int FUN_00232848(void);
int FUN_002328b4(void);
int FUN_00234cd8(unsigned int, int, int);
void nodeOwnerSetEnabled(NodeEnableOwner* owner, int enabled);
int FUN_002758d8(void);
int objModelCreateFromSource(unsigned int, unsigned int, unsigned int);
int objModelDestroy(unsigned int);
int FUN_003b9c00(int);
int VectorSignedToFloat(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;



/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_0022b238(int);
/* Supplied declaration required: modelSetVisible. */
/* Supplied declaration required: uiClampScrollOffset. */
extern int FUN_0022b8c0(int);
/* Supplied declaration required: FUN_00232848. */
/* Supplied declaration required: FUN_002328b4. */
extern unsigned short flaggedValueHolderGetTotal(int);
/* Supplied declaration required: FUN_00234cd8. */
/* Supplied declaration required: nodeOwnerSetEnabled. */
extern int inputIsQuestConfirmPressed(void);
/* Supplied declaration required: FUN_002758d8. */
extern int inputIsQuestMenuPressed(void);
/* Supplied declaration required: objModelCreateFromSource. */
extern int gameFlagIsSet(unsigned int);
/* Supplied declaration required: objModelDestroy. */
/* Supplied declaration required: FUN_003b9c00. */
extern int FUN_003bb620(int);


void FUN_003b875c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int *puVar10;
  unsigned int in_fpscr;
  float temp_v9;
  float temp_v10;
  unsigned int temp_v11;
  
  temp_v2 = FUN_0022b8c0(param_1 + 0x9c);
  temp_v3 = FUN_003bb620(param_1 + 0x9c);
  puVar10 = (unsigned int *)(param_1 + 0xe5c);
  if ((*(char *)(param_1 + 0xe58) != '\0') &&
     (*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
    if ((!(*(short *)(temp_v2 + 0x28) == 0 || *(short *)(temp_v2 + 0x28) == 6)) ||
       (*(char *)(*(int *)(param_1 + 0xe5c) + 0x14) != '\0')) {
      modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),0);
      temp_v4 = *puVar10;
      temp_v7 = 1;
    }
    else {
      modelSetVisible(*(unsigned int *)(param_1 + 0xe5c),1);
      temp_v4 = *puVar10;
      temp_v7 = 0;
    }
    nodeOwnerSetEnabled((NodeEnableOwner*)temp_v4,temp_v7);
  }
  temp_v5 = FUN_0022b8c0(param_1 + 0x9c);
  if ((temp_v5 != temp_v2) || ((*(unsigned int *)(param_1 + 0x20) & 0x40000000) != 0)) {
    temp_v5 = FUN_0022b8c0(param_1 + 0x9c);
    temp_v0 = *(short *)(temp_v5 + 0x22);
    temp_v5 = FUN_0022b8c0(param_1 + 0x9c);
    temp_v5 = (int)*(short *)(temp_v5 + 0x24);
    temp_v9 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) | 0x1000;
    temp_v10 = (float)VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v4 = 10;
    *(unsigned int *)(param_1 + 0x60) = *(unsigned int *)(param_1 + 0x58);
    *(unsigned int *)(param_1 + 100) = *(unsigned int *)(param_1 + 0x5c);
    *(float *)(param_1 + 0x68) = temp_v9 - 200.0f;
    *(float *)(param_1 + 0x6c) = temp_v10 - 120.0f;
    uiClampScrollOffset(param_1,param_1 + 0x60);
    uiClampScrollOffset(param_1,param_1 + 0x68);
    *(unsigned int *)(param_1 + 0x78) = *(unsigned int *)(param_1 + 0x70);
    temp_v11 = VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v7 = VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(unsigned int *)(param_1 + 0x7c) = *(unsigned int *)(param_1 + 0x74);
    *(unsigned int *)(param_1 + 0x80) = temp_v7;
    *(unsigned int *)(param_1 + 0x84) = temp_v11;
    *(unsigned int *)(param_1 + 0x8c) = temp_v4;
    *(unsigned int *)(param_1 + 0x88) = 0;
    temp_v1 = flaggedValueHolderGetTotal(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v1;
    if (*(char *)(param_1 + 0xe58) != '\0') {
      temp_v5 = FUN_0022b238(param_1 + 0x9c);
      temp_v8 = (int)*(short *)(temp_v5 + 0x28);
      if (((*(short *)(param_1 + 0x3c) != 4 && *(short *)(param_1 + 0x3c) != 3) ||
          (temp_v8 != 0 && temp_v8 != 6)) ||
         (*(short *)(temp_v2 + 0x28) != 0 && *(short *)(temp_v2 + 0x28) != 6)) {
        FUN_00234cd8(*(unsigned int *)(param_1 + 0xe5c),temp_v8,0);
      }
      if (-1 < *(char *)(temp_v5 + 0x2b)) {
        objModelDestroy(*(unsigned int *)(param_1 + 0xe5c));
        temp_v2 = param_1 + *(char *)(temp_v5 + 0x2b) * 4;
        objModelCreateFromSource(*puVar10,*(unsigned int *)(temp_v2 + 0xe60),*(unsigned int *)(temp_v2 + 0xe88));
      }
    }
  }
  temp_v6 = *(unsigned int *)(param_1 + 0x20);
  if (temp_v3 != 0) {
    if ((temp_v6 & 0x40000000) == 0) {
      FUN_002328b4();
    }
  }
  else if ((temp_v6 & 0x40000000) == 0) {
    if ((*(short *)((unsigned char *)&g_gameState.f0049fa1c + 0x64)) != 0) {
      *(unsigned int *)(param_1 + 0x28) = 8;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    if (((temp_v6 & 0x80) != 0) ||
       ((temp_v2 = gameFlagIsSet(0x404), temp_v2 != 0 && (temp_v2 = inputIsQuestConfirmPressed(), temp_v2 != 0)))) {
      *(unsigned int *)(param_1 + 0x20) = *(unsigned int *)(param_1 + 0x20) & 0xffffff7f;
      FUN_002758d8();
      *(unsigned int *)(param_1 + 0x28) = 7;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      return;
    }
    temp_v2 = inputIsQuestMenuPressed();
    if (temp_v2 == 0) {
      return;
    }
    if (*(short *)(*(int *)(param_1 + 0xd5c) + 0x86) != 0) {
      return;
    }
    FUN_003b9c00(param_1);
    FUN_00232848();
    return;
  }
  *(unsigned int *)(param_1 + 0x20) = (*(unsigned int *)(param_1 + 0x20) & 0xbfffffff) | 0x2000;
  *(unsigned char *)(param_1 + 0x6ce) = 1;
  return;
}

} /* extern "C" */
