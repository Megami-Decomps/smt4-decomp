#include "common.h"
#include <stdio.h>
#include "shard/S1ModelEffect.h"
#include "map/mapCommon.h"
#include "game/GameStateA.h"
#include "Model/MoriModelContent.h"
#include "AsdSDK/Source/Sys/File/AsdFileHelpers.h"
#include "event/bustupEvent/BustupTex.h"
#include "shard/W6_W6Match2_FormattedTextSource.h"

extern "C" {

TexFile *asdTMTexTableLoadSprites(s32 index);

void mapFilterLoad(void);
void FUN_00244220(void);
void mapIfLoadWidgets(void);
void FUN_00363c58(s32 value);
void mapNaviCategoryGridBuild(void);

/* Loads the map-wide scripts and the model content shared by map scenes. */
void mapSystemLoadSharedFiles(void)
{
    MoriModelContent *content;
    char path[128];

    FUN_00363c58(0);
    mapFilterLoad();
    mapIfLoadWidgets();
    mapNaviCategoryGridBuild();
    asdTMTexTableLoadSprites(0x13);
    asdTMTexTablePrepareNodeImage(0x13, 3);
    asdTMTexTablePrepareNodeImage(0x13, 4);
    g_gameState.mapCommonScript = static_cast<TableGroupHeader *>(asdLoadFileSyncDefault("map/all/mapsys_scr.bf"));
    g_gameState.mapCommonMessages = asdLoadFileSyncDefault("map/all/mapsys_mes.mbm");
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x279));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.mapDamage = content;
    sprintf(path, "map/all/damage.bam");
    resourceOwnerLoadFileSync(g_gameState.mapDamage, path);
    moriModelContentLoadBody(g_gameState.mapDamage, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x27f));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.areaModels[0] = content;
    sprintf(path, "player_arms/arm00.bam");
    resourceOwnerLoadFileSync(g_gameState.areaModels[0], path);
    moriModelContentLoadBody(g_gameState.areaModels[0], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x284));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.areaModels[1] = content;
    sprintf(path, "player_arms/arm01.bam");
    resourceOwnerLoadFileSync(g_gameState.areaModels[1], path);
    moriModelContentLoadBody(g_gameState.areaModels[1], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x289));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.areaModels[2] = content;
    sprintf(path, "player_arms/arm02.bam");
    resourceOwnerLoadFileSync(g_gameState.areaModels[2], path);
    moriModelContentLoadBody(g_gameState.areaModels[2], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x28e));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.areaModels[3] = content;
    sprintf(path, "player_arms/arm03.bam");
    resourceOwnerLoadFileSync(g_gameState.areaModels[3], path);
    moriModelContentLoadBody(g_gameState.areaModels[3], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x293));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model530 = content;
    sprintf(path, "player_arms/arm00.bam");
    resourceOwnerLoadFileSync(g_gameState.model530, path);
    moriModelContentLoadBody(g_gameState.model530, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x299));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model528 = content;
    sprintf(path, "map/all/pl_ring_in.bam");
    resourceOwnerLoadFileSync(g_gameState.model528, path);
    moriModelContentLoadBody(g_gameState.model528, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x29e));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model52C = content;
    sprintf(path, "map/all/pl_ring_out.bam");
    resourceOwnerLoadFileSync(g_gameState.model52C, path);
    moriModelContentLoadBody(g_gameState.model52C, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2a4));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.sceneControllerResources[0] = content;
    sprintf(path, "map/all/area_next.bam");
    resourceOwnerLoadFileSync(g_gameState.sceneControllerResources[0], path);
    moriModelContentLoadBody(g_gameState.sceneControllerResources[0], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2a9));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.sceneControllerResources[1] = content;
    sprintf(path, "map/all/ar_hit.bam");
    resourceOwnerLoadFileSync(g_gameState.sceneControllerResources[1], path);
    moriModelContentLoadBody(g_gameState.sceneControllerResources[1], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2af));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.sceneControllerResources[2] = content;
    sprintf(path, "map/all/area_next_s.bam");
    resourceOwnerLoadFileSync(g_gameState.sceneControllerResources[2], path);
    moriModelContentLoadBody(g_gameState.sceneControllerResources[2], 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2d2));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model550 = content;
    sprintf(path, "map/all/navarre.bam");
    resourceOwnerLoadFileSync(g_gameState.model550, path);
    moriModelContentLoadBody(g_gameState.model550, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2eb));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model564 = content;
    sprintf(path, "map/all/estm.bam");
    resourceOwnerLoadFileSync(g_gameState.model564, path);
    moriModelContentLoadBody(g_gameState.model564, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2f1));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.mapLightEstoma = content;
    sprintf(path, "map/all/lestm.bam");
    resourceOwnerLoadFileSync(g_gameState.mapLightEstoma, path);
    moriModelContentLoadBody(g_gameState.mapLightEstoma, 0);
    content = static_cast<MoriModelContent *>(asdMemoryAllocTraced(sizeof(MoriModelContent), "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapCommon.cpp", 0x2fe));
    if (content != 0) {
      content = modelListInit(content);
    }
    g_gameState.model570 = content;
    sprintf(path, "map/all/jade_knife.bam");
    resourceOwnerLoadFileSync(g_gameState.model570, path);
    moriModelContentLoadBody(g_gameState.model570, 0);
    FUN_00244220();
    return;
}

} /* extern "C" */
