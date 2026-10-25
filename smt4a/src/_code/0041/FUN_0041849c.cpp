/* NON_MATCHING: retail extracts the quest flag bit with AND/LSRS, keeps (s16)id as a spilled value (sxth, str [sp]) and re-derives the u16 quest index after the first calls; built tests with TST, stores id directly and shares the index cast. */
#include "quest_center/QuestRuntime.h"
#include "shard/Shard0041.h"
#include "shard/W5_W5Match7_FlagBanks.h"
#include "AsdSDK/Source/Gfx/Model/AsdEnv.h"

extern "C" QuestRuntimeDefinition *FUN_001ad9b4(u16 quest);
extern "C" u32 FUN_001ba3d4(u16 id);

extern "C" void FUN_0041849c(s16 id, u32 increment)
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
    for (s32 quest = 0; quest < 400; ++quest) {
        if (reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[static_cast<u16>(quest)].flags & 2) {
            const RequirementsView *view = reinterpret_cast<const RequirementsView *>(FUN_001ad9b4(static_cast<u16>(quest)));
            if (view && reinterpret_cast<const QuestRuntimeDefinition *>(view)->kind == 0) {
                for (s32 index = 0; index < 4; ++index) {
                    if (view->requirements[index].kind == 1 && view->requirements[index].id == id) {
                        u32 current = FUN_001ba3d4(id);
                        if (current < view->requirements[index].target) {
                            reinterpret_cast<PartyBlockB *>(gameFlagBlockGet())->e[static_cast<u16>(quest)].bits |= 2;
                            if (view->requirements[index].target <= increment + current) {
                                flags->questProgress.completed = static_cast<s16>(id);
                            } else {
                                flags->questProgress.incomplete = static_cast<s16>(id);
                            }
                        }
                    }
                }
            }
        }
    }
}
