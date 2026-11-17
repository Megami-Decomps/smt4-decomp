#include "shard/Shard004C.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

typedef struct Source4C {
    /* 0x000 */ u8 unk000[0x166];
    /* 0x166 */ u16 unk166;
    /* 0x168 */ u8 unk168[0x290];
    /* 0x3F8 */ s32 unk3F8;
    /* 0x3FC */ SlotRecordA *source3FC;
    /* 0x400 */ SlotRecordA *source400;
    /* 0x404 */ SlotRecordA *source404;
} Source4C;

extern void playerGetWords(u16 *out, s32 a);
extern void FUN_0035bd94(u16 id, u16 *out, u32 count);
extern void halves34Copy(const SlotRecordA *src, u16 *out);

/* Fills `out` with the halves of the active source: the first non-null entry, else the default record. */
void source4CCopyHalves(Source4C *obj, u16 *out)
{
    SlotRecordA *source;

    if (obj->unk3F8 != 0) {
        playerGetWords(out, 1);
        return;
    }
    source = obj->source3FC;
    if (source == NULL) {
        source = obj->source400;
    }
    if (source != NULL) {
        halves34Copy(source, out);
        return;
    }
    if (obj->source404 != NULL) {
        FUN_0035bd94(obj->unk166, out, 8);
    }
}

} /* extern "C" */
