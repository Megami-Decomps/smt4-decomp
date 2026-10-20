/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341fa4` (_code @ 0x341fa4, 0x6c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(...);
int asdProcessCreateSimple(...);
int FUN_001505ac(...);
int FUN_00151408(...);
int taskCreateDraw(...);
int FUN_001527d8(...);
int asdMemoryAllocTracked(...);
int asdMemFree(...);
int scrScriptProcessDestroy(...);
int FUN_00275bc8(...);
int sysMemClear(...);
int mapPlaceSet(...);
int FUN_00387240(...);
int FUN_003872b8(...);
int Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(...);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern int FUN_0025ccc0(...); /* 0x25ccc0 */
extern unsigned char LAB_002e1698; /* 0x2e1698 */
extern int FUN_002e169c(...); /* 0x2e169c */
extern unsigned char LAB_003422f8; /* 0x3422f8 */
extern unsigned char LAB_0034230c; /* 0x34230c */
extern unsigned char DAT_0052b740; /* 0x52b740 */
extern unsigned char DAT_0052b770; /* 0x52b770 */
extern unsigned char DAT_0052b788; /* 0x52b788 */
extern unsigned char DAT_0052b7a0; /* 0x52b7a0 */
extern signed char g_buttonHelp; /* 0x57f0c4 */
extern unsigned int *DAT_0057f0c8; /* 0x57f0c8 */
extern unsigned int DAT_0057f0cc; /* 0x57f0cc */
extern unsigned int DAT_0057f0d0; /* 0x57f0d0 */

extern unsigned int spriteHandleCreate(unsigned int);
/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: FUN_001505ac. */
/* Supplied declaration required: FUN_00151408. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: asdMemoryAllocTracked. */
/* Supplied declaration required: asdMemFree. */
/* Supplied declaration required: scrScriptProcessDestroy. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: mapPlaceSet. */
/* Supplied declaration required: FUN_00387240. */
/* Supplied declaration required: FUN_003872b8. */
/* Supplied declaration required: Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object. */


void FUN_00341fa4(unsigned int *param_1,unsigned char param_2)

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
  mapPlaceSet(0xffffffff,0xffffffff);
  if (g_buttonHelp < '\x01') {
    if (DAT_0057f0c8 == (unsigned int *)0x0) {
      puVar3 = (unsigned int *)0x100;
      asdMemoryAllocTracked(0x100,0x100,0,0x684,1);
      DAT_0057f0c8 = puVar3;
    }
    puVar3 = DAT_0057f0c8;
    sysMemClear();
    puVar4 = &LAB_003422f8;
    asdProcessCreateSimple(&LAB_003422f8,3,0,0,FUN_0025ccc0,&LAB_002e1698,0);
    *puVar3 = (unsigned int)puVar4;
    puVar5 = &LAB_0034230c;
    taskCreateDraw(&LAB_0034230c,0xea,0,0,FUN_002e169c,0,0,puVar4);
    puVar3[2] = (unsigned int)puVar5;
    puVar1 = DAT_0057f0c8;
    Sound_SoundOnishiPlayer_SoundOnishiPlayer_sub_object(DAT_0057f0c8 + 5);
    FUN_001505ac(puVar1 + 5,&DAT_0052b740,0x30,&DAT_0052b770,0x18,&DAT_0052b788,0x18,0,0,
                 &DAT_0052b7a0,0xa8);
    temp_v1 = 0;
    do {
      FUN_0014e188(puVar1 + temp_v1 * 0x23 + 0xd,10,3,puVar1 + 5,0x10);
      FUN_003872b8(puVar1 + temp_v1 * 0x23 + 0xd,10,temp_v1 + 0x11,3);
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 6);
    FUN_0014e188(puVar1 + 0xdf,10,0,puVar1 + 5,0x10);
    FUN_0014e188(puVar1 + 0x102,10,1,puVar1 + 5,0x10);
    FUN_0014e188(puVar1 + 0x125,10,0xa3,puVar1 + 5,0x10);
    FUN_0014e188(puVar1 + 0x148,10,0xa4,puVar1 + 5,0x10);
    puVar2 = DAT_0057f0c8;
    *(unsigned char *)(DAT_0057f0c8 + 0x179) = 0;
    temp_v1 = 0;
    do {
      *(unsigned short *)((int)puVar2 + temp_v1 * 0x8c + 0x3b6) = 2;
      FUN_00387240(puVar2 + temp_v1 * 0x23 + 0xdf,10,0);
      *(unsigned char *)(puVar2 + temp_v1 * 0x23 + 0xee) = 1;
      puVar2[temp_v1 * 0x23 + 0xe2] = 0;
      temp_v2 = temp_v1 + 1;
      puVar2[temp_v1 * 0x23 + 0xe3] = 0;
      puVar2[temp_v1 * 0x23 + 0xe4] = 0;
      temp_v1 = temp_v2;
    } while (temp_v2 < 4);
    *(unsigned char *)((int)puVar1 + 0x5e1) = 0;
    *(unsigned char *)((int)puVar1 + 0x5e2) = 1;
    *(unsigned char *)(puVar1 + 0x178) = 1;
    *(unsigned char *)((int)puVar1 + 0x5e3) = 0;
    puVar1[0x174] = 0;
    temp_v0 = spriteHandleCreate(0);
    puVar3[0x19e] = temp_v0;
    FUN_001527d8(temp_v0,0xf4f4f4ff);
    FUN_00151408(puVar3[0x19e],0,0x646464ff);
    temp_v0 = DAT_0057f0d0;
    FUN_00275bc8(DAT_0057f0d0,DAT_0057f0cc);
    puVar3[0x1a0] = temp_v0;
  }
  g_buttonHelp = g_buttonHelp + '\x01';
  return;
}

} /* extern "C" */
