/* Acquire and initialize the shared status-screen resources and update/draw tasks. */
#include "ui/UiSpriteApi.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/Shard0033.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "romwright_types.h"
#include "text/TextDraw.h"
#include "AsdSDK/Source/Sys/File/AsdLoadFile.h"

extern "C" {

int textFormatBuffer(...);
int asdProcessCreateSimple(...);

void positionStateSet(u32 object, u32 first, u32 second, f32 scale);
int taskCreateDraw(...);
void *asdMemoryAllocTracked(u32,u32,u32,u32,u32);
void *sysMemClear(void *,u32);
int FUN_0034a544(...);
int FUN_003e4140(...);
int paramsClearPacket(...);



extern int FUN_00208c08(...); /* 0x208c08 */
extern int FUN_0022b2d4(...); /* 0x22b2d4 */
extern int FUN_0026c1a8(...); /* 0x26c1a8 */
extern const char DAT_00536860[];
static const UiSpritePositionKey sPositionKeys[] = {
    {0, 0, 0, 0, 0, 0, 0},
    {320, 0, 0, 0, 8, 0, 0},
    {0, 60, 0, 0, 12, 0, 0},
    {0, -60, 0, 0, 12, 0, 0},
    {-320, 0, 0, 0, 8, 0, 0},
    {0, 0, -480, 0, 4, 0, 0},
    {-60, 0, 120, 0, 30, 1, 0},
    {320, 0, 0, 0, 4, 0, 0},
    {0, 60, 0, 0, 4, 0, 0},
    {400, 0, 0, 0, 4, 0, 0},
    {0, 0, -2, -2, 3, 0, 0},
    {-2, -2, -2, 2, 3, 0, 0},
    {-2, 2, 2, -2, 3, 0, 0},
    {2, -2, 2, 2, 3, 0, 0},
    {2, 2, 0, 0, 3, 0, 0},
    {-480, 0, 0, 0, 8, 0, 0},
    {-30, 0, 0, 0, 4, 0, 0},
    {0, 0, -30, 0, 3, 0, 0},
    {-240, 70, 0, 0, 4, 0, 0},
};
static const UiSpriteScalarKey sAlphaKeys[] = {
    {0.0f, 1.0f, 8, 0, 0},
    {0.0f, 1.0f, 6, 0, 0},
    {0.0f, 1.0f, 20, 0, 0},
    {1.0f, 0.0f, 10, 0, 0},
    {0.0f, 1.0f, 30, 1, 0},
    {1.0f, 1.0f, 1, 0, 0},
    {0.0f, 1.0f, 5, 0, 0},
    {1.0f, 0.0f, 15, 0, 0},
    {0.0f, 0.0f, 3, 0, 0},
    {0.0f, 1.0f, 2, 0, 0},
    {1.0f, 0.0f, 2, 0, 0},
    {0.0f, 0.0f, 13, 0, 0},
    {1.0f, 0.0f, 4, 0, 0},
    {0.0f, 1.0f, 4, 0, 0},
    {1.0f, 0.0f, 3, 0, 0},
    {1.0f, 1.0f, 30, 0, 0},
    {1.0f, 1.0f, 30, 0, 0},
};
static const SpriteAnimationCommand sCommands[] = {
    {2,0,{0,0,0},-3,0,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {3,0,{0,0,0},-3,0,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {0,0,{0,0,0},-3,1,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {5,0,{0,0,0},-3,12,0,{0,0,0},-3,0,{0,0,0}},
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
    {18,0,{0,0,0},-3,-3,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
    {-3,0,{0,0,0},-3,15,0,{0,0,0},-3,0,{0,0,0}},
    {-3,0,{0,0,0},-3,16,0,{0,0,0},-3,0,{0,0,0}},
    {-3,0,{0,0,0},-3,-2,0,{0,0,0},-3,0,{0,0,0}},
    {-1,0,{0,0,0},-1,-1,0,{0,0,0},-1,0,{0,0,0}},
};
extern ObjBRef g_gameGlobals; /* 0x588fd0 */



extern unsigned int spriteHandleCreate(unsigned int);


void statusAcquireSharedResources(void)

{
  unsigned int *workWords;
  unsigned int handle;
  int index;
  unsigned int *resourceWords;

  if (static_cast<s8>(g_gameGlobals.unk00) <= 0) {
    if (reinterpret_cast<u32 *>(g_gameGlobals.instance) == (unsigned int *)0x0) {
      asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\status\\Status.cpp", 0x115b);
      workWords = static_cast<u32 *>(asdMemoryAllocTracked(0x100,0x100,0,0x20f4,1));
      g_gameGlobals.instance = reinterpret_cast<ObjB *>(workWords);
    }
    workWords = reinterpret_cast<u32 *>(g_gameGlobals.instance);
    sysMemClear(workWords,0x20f4);
    *workWords = asdProcessCreateSimple("Status Calc",4,0,0,FUN_00208c08,0,0);
    taskCreateDraw("Status DrawBackUpLeft",0x65,0,0,FUN_0026c1a8,0,0,*workWords);
    taskCreateDraw("Status DrawBackUpRight",0xcc,0,0,FUN_0026c1a8,0,0,*workWords);
    taskCreateDraw("Status DrawUpLeft",0x81,0,0,FUN_0022b2d4,0,0,*workWords);
    taskCreateDraw("Status DrawUpRight",0xdd,0,0,FUN_0022b2d4,0,0,*workWords);
    FUN_0034a544();
    workWords = reinterpret_cast<u32 *>(g_gameGlobals.instance);
    *(unsigned short *)(reinterpret_cast<u32 *>(g_gameGlobals.instance) + 0x4e3) = 0;
    *reinterpret_cast<s16 *>(reinterpret_cast<ObjB *>(workWords)->unk138E) = -1;
    reinterpret_cast<ObjB *>(workWords)->unk137F = -1;
    *(unsigned char *)(workWords + 0x4e1) = 0;
    *(unsigned char *)(workWords + 0x82c) = 1;
    g_gameGlobals.ownsStatusModel = 0;
    *(unsigned char *)((int)workWords + 0x20b1) = 1;
    textFormatBuffer(workWords + 0x81a,"");
    workWords[0x82a] = 0xffffffff;
    *(unsigned char *)(workWords + 0x82b) = 0;
    *(unsigned char *)((int)workWords + 0x2012) = 1;
    *(unsigned char *)((int)workWords + 0x2011) = 0;
    *(unsigned char *)(workWords + 0x805) = 0;
    workWords[0x4da] = 1;
    *(unsigned char *)(workWords + 0x80c) = 0;
    *(unsigned char *)((int)workWords + 0x2031) = 0;
    workWords[0x82f] = 0;
    workWords[0x830] = 0;
    workWords[0x831] = 0;
    workWords[0x833] = 0;
    *(unsigned char *)(workWords + 0x83c) = 1;
    asdLoadFileAsyncSimple(DAT_00536860,workWords + 0x833,0);
    resourceWords = reinterpret_cast<u32 *>(g_gameGlobals.instance);
    if (resourceWords[0x82f] == 0) {
      asdLoadFileAsyncSimple("camp/PartnerData.tbb",resourceWords + 0x82f,0);
      asdLoadFileAsyncSimple("camp/partnerDescriptionMsg.mbm",resourceWords + 0x82e,0);
    }
    resourceWords = reinterpret_cast<u32 *>(g_gameGlobals.instance);
    handle = spriteHandleCreate(0);
    resourceWords[0x82d] = handle;
    uiObjectSetColorRgb(handle,0xffffffff);
    positionStateSet(resourceWords[0x82d],0,0x646464ff,0.0f);
    paramsClearPacket(workWords + 9);
    paramsInit(reinterpret_cast<UiResourceParameters *>(workWords + 9), sPositionKeys,sizeof(sPositionKeys),sAlphaKeys,sizeof(sAlphaKeys),0,0,0,0,sCommands,sizeof(sCommands));
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x106),0xf,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetKeyframe((UiSpriteState *)(workWords + 0x106),1,0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x129),0x12,1, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x129),0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x14c),0x12,2, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x14c),1);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x16f),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x16f),2);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x192),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetKeyframe((UiSpriteState *)(workWords + 0x192),7,0);
    index = 0;
    do {
      resourceWords = workWords + index * 0x23 + 0x1fb;
      uiSpriteStateInitFromSource((UiSpriteState *)resourceWords,0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
      uiSpriteSetKeyframe((UiSpriteState *)resourceWords,0x10,0);
      uiSpriteSetImageKeyframe((UiSpriteState *)resourceWords,0xd,0);
      uiSpriteStateInitFromSource((UiSpriteState *)(workWords + index * 0x23 + 0x359),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
      uiSpriteSetKeyframe((UiSpriteState *)(workWords + index * 0x23 + 0x359),1,0);
      index = index + 1;
    } while (index < 10);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x4b7),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x11),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetKeyframe((UiSpriteState *)(workWords + 0x11),6,0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x57),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetImageKeyframe((UiSpriteState *)(workWords + 0x57),4,0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x7a),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x7a),6);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x9d),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x9d),7);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0xc0),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0xc0),8);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x34),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0x34),4);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x1b5),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetKeyframe((UiSpriteState *)(workWords + 0x1b5),8,0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0x1d8),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSetKeyframe((UiSpriteState *)(workWords + 0x1d8),8,0);
    uiSpriteStateInitFromSource((UiSpriteState *)(workWords + 0xe3),0x12,0, (UiResourceParameters *)(workWords + 9),1, 1.0f);
    uiSpriteSelectAnim((UiSpriteState *)(workWords + 0xe3),10);
    workWords = reinterpret_cast<u32 *>(g_gameGlobals.instance);
    if (reinterpret_cast<u32 *>(g_gameGlobals.instance) != (unsigned int *)0x0) {
      *(unsigned char *)((int)reinterpret_cast<u32 *>(g_gameGlobals.instance) + 0x20d1) = 0;
      FUN_003e4140(workWords + 0x835);
    }
  }
  ++g_gameGlobals.unk00;
  return;
}

} /* extern "C" */
