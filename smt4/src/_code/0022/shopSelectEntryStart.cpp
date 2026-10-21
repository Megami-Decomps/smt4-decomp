#include "common.h"

extern "C" {

typedef struct ShopScene {
    /* 0x00000 */ u8 unk00000[0x160];
    /* 0x00160 */ u32 tableGroup;
    /* 0x00164 */ u8 unk00164[8];
    /* 0x0016C */ u32 process;
    /* 0x00170 */ char text[0x200];
    /* 0x00370 */ u8 unk00370[0x159BC];
    /* 0x15D2C */ s32 ids[4];
    /* 0x15D3C */ s32 idCount;
} ShopScene;

s32 memClear(void *block, s32 size);
u32 dataTable17Sub0GetRecord(u32 *scratch, s32 id);
u32 FUN_002bcfc0(u32 record, s32 arg);
s32 textFormatBuffer(char *buffer, const char *format, ...);
u32 tableGroupFindEntryIndex(u32 group, const char *name);
s32 scrScriptProcessStartEntry(u32 process, u32 entry);
s32 FUN_0019e0c0(u32 process);
s32 FUN_0023553c(s32 arg);

/* Builds the shop's item text list (one "name<br>" per item) and starts the "shop_select" script entry. */
void shopSelectEntryStart(ShopScene *scene, s32 mode)
{
    const char *entryName = "shop_select";
    u32 scratch;
    s32 i;

    memClear(scene->text, 0x200);
    for (i = 0; i < scene->idCount; i++) {
        s32 id;
        u32 record;
        u32 name;

        if (mode == 0) {
            id = scene->ids[i];
        } else {
            id = scene->ids[i] + 4;
        }
        record = dataTable17Sub0GetRecord(&scratch, id);
        name = FUN_002bcfc0(record, 0);
        textFormatBuffer(scene->text, "%s%s<br>", scene->text, name);
    }
    scrScriptProcessStartEntry(scene->process, tableGroupFindEntryIndex(scene->tableGroup, entryName));
    FUN_0019e0c0(scene->process);
    FUN_0023553c(1);
}

} /* extern "C" */
