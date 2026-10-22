/* NON_MATCHING: camp panel branches share calls and epilogues instead of retail independent tail calls. */
/* Opens the selected fusion-result record, or changes the camp panel with its matching sound. */
#include "shard/Shard0031.h"

extern "C" {
void sysPlaySe(s32 sound);
u32 FUN_002f3bc4(SlotTableEntry *record, s32 index, s32 source);
void FUN_0032d0c8(s32 first, s32 second, u16 id, const SlotTableEntry *record);
void FUN_00331380(s32 panel);
s32 partyPanelIsActive(void);
extern void *g_camp;

void FUN_002add8c(void)
{
    struct CampCommandView {
        u8 unk00[0xA4];
        u8 panel;
        u8 unkA5[0x12];
        u8 resultSelected;
        s8 source;
        s8 index;
    };
    CampCommandView *camp = (CampCommandView *)g_camp;
    SlotTableEntry record;
    if (camp->resultSelected) {
        if ((u8)camp->index != 3) {
            sysPlaySe(82);
            if (FUN_002f3bc4(&record, camp->index, camp->source)) {
                FUN_0032d0c8(0, 1, ((Lookup62 *)&record)->id, &record);
            }
            return;
        }
        sysPlaySe(81);
        return;
    }
    if (partyPanelIsActive()) {
        if (camp->panel != 1) {
            sysPlaySe(4);
            FUN_00331380(0);
            return;
        }
        sysPlaySe(2);
        FUN_00331380(1);
        return;
    }
    if (camp->panel != 1) {
        sysPlaySe(3);
        FUN_00331380(0);
        return;
    }
    sysPlaySe(1);
    FUN_00331380(1);
}
}
