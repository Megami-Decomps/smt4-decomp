#include "shard/GameOptions.h"

struct QuestRecordState {
    u16 id;    // 0x00
    u8 flag;   // 0x02
};

extern "C" {
s32 gameGetOptionProgressStatus(void);
GameOptions* gameGetSupportUnitData(void);
QuestRecordState* questRecordFindById(u16 id);

// Checks whether the current mode allows the selected quest.
u32 FUN_003c83e0(void)
{
    u32 allowed = 0;
    switch (gameGetOptionProgressStatus()) {
    case 0:
        break;
    case 1:
        allowed = 1;
        break;
    case 2:
        if (questRecordFindById(gameGetSupportUnitData()->unk46)->flag == 0) {
            allowed = 1;
        }
        break;
    }
    return allowed;
}
}
