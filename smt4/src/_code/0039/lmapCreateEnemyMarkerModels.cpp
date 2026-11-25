#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "shard/W6_W6Match3_NodeEnable.h"
#include "shard/W6_W6Match3_MapMarkerModels.h"

struct MapMarkerModels {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ AsdMdlObject* enemy;
    /* 0x9c */ AsdMdlObject* boss;
};


extern "C" void lmapCreateEnemyMarkerModels(MapMarkerModels* models)
{
    AsdMdlObject* model = asdMdlManagerCreateLoaded("map/all/lmap_ene.bcres", 0x1c0);
    models->enemy = model;
    model->flags |= 2;
    ((AsdMdlNode*)model->node)->sceneNode->positionFollowed = 0;
    model = asdMdlManagerCreateLoaded("map/all/lmap_boss.bcres", 0x1c0);
    models->boss = model;
    model->flags |= 2;
    ((AsdMdlNode*)model->node)->sceneNode->positionFollowed = 0;
}
