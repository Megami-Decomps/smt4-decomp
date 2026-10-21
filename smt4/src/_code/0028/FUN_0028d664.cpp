/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d664` (_code @ 0x28d664, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00262210(...);
int mapDepartSetTarget(...);
int FUN_00295eb0(...);
int FUN_00297060(...);
int scrScriptProcessDestroy(...);
int positionStateSet(...);
int FUN_002bd82c(...);
int FUN_002bd954(...);
int paramsInit(...);
int asdMemFree(...);
int memClear(...);
int asdMemAlloc(...);
int taskCreateDraw(...);
int asdProcessCreateSimple(...);
int drawParameterBlockClear(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_001c0c38(...); /* 0x1c0c38 */
extern unsigned char LAB_002109c8; /* 0x2109c8 */
extern int FUN_002109cc(...); /* 0x2109cc */
extern unsigned char LAB_0028d974; /* 0x28d974 */
extern unsigned char LAB_0028d988; /* 0x28d988 */
extern unsigned char DAT_00402538; /* 0x402538 */
extern unsigned char DAT_00402544; /* 0x402544 */
extern unsigned char DAT_00402550; /* 0x402550 */
extern signed char g_buttonHelp; /* 0x43da28 */
extern unsigned int *DAT_0043da2c; /* 0x43da2c */
extern unsigned int DAT_0043da30; /* 0x43da30 */
extern unsigned int DAT_0043da34; /* 0x43da34 */

/* Supplied declaration required: FUN_00262210. */
/* Supplied declaration required: mapDepartSetTarget. */
/* Supplied declaration required: FUN_00295eb0. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: positionStateSet. */
/* Supplied declaration required: FUN_002bd82c. */
extern unsigned int asdTextCreate(unsigned int);
/* Supplied declaration required: FUN_002bd954. */
/* Supplied declaration required: paramsInit. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: memClear. */
/* Supplied declaration required: asdMemAlloc. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: drawParameterBlockClear. */


void FUN_0028d664(unsigned int *param_1,unsigned char param_2)

{
/* irregular: 17 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *(unsigned char *)(param_1 + 2) = param_2;
  *param_1 = 0;
  if (param_1[3] != 0) {
    asdMemFree();
    param_1[3] = 0;
  }
  if (param_1[4] != 0) {
    asdMemFree();
    param_1[4] = 0;
  }
  if (param_1[5] != 0) {
    scrScriptProcessDestroy();
    param_1[5] = 0;
  }
  mapDepartSetTarget(0xffffffff,0xffffffff);
  if (g_buttonHelp < '\x01') {
    if (DAT_0043da2c == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x100;
      asdMemAlloc(0x100,0x100,0,0x564,1);
      DAT_0043da2c = puVar3;
    }
    puVar3 = DAT_0043da2c;
    memClear();
    puVar4 = &LAB_0028d974;
    asdProcessCreateSimple(&LAB_0028d974,1,0,0,FUN_001c0c38,&LAB_002109c8,0);
    *puVar3 = (unsigned int)puVar4;
    puVar5 = &LAB_0028d988;
    taskCreateDraw(&LAB_0028d988,0xe6,0,0,FUN_002109cc,0,0,puVar4);
    puVar3[2] = (unsigned int)puVar5;
    puVar1 = DAT_0043da2c;
    drawParameterBlockClear(DAT_0043da2c + 5);
    paramsInit(puVar1 + 5,0x402506,0x30,&DAT_00402538,0xc,&DAT_00402544,0xc,0,0,&DAT_00402550,0xa8
                );
    temp_v1 = 0;
    do {
      FUN_002bd954(puVar1 + temp_v1 * 0x23 + 0xd,0x12,3,puVar1 + 5,0x10);
      FUN_00262210(puVar1 + temp_v1 * 0x23 + 0xd,0x12,temp_v1 + 0x11,3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    FUN_002bd954(puVar1 + 0xdf,0x12,0,puVar1 + 5,0x10);
    FUN_002bd954(puVar1 + 0x102,0x12,1,puVar1 + 5,0x10);
    puVar2 = DAT_0043da2c;
    *(unsigned char *)(DAT_0043da2c + 0x132) = 0;
    temp_v1 = 0;
    do {
      *(unsigned short *)((int)puVar2 + temp_v1 * 0x8c + 0x3b6) = 2;
      FUN_00295eb0(puVar2 + temp_v1 * 0x23 + 0xdf,0x12,0);
      *(unsigned char *)(puVar2 + temp_v1 * 0x23 + 0xee) = 1;
      puVar2[temp_v1 * 0x23 + 0xe2] = 0;
      temp_v2 = temp_v1 + 1;
      puVar2[temp_v1 * 0x23 + 0xe3] = 0;
      puVar2[temp_v1 * 0x23 + 0xe4] = 0;
      temp_v1 = temp_v2;
    } while (temp_v2 < 2);
    *(unsigned char *)((int)puVar1 + 0x4c5) = 0;
    *(unsigned char *)((int)puVar1 + 0x4c6) = 1;
    *(unsigned char *)(puVar1 + 0x131) = 1;
    *(unsigned char *)((int)puVar1 + 0x4c7) = 0;
    temp_v0 = asdTextCreate(0);
    puVar3[0x156] = temp_v0;
    FUN_002bd82c(temp_v0,0x323232ff);
    positionStateSet(puVar3[0x156],0,0x646464ff);
    temp_v0 = DAT_0043da34;
    FUN_00297060(DAT_0043da34,DAT_0043da30);
    puVar3[0x158] = temp_v0;
  }
  g_buttonHelp = g_buttonHelp + '\x01';
  return;
}

} /* extern "C" */
