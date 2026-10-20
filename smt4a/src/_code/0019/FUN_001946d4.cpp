#include "common.h"

/* An object with a vtable whose slot 7 answers a query; `enabled` (byte at 4) says whether to ask. */
class SoundQuery {
public:
    virtual void unk00();
    virtual void unk04();
    virtual void unk08();
    virtual void unk0c();
    virtual void unk10();
    virtual void unk14();
    virtual void unk18();
    virtual u32 query(u32 a, u32 b);

    u8 enabled;
};

typedef struct SoundHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 archive;
    /* 0x08 */ SoundQuery *queryObject;
} SoundHolder;

static u32 askIfEnabled(SoundQuery *object, u32 a, u32 b)
{
    if (object->enabled == 0) {
        return 0;
    }
    return object->query(a, b);
}

extern "C" {

u32 nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(u32 archive);

/* The bank info for the holder's archive, OR-ed with the query object's answer when it is enabled. */
u32 FUN_001946d4(SoundHolder *holder, u32 a, u32 b)
{
    u32 info = nw_snd_internal_SoundArchiveFileReader_ReadBankInfo(holder->archive);
    SoundQuery *object = holder->queryObject;

    if (object != NULL) {
        info |= askIfEnabled(object, a, b);
    }
    return info;
}

} /* extern "C" */
