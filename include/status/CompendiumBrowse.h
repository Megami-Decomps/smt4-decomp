/* The compendium's cursor and list rows in both games. */
#ifndef STATUS_COMPENDIUM_BROWSE_H
#define STATUS_COMPENDIUM_BROWSE_H

#include <stddef.h>
#include "shard/Shard004A.h"
#include "bible/BibleDevilList.h"

struct CompendiumBrowseEntry {
    /* 0x00 */ u16 present; /* zero in the first row when the list is empty */
    /* 0x02 */ u16 unk02;
    /* 0x04 */ u16 id;
    /* 0x06 */ u8 unk06[0x1A];
};

struct CompendiumBrowsePageA {
    /* 0x0000 */ u8 unk0000[0x60];
    /* 0x0060 */ s8 tabsActive;
    /* 0x0061 */ s8 tabPage;
    /* 0x0062 */ u8 unk0062;
    /* 0x0063 */ s8 viewing; /* the detail view is open; also set when the page changes */
    /* 0x0064 */ CompendiumBrowseEntry entries[0x500];
};

struct CompendiumBrowseWorkA {
    /* 0x0000 */ u8 unk0000[0x14];
    /* 0x0014 */ u32 state;
    /* 0x0018 */ u32 stateArg;
    /* 0x001C */ u8 unk001C[4];
    /* 0x0020 */ FlaggedValueHolder holder;
    /* 0x0094 */ s8 compendiumPercent;
    /* 0x0095 */ u8 unk0095[0xC8 - 0x95];
    /* 0x00C8 */ u8 pointer[0xDC - 0xC8];
    union {
        /* 0x00DC */ u8 rowSprite[0x860 - 0xDC];
        struct {
            /* 0x00DC */ u8 unk00DC[0x800 - 0xDC];
            /* 0x0800 */ CompendiumBrowsePageA page;
        } browse;
    };
    /* 0xA864 */ u8 unkA864[0xE];
    /* 0xA872 */ u16 shownId;
    /* 0xA874 */ s16 mode;
};

typedef char CompendiumBrowseLayoutCheck[
    sizeof(CompendiumBrowseEntry) == 0x20 && sizeof(FlaggedValueHolder) == 0x74 &&
    offsetof(CompendiumBrowseWorkA, rowSprite) == 0xDC && offsetof(CompendiumBrowseWorkA, browse.page.entries) == 0x864 &&
    offsetof(CompendiumBrowseWorkA, shownId) == 0xA872 && offsetof(CompendiumBrowseWorkA, mode) == 0xA874 ? 1 : -1];

/* Returns the highlighted demon's id. Compendium's confirmation path uses the same lookup. */
static __inline u16 compendiumSelectedId(const BibleDevilWork *work)
{
    const BibleDevilEntry *entries = work->entries;
    return entries[flaggedValueHolderGetTotal(&work->list)].devilId;
}

static __inline u16 compendiumSelectedId(const CompendiumBrowseWorkA *work)
{
    const CompendiumBrowseEntry *entries = work->browse.page.entries;
    return entries[flaggedValueHolderGetTotal(&work->holder)].id;
}

struct StatMenu;
extern "C" {
void compendiumRefreshStatusPreview(CompendiumBrowseWorkA *panel);
void FUN_004a3e04(StatMenu *panel);
}

#endif
