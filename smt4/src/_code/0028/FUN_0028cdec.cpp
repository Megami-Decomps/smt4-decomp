/* NON_MATCHING: only the first slot-id address/load sequence and its argument registers differ. */
#include "shard/PlayScene.h"

extern "C" {
void FUN_002621b4(s32 member, s32 slot, s32 skill, s32 *target);
void FUN_0028cb40(PlayScene *scene, u16 kind[2], s16 skill[2]);
const void *FUN_002ae164(s32 skill);
s32 objectPartRunUnlessLocked(PlayScenePart *part);
const void *gameGetSlotTable();

// Resolve the selected skill's target, rejecting unsupported reserve-slot combinations.
u32 FUN_0028cdec(PlayScene *scene)
{
    s16 skill[2];
    u16 kind[2];
    kind[0] = 0;
    skill[0] = 0;
    FUN_0028cb40(scene, kind, skill);
    s32 selection = objectPartRunUnlessLocked(&scene->targeting.selector);
    // The party selection tail lies beyond the shared SlotTable prefix.
    struct PartyView { u8 prefix[0x9107]; s8 slots[8]; };
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
        FUN_002621b4(scene->unk305C - 1, party->slots[selection], skill[0], &scene->targeting.targets[selection]);
        party = static_cast<const PartyView *>(gameGetSlotTable());
        if (party->slots[selection] < 0) {
            const SkillView *record = static_cast<const SkillView *>(FUN_002ae164(skill[0]));
            if ((record != NULL && record->properties.targeting == 2 && record->category == 3) ||
                record->id == 0x8b || record->id == 0x136) {
                return 0;
            }
        }
    } else {
        FUN_002621b4(scene->unk305C - 1, -1, skill[0], &scene->targeting.targets[0]);
    }
    const SkillView *record = static_cast<const SkillView *>(FUN_002ae164(skill[0]));
    if ((record->flags & 0x600) != 0 && scene->unk305C < 4 && scene->targeting.fallback < 0) {
        scene->targeting.targets[scene->unk305C] = scene->targeting.fallback;
    }
    return 1;
}
}
