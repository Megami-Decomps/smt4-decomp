#include "code/Code002a.h"
#include "code/Code002a_VariantA.h"
#include "shard/Shard003C.h"
#include "shard/Shard0031.h"

extern "C" {

typedef struct PartyObj {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 unk04;
    /* 0x005 */ u8 unk05[0x25B];
    /* 0x260 */ u8 block260[4];
    /* 0x264 */ u8 unk264[0x60];
    /* 0x2C4 */ u32 ids[12];
    /* 0x2F4 */ u8 unk2F4[0x38];
    /* 0x32C */ s32 unk32C;
} PartyObj;

typedef struct PartyOwner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ PartyObj *obj;
} PartyOwner;

extern Rec12C *partyGetSlot(u32 index);
extern s32 dataTable10FindValue(u32 value);
extern void scrSetResult(s32 value);
extern PartyOwner g_callbackOwnerSlots;

/* Script command: result is dataTable10FindValue of the +0x12C halfword of the currently selected party entry. */
u32 scrCommGetPartyEntryValue(void)
{
    PartyObj *obj = g_callbackOwnerSlots.obj;
    s32 index;
    Rec12C *entry;

    if (obj->unk04 == 1) {
        index = obj->unk32C;
    } else {
        index = FUN_002a4878(obj->block260);
        index = index + FUN_002a4894(reinterpret_cast<const Object *>(obj->block260)) * 4;
    }
    entry = partyGetSlot(obj->ids[index] & 0xFFFF);
    scrSetResult(dataTable10FindValue(entry->unk12C));
    return 1;
}

} /* extern "C" */
