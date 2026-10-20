#include "shard/Shard003F.h"

extern "C" {

typedef struct Rec32 {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u16 unk32;
} Rec32;

extern Rec32 *FUN_00184310(u16 id);

u16 FUN_003f3908(Lookup62 *unit)
{
    Rec32 *rec = FUN_00184310(unit->id);

    return rec->unk32;
}

} /* extern "C" */
