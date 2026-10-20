/* Returns the wave sound data record `index` of the info block's table, or NULL when it is out of range or not a wave sound reference. */
#include "common.h"

extern "C" {

/* A table: a count, then references; reference i is read at +4 (kind) and +8 (offset from the table) of its 8-byte slot. */
struct WaveSoundTable {
    /* 0x00 */ u32 count;
};

struct WaveSoundSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u16 kind;   /* 0x4900: a reference to a wave sound record */
    /* 0x06 */ u16 unk06;
};

struct InfoBlockBody {
    /* 0x00 */ u8 unk00[12];
    /* 0x0c */ u32 tableOffset;
};

void *nw_snd_internal_WaveSoundFile_InfoBlockBody_GetWaveSoundData(InfoBlockBody *body, u32 index)
{
    WaveSoundTable *table = (WaveSoundTable *)((u8 *)body + body->tableOffset);
    WaveSoundSlot *slot;

    if (index >= table->count) {
        return NULL;
    }
    slot = (WaveSoundSlot *)((u8 *)table + index * 8);
    if (slot->kind != 0x4900) {
        return NULL;
    }
    return (u8 *)table + (slot + 1)->unk00;
}

}
