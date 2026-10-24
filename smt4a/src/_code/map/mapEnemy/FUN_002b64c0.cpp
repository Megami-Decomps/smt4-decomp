/* NON_MATCHING: retail spills r0-r2 and d0-d1 in the prologue (a variadic-style frame), keeps the resource name in a 32-byte buffer at sp, reads the kind back from the stack and runs an empty 21-iteration count-down loop before textFormatBuffer (not reproducible with honest code); this build uses a 0x54-byte buffer and no such loop. */
#include "Model/ModelList.h"
#include "shard/W9_W9Match7_EnemyModelSources.h"

/* One extra-model slot of the enemy owner (Apocalypse layout). */
struct ExtraModelSlot {
    ModelList *model;
    u8 registered;
    u8 active;
    u8 padding[2];
};

/* A reserved encounter: who asked for it, the candidate chosen and the model slot it uses. */
struct EnemyReservation {
    s32 owner;
    s32 candidate;
    s32 selected;
    s32 modelSlot;
};

/* The first group reserves sixteen candidates at once. */
struct EnemyGroupReservation {
    s32 owner;
    s32 candidates[16];
    s32 selected[16];
    s32 modelSlots[16];
};

struct EnemyOwner {
    /* 0x0000 */ u8 unk0000[0xC];
    /* 0x000C */ u8 unk000C[0x3D80];
    /* 0x3D8C */ ExtraModelSlot slots[21];
    /* 0x3E34 */ EnemyGroupReservation groupOne[16];
    /* 0x4A74 */ u8 unk4A74[4];
    /* 0x4A78 */ EnemyReservation groupThree[16];
    /* 0x4B78 */ u8 unk4B78[4];
    /* 0x4B7C */ EnemyReservation groupTwo[16];
    /* 0x4C7C */ u8 unk4C7C[4];
    /* 0x4C80 */ EnemyReservation groupFour[16];
};

extern "C" {
extern EnemyOwner *g_mapEnemy;
extern EnemyExtraModelSource DAT_00582204[];
extern u8 DAT_005806e0[]; /* the model slot of each selected candidate */
extern void *g_handleRegistry;
void textFormatBuffer(char *, const char *, ...);
void *FUN_00178b04(u32, const char *, u32);
ModelList *modelListInit(ModelList *);
void FUN_0040aa6c(ModelList *, const char *);
void FUN_0040aad4(ModelList *, u32);
void FUN_003fe86c(MoriModelBody *, u32, u8, f32, f32);
void handleRegistryRegisterObject(void *, MoriModelBody *);
s32 FUN_004bc2dc(s32 kind, s32 flag);
s32 dataSelectPrioritizedCandidate(s32 index);
}

struct ModelFlags {
    u32 vtable;
    u32 flags;
};

/* Loads the model of `slotIndex` (once), registers it and leaves it inactive. */
static __inline void ensureEnemyModel(EnemyOwner *owner, s32 slotIndex)
{
    ExtraModelSlot *slot = &owner->slots[slotIndex];
    if (slot->model != NULL) {
        return;
    }
    char resourceName[0x54];
    textFormatBuffer(resourceName, "map/all/sym%03d.bam", DAT_00582204[slotIndex].modelId);
    ModelList *model = static_cast<ModelList *>(
        FUN_00178b04(32, "c:\\SMT4F\\SMT4F\\sdds4\\program\\map\\mapEnemy.cpp", 0x375));
    if (model != NULL) {
        model = modelListInit(model);
    }
    slot->model = model;
    FUN_0040aa6c(slot->model, resourceName);
    FUN_0040aad4(slot->model, 0);
    MoriModelBody *body = slot->model->content.body;
    FUN_003fe86c(body, 0, 2, 0.0f, 0.0f);
    handleRegistryRegisterObject(g_handleRegistry, body);
    reinterpret_cast<ModelFlags *>(body)->flags |= 3;
    slot->registered = 1;
    slot->active = 0;
}

/* Reserves an enemy encounter slot of `group` for `owner`, loading its models; returns 1, or -1 when full. */
extern "C" s32 FUN_002b64c0(s32 owner, s32 kind, s32 group)
{
    EnemyOwner *enemies = g_mapEnemy;
    for (s32 i = 0; i < 16; i++) {
        EnemyReservation *reservation;
        if (group == 1) {
            EnemyGroupReservation *entry = &enemies->groupOne[i];
            if (entry->owner == -1) {
                entry->owner = owner;
                for (s32 j = 0; j < 16; j++) {
                    entry->candidates[j] = FUN_004bc2dc(kind, 0);
                    entry->selected[j] = dataSelectPrioritizedCandidate(entry->candidates[j]);
                    u32 modelSlot = DAT_005806e0[entry->selected[j]];
                    entry->modelSlots[j] = modelSlot;
                    ensureEnemyModel(g_mapEnemy, modelSlot);
                }
                return 1;
            }
            continue;
        } else if (group == 2) {
            reservation = &enemies->groupTwo[i];
        } else if (group == 3) {
            reservation = &enemies->groupThree[i];
        } else if (group == 4) {
            reservation = &enemies->groupFour[i];
        } else {
            continue;
        }
        if (reservation->owner == -1) {
            reservation->owner = owner;
            reservation->candidate = FUN_004bc2dc(kind, 0);
            reservation->selected = dataSelectPrioritizedCandidate(reservation->candidate);
            u32 modelSlot = DAT_005806e0[reservation->selected];
            reservation->modelSlot = modelSlot;
            ensureEnemyModel(g_mapEnemy, modelSlot);
            return 1;
        }
    }
    return -1;
}
