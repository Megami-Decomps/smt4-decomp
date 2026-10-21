#ifndef SHARD_W6_W6MATCH8_BATTLE_COMMON_RESOURCES_H
#define SHARD_W6_W6MATCH8_BATTLE_COMMON_RESOURCES_H

#include "common.h"

struct BattleCommonResources {
    u8 unk00[0xc];
    void *legionMessages;
    void *legionMessageTable;
    void *legionScript;
    void *commonMessages;
    void *talkSystemMessages;
    void *talkBaseData;
    void *systematicTable;
    void *subQuestGuestMessages;
    void *bossDeadTable;
    s32 enemyOverride; // 0x30
};

#endif
