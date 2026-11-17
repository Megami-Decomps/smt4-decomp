#include "gamedata/NkmBaseRecordA.h"

extern "C" {

typedef struct Unite {
    /* 0x0000 */ u8 unk0000[0x8DB0];
    /* 0x8DB0 */ u8 list[0xCC];
    /* 0x8E7C */ u32 selection;
    /* 0x8E80 */ u8 unk8E80[0xA];
    /* 0x8E8A */ u8 listReady;
    /* 0x8E8B */ u8 unk8E8B;
    /* 0x8E8C */ u32 slots[8];
    /* 0x8EAC */ u8 unk8EAC;
} Unite;

extern Unite *g_unite;

int unitRecordBuild(u32 id, u8 *record);
u32 getUnlockedSlotCount(u8 *record);
void __aeabi_memset4(void *block, u32 size, u32 value);
int gridNavigationConfigure(void *list, u32 count, s32 columns, s32 a, s32 b, s32 c);

/* Rebuilds the unite list for the unit record of demon `id`: sizes it to the unlocked slot count and clears the slots. */
void uniteListRebuild(u32 id)
{
    Unite *unite = g_unite;
    u8 record[304];

    u32 slotCount;

    unitRecordBuild(nkmBaseGetRecord(id)->id, record);
    slotCount = getUnlockedSlotCount(record);
    unite->selection = 0;
    gridNavigationConfigure(unite->list, slotCount, 8, 1, 1, 1);
    unite->listReady = 1;
    __aeabi_memset4(unite->slots, sizeof(unite->slots), 0xFFFFFFFF);
    unite->unk8EAC = 0;
}

} /* extern "C" */
