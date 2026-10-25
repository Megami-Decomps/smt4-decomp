/* NON_MATCHING: signed adjacent flags match; final list-insertion argument setup remains reversed. */
#include "classes/Obj421aa4.h"
#include "common.h"

struct SoundLoadSlot;
struct SoundListLink {
    SoundListLink *next;
    SoundListLink *previous;
};
struct SoundPlayerList {
    /* 0x00 */ u32 count;
    /* 0x04 */ SoundListLink root;
};
struct SoundLoadManager {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SoundPlayerList active;
    /* 0x14 */ SoundPlayerList free;
};
struct SoundLoadVtable {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*vfunc10)(SoundLoadSlot *slot);
};
struct SoundLoadSlot {
    /* 0x000 */ SoundLoadVtable *vtable;
    /* 0x004 */ u8 unk004[0xd0];
    /* 0x0d4 */ SoundListLink link;
    /* 0x0dc */ u8 unk0dc[0xb8];
    /* 0x194 */ SoundLoadManager *manager;
    /* 0x198 */ u8 task[0xc];
    /* 0x1a4 */ u8 event[8];
    /* 0x1ac */ u8 unk1ac[0x2c];
    /* 0x1d8 */ u8 heapDataManager[1];
    /* 0x1d9 */ u8 unk1d9[0x277];
    /* 0x450 */ u32 unk450;
    /* 0x454 */ u32 unk454;
    /* 0x458 */ u8 unk458[4];
    /* 0x45c */ s8 state;
    /* 0x45d */ s8 active;
    /* 0x45e */ u8 unk45e;
};
struct SoundTaskManager;

extern "C" {
SoundTaskManager *FUN_002bb020();
void nw_snd_internal_TaskManager_CancelTask(SoundTaskManager *manager, void *task);
void nn_os_LightEvent_Wait(void *event);
void nw_snd_internal_PlayerHeapDataManager_Finalize(void *manager);
void nw_ut_internal_LinkListImpl_erase_2B743C(SoundPlayerList *list, SoundListLink *node);
void nw_ut_internal_LinkListImpl_insert(SoundPlayerList *list,
                                       SoundListLink *position, SoundListLink *node);

void FUN_00380718(SoundLoadSlot *slot)
{
    if (!slot->active) {
        return;
    }
    slot->active = 0;
    if (slot->state == 1) {
        nw_snd_internal_TaskManager_CancelTask(FUN_002bb020(), slot->task);
        nn_os_LightEvent_Wait(slot->event);
    }
    slot->unk450 = 0;
    slot->unk454 = 0;
    slot->unk45e = 0;
    ((Obj421aa4 *)(slot))->Obj421aa4::shutdown();
    nw_snd_internal_PlayerHeapDataManager_Finalize(slot->heapDataManager);
    SoundLoadManager *manager = slot->manager;
    nw_ut_internal_LinkListImpl_erase_2B743C(&manager->active, &slot->link);
    slot->vtable->vfunc10(slot);
    nw_ut_internal_LinkListImpl_insert(&manager->free, &manager->free.root, &slot->link);
}
}
