/* Opens the selected fusion-result record, or changes the camp panel with its matching sound. */
#include "shard/Shard0031.h"
#include "gamedata/GameSaveDataA.h"
#include "camp/CampStateA.h"

extern "C" {
void sysPlaySe(s32 sound);
u32 FUN_002f3bc4(SlotRecordA *record, s32 index, s32 source);
void FUN_0032d0c8(s32 first, s32 second, u16 id, const SlotRecordA *record);
void FUN_00331380(s32 panel);
bool partyPanelIsActive(void);

void campFusionResultCommand(void)
{
    CampStateA *camp = g_camp;
    if (camp->unitSelectActive) {
        if ((u8)camp->unitSelectIndex != 3) {
            sysPlaySe(82);
            SlotRecordA record;
            if (FUN_002f3bc4(&record, camp->unitSelectIndex, camp->unitSelectSource)) {
                FUN_0032d0c8(0, 1, record.id, &record);
            }
            return;
        }
        sysPlaySe(81);
        return;
    }
    if (partyPanelIsActive()) {
        if (camp->menuGroup != 1) {
            sysPlaySe(4);
            FUN_00331380(0);
            return;
        }
        sysPlaySe(2);
        FUN_00331380(1);
        return;
    }
    if (camp->menuGroup != 1) {
        sysPlaySe(3);
        FUN_00331380(0);
        return;
    }
    sysPlaySe(1);
    FUN_00331380(1);
}
}
