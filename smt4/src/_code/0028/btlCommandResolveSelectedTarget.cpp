#include "shard/PlayScene.h"
#include "code/Code0026.h"
#include "gamedata/DataTable40.h"

extern "C" {
void FUN_0028cb40(PlayScene *scene, u16 *kind, s16 *skill);
s32 objectPartRunUnlessLocked(PlayScenePart *part);
const void *gameGetSlotTable();

// Resolve the selected skill's target, rejecting unsupported reserve-slot combinations.
u32 btlCommandResolveSelectedTarget(PlayScene *scene)
{
    u16 kind = 0;
    s16 skill = 0;
    FUN_0028cb40(scene, &kind, &skill);
    s32 selection = objectPartRunUnlessLocked(&scene->targeting.selector);
    // The party selection tail lies beyond the shared SlotTable prefix.
    struct PartyView { u8 prefix[0x9108]; s8 slots[4]; };
    // Properties in the shared record's unaligned byte union cannot be exposed as words in place.
    struct SkillView {
        u8 unk00[0x20];
        u16 id;
        u8 unk22;
        u8 category;
        u8 unk24[4];
        struct {
            u32 unk00 : 5;
            u32 targeting : 4;
            u32 unk09 : 23;
        } properties;
        u8 unk2C[0xC];
        u32 flags;
    };
    if (selection != 0) {
        const PartyView *party = static_cast<const PartyView *>(gameGetSlotTable());
        s32 target = party->slots[selection - 1];
        FUN_002621b4(scene->unk305C - 1, target, skill, &scene->targeting.targets[selection]);
        party = static_cast<const PartyView *>(gameGetSlotTable());
        if (party->slots[selection - 1] < 0) {
            const SkillView *record = reinterpret_cast<const SkillView *>(dataTable40FindById(skill));
            if ((record != NULL && record->properties.targeting == 2 && record->category == 3) ||
                record->id == 0x8b || record->id == 0x136) {
                return 0;
            }
        }
    } else {
        FUN_002621b4(scene->unk305C - 1, -1, skill, &scene->targeting.targets[0]);
    }
    const SkillView *record = reinterpret_cast<const SkillView *>(dataTable40FindById(skill));
    if ((record->flags & 0x600) != 0 && scene->unk305C < 4 && scene->targeting.fallback < 0) {
        scene->targeting.targets[scene->unk305C] = scene->targeting.fallback;
    }
    return 1;
}
}
