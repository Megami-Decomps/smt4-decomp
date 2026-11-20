#include "gamedata/NkmBaseRecordA.h"

extern "C" {

typedef struct PartyModelSlot {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 modelId; // -1 when empty
} PartyModelSlot;

typedef struct PartyModelHandle {
    /* 0x00 */ u32 handle;
    /* 0x04 */ u8 unk04[0xC];
} PartyModelHandle;

typedef struct PartyModelWork {
    /* 0x0000 */ u8 unk0000[0x201C];
    /* 0x201C */ PartyModelSlot slots[42];
    /* 0x216C */ u8 unk216C[0x2C0C];
    /* 0x4D78 */ PartyModelHandle handles[12];
} PartyModelWork;

typedef struct PartyMember {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 devilId;
} PartyMember;

PartyMember *partyGetSlotPreferredFirst(u16 index);
s32 partySlotIsOccupied(PartyMember *member);
u32 resourceCacheGetOrLoadModel(u32 modelId, s32 a, s32 b);

/* Clears the model slots, then loads the model of each of the 12 party members present. */
void partyModelSlotsLoad(PartyModelWork *work)
{
    s32 i;

    for (u32 slot = 0; slot < 42; slot++) {
        work->slots[slot].modelId = -1;
        work->slots[slot].unk00 = 0;
    }
    for (i = 0; i < 12; i++) {
        PartyMember *member = partyGetSlotPreferredFirst(i);
        NkmBaseRecordA *data;
        u16 modelId;

        if (partySlotIsOccupied(member) == 0) {
            continue;
        }
        data = nkmBaseGetRecord(member->devilId);
        if (data == NULL) {
            continue;
        }
        modelId = data->model;
        work->slots[i].modelId = modelId;
        work->handles[i].handle = resourceCacheGetOrLoadModel(modelId, 1, 0);
    }
}

} /* extern "C" */
