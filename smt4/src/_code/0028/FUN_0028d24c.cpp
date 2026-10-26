/* NON_MATCHING: register allocation only: retail keeps the owner in r5 and the rank in r6 (swapped here). */
#include "common.h"
#include "gamedata/DataTable40.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u8 unk00[0x48];
    /* 0x48 */ s16 active;
    /* 0x4A */ u8 unk4A;
    /* 0x4B */ u8 rank;
} Slot;

typedef struct SlotOwner {
    /* 0x0000 */ u8 unk0000[0x8C];
    /* 0x008C */ u16 ids[0x14];
    /* 0x00B4 */ s16 idCount;
    /* 0x00B6 */ u8 unk00B6[0x2E7E];
    /* 0x2F34 */ u32 rank;
} SlotOwner;

extern Slot *saveGetIndexedMapValue(int index);

/* Finds the id in the owner's list whose slot has the owner's rank (or, with no valid rank, the number of active slots). */
u32 FUN_0028d24c(SlotOwner *owner)
{
    int rank = owner->rank;
    int i;

    if ((u32)(rank - 1) > 3) {
        rank = 0;
        for (i = 0; i < 12; i++) {
            if (saveGetIndexedMapValue(i)->active != 0) {
                rank++;
            }
        }
    }
    if (rank >= 1) {
        for (i = 0; i < owner->idCount; i++) {
            u32 id = owner->ids[i];

            if (reinterpret_cast<Slot *>(dataTable40FindById(id))->rank == rank) {
                return id;
            }
        }
    }
    return 0;
}

} /* extern "C" */
