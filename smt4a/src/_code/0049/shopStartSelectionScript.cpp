#include "common.h"
#include "text/TextDraw.h"

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
const char *dataTable17Type0GetEntry(u32 *out, s32 item);
void textFormatBuffer(char *dst, const char *format, ...);
u32 tableGroupFindEntryIndex(u32 table, const char *name);
void scrScriptProcessStartEntry(u32 process, u32 index);
void scrRunOpcodesStub(u32 process);
void messageMainSetTargetFlags(s32 arg);

/* Builds the shop's text (one line per item) and starts the "shop_select" script entry. With `second` set each listed item is replaced by the item 4 further on. */
void shopStartSelectionScript(Shop004989f0 *shop, s32 second)
{
    const char *entryName = "shop_select";
    u32 entryOut;
    s32 i;

    sysMemClear(shop->text, 0x200);
    for (i = 0; i < shop->itemCount; i++) {
        s32 item = second == 0 ? shop->items[i] : shop->items[i] + 4;
        const char *entry = dataTable17Type0GetEntry(&entryOut, item);

        textFormatBuffer(shop->text, "%s%s<br>", shop->text, FUN_001654f8(entry, 0, 0));
    }
    scrScriptProcessStartEntry(shop->process, tableGroupFindEntryIndex(shop->table, entryName));
    scrRunOpcodesStub(shop->process);
    messageMainSetTargetFlags(1);
}

} /* extern "C" */
