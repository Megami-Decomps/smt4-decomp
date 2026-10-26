#include "common.h"
#include "gamedata/Table04Record.h"
#include "code/Code0022_Smt4a.h"

struct UnitRecord {
    u8 unk00[0x2c];
    s16 mp; // 0x2c
};

extern "C" {

UnitRecord *gameGetPlayerData(void);
UnitRecord *gameGetSlotRecord(s32 slot);
s32 FUN_003df57c(u32 id, u32 kind);
s32 FUN_004bcbb4(UnitRecord *record, u32 id);

// True when the unit (the player for a negative slot) has enough MP for the skill.
u32 FUN_0022a030(s32 slot, u32 skill)
{
    u32 usable = 0;
    dataTable04FindById(skill);
    if (slot < 0) {
        UnitRecord *player = gameGetPlayerData();
        if (FUN_003df57c(skill, 1) <= player->mp) {
            usable = 1;
        }
    } else {
        UnitRecord *unit = gameGetSlotRecord(slot);
        if (unit->mp >= FUN_004bcbb4(unit, skill)) {
            usable = 1;
        }
    }
    return usable;
}

} /* extern "C" */
