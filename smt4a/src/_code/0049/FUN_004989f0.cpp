#include "common.h"

extern "C" {

typedef struct Shop004989f0 {
    /* 0x000 */ u8 unk000[0x184];
    /* 0x184 */ u32 table;
    /* 0x188 */ u8 unk188[8];
    /* 0x190 */ u32 process;
    /* 0x194 */ char text[0x200];
    /* 0x394 */ u8 unk394[0x15c78];
    /* 0x1600c */ s32 items[4];
    /* 0x1601c */ s32 itemCount;
} Shop004989f0;

void sysMemClear(void *buffer, s32 size);
u32 dataTable17Type0GetEntry(u32 *out, s32 item);
u32 FUN_001654f8(u32 entry, s32 a, s32 b);
void textFormatBuffer(char *dst, const char *format, char *src, u32 entry);
u32 tableGroupFindEntryIndex(u32 table, const char *name);
void scrScriptProcessStartEntry(u32 process, u32 index);
void FUN_00224880(u32 process);
void FUN_003c5fc4(s32 arg);

/* Builds the shop's text (one line per item) and starts the "shop_select" script entry. With `second` set each listed item is replaced by the item 4 further on. */
void FUN_004989f0(Shop004989f0 *shop, s32 second)
{
    const char *entryName = "shop_select";
    u32 entryOut;
    s32 i;

    sysMemClear(shop->text, 0x200);
    for (i = 0; i < shop->itemCount; i++) {
        s32 item = second == 0 ? shop->items[i] : shop->items[i] + 4;
        u32 entry = dataTable17Type0GetEntry(&entryOut, item);

        textFormatBuffer(shop->text, "%s%s<br>", shop->text, FUN_001654f8(entry, 0, 0));
    }
    scrScriptProcessStartEntry(shop->process, tableGroupFindEntryIndex(shop->table, entryName));
    FUN_00224880(shop->process);
    FUN_003c5fc4(1);
}

} /* extern "C" */
