/* NON_MATCHING: quest flag extraction uses TST instead of retail's AND/LSRS, with different counter and requirement addressing; 54 built versus 58 retail rows. */
#include "quest_center/QuestRuntime.h"
#include "shard/Shard0041.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" QuestRuntimeDefinition *FUN_001ad9b4(u16 quest);
extern "C" u32 FUN_001ba3d4(u16 id);

extern "C" void FUN_0041849c(u16 id, u32 increment)
{
    struct Requirement {
        s16 kind;
        u16 id;
        u32 target;
    };
    struct RequirementsView {
        u8 prefix[0x100];
        Requirement requirements[4];
    };
    FlagWorkBanks *flags = gameFlagsGetBlock();
    for (u32 quest = 0; quest < 400; ++quest) {
        if (reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[static_cast<u16>(quest)].flags & 2) {
            QuestRuntimeDefinition *definition = FUN_001ad9b4(static_cast<u16>(quest));
            if (definition && definition->kind == 0) {
                const RequirementsView *view = reinterpret_cast<const RequirementsView *>(definition);
                for (s32 index = 0; index < 4; ++index) {
                    const Requirement *requirement = &view->requirements[index];
                    if (requirement->kind == 1 && requirement->id == id) {
                        u32 current = FUN_001ba3d4(id);
                        if (current < requirement->target) {
                            reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[static_cast<u16>(quest)].bits |= 2;
                            if (increment + current >= requirement->target) {
                                flags->questProgress.completed = id;
                            } else {
                                flags->questProgress.incomplete = id;
                            }
                        }
                    }
                }
            }
        }
    }
}
