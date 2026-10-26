#include "shard/PadState.h"
#include "code/Code0028_Smt4.h"

extern "C" {

unsigned int dataTable08Sub2GetRecord(u32 id);
extern PadState *gameGetPlayerData(void);

typedef struct Source {
    /* 0x00 */ u8 unk00[0x6A];
    /* 0x6A */ u16 unk6A;
} Source;

typedef struct Dest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u32 unk08;
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u16 unk10;
} Dest;

void FUN_00283f30(Dest *dest, int withSource)
{
    PadState *pad = gameGetPlayerData();
    Source *source;

    dest->unk00 = pad->unk34;
    dest->unk04 = pad->unk38;
    dest->unk08 = pad->unk3C;
    dest->unk0C = pad->unk40;
    if (withSource != 0) {
        source = (Source *)dataTable08Sub2GetRecord(pad->unk0C);
        if (source != NULL) {
            dest->unk10 = source->unk6A;
        }
    }
}

} /* extern "C" */
