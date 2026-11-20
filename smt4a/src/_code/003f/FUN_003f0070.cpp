#include "gamedata/GameSaveDataA.h"
#include "gamedata/PartyPick.h"
#include "shard/W6_W6Match5_UnitCategory.h"
#include "battle/btlDebug.h"
#include "code/Code0018.h"
#include "gamedata/SaveSlotTable.h"

extern "C" {
s32 FUN_003e4978(void);
void FUN_003f1b3c(u32 request, void *record, s32 kind, s32 *value, u32 *result);
void FUN_0047f7ac(s32 enabled, u32 result);
void btlReflectCreateKind44(s32 first, s32 second, s32 id, s32 value);

/* Chooses an eligible non-selected party member, falling back to the selected member. */
void FUN_003f0070(u32 request)
{
    if (FUN_003e48bc() == 0 || FUN_003e4978() == 0) {
        return;
    }
    s32 value;
    u32 result;
    u16 selectedId = partyPickRandomNonSelectedId();
    if (selectedId != 0) {
        void *record = (void *)unitMapIdToCategory(selectedId, 1);
        FUN_003f1b3c(request, record, 6, &value, &result);
        FUN_0047f7ac(1, result);
        btlReflectCreateKind44(0, 0, selectedId, value);
    }
}
} /* extern "C" */
