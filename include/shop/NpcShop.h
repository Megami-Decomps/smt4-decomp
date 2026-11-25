/* Apocalypse: the NPC demon shop's script driver (the work area scrTransitionUpdate steps: FUN_003e36e4 loads the
 * shop's offers, npcShopSelectUpdate lists them as choices, FUN_003e37f8 and FUN_003e3bcc handle the chosen one). */
#ifndef SHOP_NPCSHOP_H
#define SHOP_NPCSHOP_H

#include "common.h"
#include <stddef.h>
#include "script/scrScriptProcess.h"

/* NpcShopWork.mode values. */
enum {
    NPC_SHOP_MODE_SELECT = 3,   /* list the offers and wait for a choice */
    NPC_SHOP_MODE_OFFER = 4,    /* the chosen offer */
    NPC_SHOP_MODE_LEAVE = 6,    /* the list was cancelled */
    NPC_SHOP_MODE_EMPTY = 7     /* nothing could be listed */
};

/* One demon an NPC shop offers: a row of data table 0x4f/1 (0x24 bytes). */
struct NpcShopOffer {
    /* 0x00 */ u16 shopId;
    /* 0x02 */ u16 demonId;
    /* 0x04 */ s32 price;
    /* 0x08 */ u16 skills[8];
    /* 0x18 */ u16 level;
    /* 0x1A */ u16 stats[5];
};

struct NpcShopWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s32 mode;
    /* 0x08 */ s32 step;                /* the mode's own step */
    /* 0x0C */ s32 previousMode;
    /* 0x10 */ void *scriptData;
    /* 0x14 */ void *scriptTable;       /* the shop script's entry names (tableGroupFindEntryIndex) */
    /* 0x18 */ ScriptProcess *script;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ NpcShopOffer offers[3];
    /* 0x8C */ s32 choices[3];          /* the offer each listed choice stands for, -1 = none */
    /* 0x98 */ u8 askedBefore;          /* the list is shown again: the script uses its shorter prompts */
    /* 0x99 */ u8 unk99[3];
    /* 0x9C */ u32 shopId;
    /* 0xA0 */ s32 selected;            /* the chosen offer */
    /* 0xA4 */ s32 skillCount;          /* skills offered to the selected demon */
    /* 0xA8 */ s32 unlockedCount;       /* how many skill slots are available */
};

typedef char NpcShopWorkCheck[sizeof(NpcShopOffer) == 0x24 && offsetof(NpcShopWork, offers) == 0x20 &&
    offsetof(NpcShopWork, choices) == 0x8C && offsetof(NpcShopWork, askedBefore) == 0x98 &&
    offsetof(NpcShopWork, selected) == 0xA0 && offsetof(NpcShopWork, skillCount) == 0xA4 &&
    offsetof(NpcShopOffer, level) == 0x18 ? 1 : -1];

#endif
