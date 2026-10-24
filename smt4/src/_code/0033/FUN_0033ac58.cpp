/* NON_MATCHING: control flow, field-by-field parameter copy and call sequence match; only the register numbering differs (retail resource r4 / i r5 / entry r6 / work r7, armcc picks r7 / r4 / r5 / r6). */
#include "common.h"

/* A loaded model resource: an id and the model parameters copied into the battle's slot table. */
struct ModelResource {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 id;
    /* 0x08 */ u32 param08;
    /* 0x0C */ u32 param0C;
    /* 0x10 */ u32 param10;
    /* 0x14 */ u32 param14;
    /* 0x18 */ u32 param18;
    /* 0x1C */ u32 param1C;
    /* 0x20 */ u32 param20;
    /* 0x24 */ u32 param24;
    /* 0x28 */ u32 param28;
    /* 0x2C */ u32 param2C;
    /* 0x30 */ u32 param30;
    /* 0x34 */ u32 param34;
    /* 0x38 */ u32 param38;
    /* 0x3C */ u8 flagA;
    /* 0x3D */ u8 flagB;
    /* 0x3E */ u8 unk3E[2];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
};

/* One slot of the battle's model table (0x48 bytes); only the parameters are copied in. */
struct ModelSlot {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 id;
    /* 0x08 */ u32 param08;
    /* 0x0C */ u32 param0C;
    /* 0x10 */ u32 param10;
    /* 0x14 */ u32 param14;
    /* 0x18 */ u32 param18;
    /* 0x1C */ u32 param1C;
    /* 0x20 */ u32 param20;
    /* 0x24 */ u32 param24;
    /* 0x28 */ u32 param28;
    /* 0x2C */ u32 param2C;
    /* 0x30 */ u32 param30;
    /* 0x34 */ u32 param34;
    /* 0x38 */ u32 param38;
    /* 0x3C */ u8 flagA;
    /* 0x3D */ u8 flagB;
    /* 0x3E */ u8 unk3E[2];
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;

    void copyParameters(const ModelResource *resource)
    {
        id = resource->id;
        param08 = resource->param08;
        param0C = resource->param0C;
        param10 = resource->param10;
        param14 = resource->param14;
        param18 = resource->param18;
        param1C = resource->param1C;
        param20 = resource->param20;
        param24 = resource->param24;
        param28 = resource->param28;
        param2C = resource->param2C;
        param30 = resource->param30;
        param34 = resource->param34;
        param38 = resource->param38;
        flagA = resource->flagA;
        flagB = resource->flagB;
        unk40 = resource->unk40;
        unk44 = resource->unk44;
    }
};

/* A pending model load: its state flags and the resource id it waits for. */
struct ModelLoadEntry {
    /* 0x00 */ u32 flags;      /* 1: header parsed, 2: resources loaded */
    /* 0x04 */ u32 resourceId;
};

/* The battle work block as the model loader sees it (Shin Megami Tensei IV layout). */
struct BattleModelWork {
    /* 0x0000 */ u8 unk0000[0x1FE4];
    /* 0x1FE4 */ ModelLoadEntry loads[0x2A];
    /* 0x2134 */ ModelResource *resources[0x2A];
    /* 0x21DC */ u8 unk21DC[0x357C - 0x21DC];
    /* 0x357C */ ModelSlot slots[0x32];
    /* 0x438C */ s32 loadCount;

    /* The loaded resource with the given id, or NULL. */
    ModelResource *findResource(u32 wanted)
    {
        for (s32 j = 0; j < 0x2A; j++) {
            if (resources[j] != NULL && resources[j]->id == wanted) {
                return resources[j];
            }
        }
        return NULL;
    }
};

extern "C" {
void modelAnimationEnsureData(ModelResource *resource);
void aocHandleButtons(ModelResource *resource, s32 mode);
s32 FUN_00294fe0(ModelResource *resource);
s32 nkdwHeaderParse(ModelResource *resource);
}

/* Polls the pending model loads: parses each resource's header, then its data, and copies the
 * parameters into the slot table; returns 1 once every load has finished. */
extern "C" u32 FUN_0033ac58(BattleModelWork *work)
{
    u32 done = 1;
    ModelResource *resource;
    ModelLoadEntry *entry;

    for (s32 i = 0; i < work->loadCount; i++) {
        resource = work->findResource(work->loads[i].resourceId);
        entry = &work->loads[i];
        if ((entry->flags & 1) == 0) {
            if (nkdwHeaderParse(resource) == 0) {
                done = 0;
            } else {
                entry->flags |= 1;
                aocHandleButtons(resource, 7);
            }
        }
        if ((entry->flags & 2) == 0) {
            if (FUN_00294fe0(resource) == 0) {
                done = 0;
            } else {
                modelAnimationEnsureData(resource);
                entry->flags |= 2;
                work->slots[i].copyParameters(resource);
            }
        }
    }
    return done;
}
