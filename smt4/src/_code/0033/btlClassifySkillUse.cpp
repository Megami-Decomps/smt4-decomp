#include "common.h"
#include "gamedata/Table04Record.h"
#include "shard/W4_Match6_BtlEntry.h"
#include "battle/btlMain.h"
#include "battle/BtlMainAccess.h"

extern "C" {
Table04Record *dataTable40FindById(u32 skillId);
u32 FUN_0023d9b8(s32 unit, s32 mode, Table04Record *skill);

// Classify an attempted skill use and report resource-related failures.
u32 btlClassifySkillUse(s32 unit, u32 skillId)
{
    struct SkillRecordView {
        u8 unk00[0x23];
        u8 category;
        u8 unk24[4];
        struct {
            u32 unk0 : 5;
            u32 target : 4;
            u32 useMode : 2;
            u32 unk11 : 21;
        } properties;
    };
    if (!skillId)
        return 1;
    Table04Record *skill = dataTable40FindById(skillId);
    if (!skill)
        return 1;
    const SkillRecordView *record = reinterpret_cast<const SkillRecordView *>(skill);
    if (record->properties.useMode != 2 && record->properties.useMode != 3)
        return 2;
    switch (record->category) {
    case 0: case 1: case 2: case 5: case 6: case 10:
        return 0;
    }
    if (btlGetMainState()->editorControl.flags & 0x2000000)
        return 0;
    if (record->category != 3) {
        switch (record->properties.target) {
        case 0: case 1: case 3: case 4: case 5: case 6: case 8:
            return 0;
        }
    }
    u32 result = FUN_0023d9b8(unit, 1, skill);
    if (result)
        result = 3;
    return result;
}
}
