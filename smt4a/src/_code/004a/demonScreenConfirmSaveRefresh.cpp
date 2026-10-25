#include "common.h"

struct FourWords { u32 values[4]; };
struct TwoWords { u32 values[2]; };
struct SavedDemon {
    u16 level; // 0x00
    u16 strength;
    u16 dexterity;
    u16 magic;
    u16 agility;
    u16 luck;
    u16 skills[5]; // 0x0c
    u8 unk16low : 2; // 0x16
    u8 flags : 4;
    u8 unk16high : 2;
    u8 unk17;
    u16 id; // 0x18
    u16 variant;
    FourWords data; // 0x1c
    TwoWords extra; // 0x2c
    u32 status; // 0x34
    u32 experience; // 0x38
    u8 inherited[0x12]; // 0x3c
};
struct LiveDemon {
    u16 id;
    u16 variant;
    u16 strength;
    u16 dexterity;
    u16 magic;
    u16 agility;
    u16 luck;
    u8 unk0e[0x12];
    u16 skills[5]; // 0x20
    u8 unk2a[6];
    u32 experience; // 0x30
    FourWords data; // 0x34
    TwoWords extra; // 0x44
    u8 inherited[0x12]; // 0x4c
    u8 unk5e[6];
    u16 level; // 0x64
    u8 unk66[0x46];
    u16 strengthBonus; // 0xac
    u16 dexterityBonus;
    u16 magicBonus;
    u16 agilityBonus;
    u16 luckBonus;
    u8 unkb6[0x75];
    u8 flags; // 0x12b
};
struct DemonSelection {
    u16 id;
    u8 unk02[0x1e];
};
struct DemonSelectionList {
    s16 count;
    u16 unk02;
    DemonSelection entries[1];
};
struct DemonScreen {
    u8 unk00[0x14];
    u32 state; // 0x14
    u32 phase; // 0x18
    u8 unk1c[0x840];
    u32 dialog; // 0x85c
    u32 unk860;
    DemonSelectionList list; // 0x864
};
extern "C" {
s32 scrRunOpcodesStub(u32);
s32 messageGetChoiceResult();
LiveDemon *slotEntryFindById(u16);
s32 gameDataCopySaveEntry(u16, SavedDemon *);
void __aeabi_memcpy4(void *, const void *, u32);
void gameDataStoreSavedRecord(u16, SavedDemon *);
void FUN_004a1958(DemonScreen *);
u32 buttonHelpGetValue();
void sysPlaySe(u32);
void FUN_003343f0(u32);
void screen4AEnter(DemonScreen *);
void uniteCreatePreviewModel();

// Refresh selected saved demons from their current stats after confirming the dialog.
void demonScreenConfirmSaveRefresh(DemonScreen *screen)
{
    if (scrRunOpcodesStub(screen->dialog) != 2)
        return;
    if (!messageGetChoiceResult()) {
        SavedDemon saved;
        for (s32 i = 0; i < screen->list.count; ++i) {
            DemonSelectionList *selection = &screen->list;
            u16 id = selection->entries[i].id;
            LiveDemon *demon = slotEntryFindById(id);
            if (gameDataCopySaveEntry(id, &saved)) {
                saved.level = demon->level;
                saved.experience = demon->experience;
                saved.id = demon->id;
                saved.variant = demon->variant;
                saved.strength = demon->strength + demon->strengthBonus;
                saved.skills[0] = demon->skills[0];
                saved.dexterity = demon->dexterity + demon->dexterityBonus;
                saved.skills[1] = demon->skills[1];
                saved.magic = demon->magic + demon->magicBonus;
                saved.skills[2] = demon->skills[2];
                saved.agility = demon->agility + demon->agilityBonus;
                saved.skills[3] = demon->skills[3];
                saved.luck = demon->luck + demon->luckBonus;
                saved.skills[4] = demon->skills[4];
                saved.data = demon->data;
                saved.extra = demon->extra;
                __aeabi_memcpy4(saved.inherited, demon->inherited, sizeof(saved.inherited));
                saved.flags = demon->flags & 0xf;
                gameDataStoreSavedRecord(id, &saved);
            }
        }
        FUN_004a1958(screen);
    }
    sysPlaySe(buttonHelpGetValue());
    FUN_003343f0(0);
    if (screen->list.count <= 0) {
        screen4AEnter(screen);
        uniteCreatePreviewModel();
        return;
    }
    screen->state = 2;
    screen->phase = 0;
}
}
