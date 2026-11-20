/* Acquire and initialize the shared status-screen resources and update/draw tasks. */
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/GameGlobals.h"
#include "bible/bibleAnalyze.h"

#include "AsdSDK/AsdMemUtil.h"
#include "code/Code002c_Smt4.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_UiResourceParameters.h"

extern "C" {






int statusDownCreate(...);



extern int FUN_0018f660(...); /* 0x18f660 */
extern int FUN_001a321c(...); /* 0x1a321c */
extern int FUN_001cdef8(...); /* 0x1cdef8 */
static const UiSpritePositionKey sPositionKeys[] = {
{0,0,0,0,0,0,0},
{320,0,0,0,8,0,0},
{0,60,0,0,12,0,0},
{0,-60,0,0,12,0,0},
{-320,0,0,0,8,0,0},
{0,0,-480,0,4,0,0},
{-60,0,120,0,30,1,0},
{320,0,0,0,4,0,0},
{0,60,0,0,4,0,0},
{400,0,0,0,4,0,0},
{0,0,-2,-2,3,0,0},
{-2,-2,-2,2,3,0,0},
{-2,2,2,-2,3,0,0},
{2,-2,2,2,3,0,0},
{2,2,0,0,3,0,0},
};
static const UiSpriteScalarKey sAlphaKeys[] = {
{0.0f,1.0f,8,0,0},
{0.0f,1.0f,6,0,0},
{0.0f,1.0f,20,0,0},
{1.0f,0.0f,10,0,0},
{0.0f,1.0f,30,1,0},
{1.0f,1.0f,1,0,0},
{0.0f,1.0f,5,0,0},
{1.0f,0.0f,15,0,0},
{0.0f,0.0f,3,0,0},
{0.0f,1.0f,2,0,0},
{1.0f,0.0f,2,0,0},
{0.0f,0.0f,13,0,0},
};
static const SpriteAnimationCommand sCommands[] = {
{2,0,{0,0,0},-3,0,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{3,0,{0,0,0},-3,0,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{0,0,{0,0,0},-3,1,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{5,0,{0,0,0},-3,5,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{-3,0,{0,0,0},-3,2,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,3,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,-2,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{0,0,{0,0,0},-3,0,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,3,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{10,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{11,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{12,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{13,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{14,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{-2,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{-3,0,{0,0,0},-3,6,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,7,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
{-3,0,{0,0,0},-3,8,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,9,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,10,0,{0,0,0},-3,0,{0,0,0}},
{-3,0,{0,0,0},-3,11,0,{0,0,0},-3,0,{0,0,0}},
{-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
};




void statusAcquireSharedResources(void)

{
  unsigned int *workWords;
  int index;

  if (g_gameGlobals.refCount <= 0) {
    if (reinterpret_cast<u32 *>(g_gameGlobals.data) == (unsigned int *)0x0) {
      asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\status\\Status.cpp",0xaef);
      workWords = static_cast<u32 *>(asdMemAlloc(0x100,0x100,0,0x1ebc,1));
      g_gameGlobals.data = reinterpret_cast<GameData *>(workWords);
    }
    workWords = reinterpret_cast<u32 *>(g_gameGlobals.data);
    memClear(workWords,0x1ebc);
    *workWords = asdProcessCreateSimple(reinterpret_cast<const s8 *>("Status Calc"),2,0,0,reinterpret_cast<AsdProcUpdateFunc>(FUN_0018f660),0,0);
    taskCreateDraw(reinterpret_cast<const s8 *>("Status DrawBackUpLeft"),0x65,0,0,reinterpret_cast<AsdProcUpdateFunc>(FUN_001cdef8),0,0,reinterpret_cast<void *>(*workWords));
    taskCreateDraw(reinterpret_cast<const s8 *>("Status DrawBackUpRight"),0xcc,0,0,reinterpret_cast<AsdProcUpdateFunc>(FUN_001cdef8),0,0,reinterpret_cast<void *>(*workWords));
    taskCreateDraw(reinterpret_cast<const s8 *>("Status DrawUpLeft"),0x7d,0,0,reinterpret_cast<AsdProcUpdateFunc>(FUN_001a321c),0,0,reinterpret_cast<void *>(*workWords));
    taskCreateDraw(reinterpret_cast<const s8 *>("Status DrawUpRight"),0xdb,0,0,reinterpret_cast<AsdProcUpdateFunc>(FUN_001a321c),0,0,reinterpret_cast<void *>(*workWords));
    statusDownCreate();
    workWords = reinterpret_cast<u32 *>(g_gameGlobals.data);
    *(unsigned short *)(reinterpret_cast<u32 *>(g_gameGlobals.data) + 0x4bf) = 0;
    reinterpret_cast<GameData *>(workWords)->unk12FE = -1;
    reinterpret_cast<GameData *>(workWords)->unk12EF = -1;
    *(unsigned char *)(workWords + 0x4bd) = 0;
    *(unsigned char *)(workWords + 0x7ae) = 1;
    g_gameGlobals.ownsStatusModel = 0;
    *(unsigned char *)((int)workWords + 0x1eb9) = 1;
    *(unsigned char *)((int)workWords + 0x1e61) = 1;
    *(unsigned char *)(workWords + 0x798) = 0;
    *(unsigned char *)((int)workWords + 0x1e63) = 0;
    workWords[0x4b7] = 1;
    *(unsigned char *)(workWords + 0x79f) = 0;
    *(unsigned char *)((int)workWords + 0x1e7d) = 0;
    drawParameterBlockClear(reinterpret_cast<UiResourceParameters *>(workWords + 9));
    paramsInit(reinterpret_cast<UiResourceParameters *>(workWords + 9), sPositionKeys,sizeof(sPositionKeys),sAlphaKeys,sizeof(sAlphaKeys),0,0,0,0,sCommands,sizeof(sCommands));
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0xe3),0x17,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0xe3),1,0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x106),0x1a,1,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x106),0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x129),0x1a,2,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x129),1);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x14c),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x14c),2);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x16f),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0x16f),7,0);
    index = 0;
    do {
      uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + index * 0x23 + 0x1fb),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
      uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + index * 0x23 + 0x1fb),4,0);
      uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + index * 0x23 + 0x359),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
      uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + index * 0x23 + 0x359),1,0);
      index = index + 1;
    } while (index < 10);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x11),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0x11),6,0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x57),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetImageKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0x57),4,0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x7a),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x7a),6);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x9d),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x9d),7);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0xc0),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0xc0),8);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x34),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x34),4);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x192),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0x192),8,0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x1b5),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    uiSpriteSetKeyframe(reinterpret_cast<UiSpriteState *>(workWords + 0x1b5),9,0);
    uiSpriteStateInitFromSource(reinterpret_cast<UiSpriteState *>(workWords + 0x1d8),0x1a,0,reinterpret_cast<UiResourceParameters *>(workWords + 9),1,1.0f);
    spriteStartAnimationByIndex(reinterpret_cast<UiSpriteState *>(workWords + 0x1d8),5);
  }
  ++g_gameGlobals.refCount;
  return;
}

} /* extern "C" */
