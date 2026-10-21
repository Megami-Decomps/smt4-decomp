#include "battle/btlMain.h"
#include "shard/W6_W6Match1_BattleVersionResources.h"

struct AuxiliaryResourceView {
    /* 0x0000 */ u8 unk0000[0x2e20];
    /* 0x2e20 */ BattleVersionResourceSlot slots[4];
};

extern "C" void rt_memcpy_w(void* destination, const void* source, u32 size);

extern "C" u32 btlAuxAreResourcesReady(BtlAuxA* auxiliary)
{
    AuxiliaryResourceView* resources = (AuxiliaryResourceView*)auxiliary;
    for (s32 index = 0; index < 4; ++index) {
        BattleVersionResourceSlot snapshot;
        rt_memcpy_w(&snapshot, &resources->slots[index], sizeof(snapshot));
        if ((snapshot.readiness.flags & 1) && snapshot.data == NULL) {
            return 0;
        }
    }
    return 1;
}
