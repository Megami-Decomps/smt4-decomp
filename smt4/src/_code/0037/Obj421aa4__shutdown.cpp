/* NON_MATCHING: written from the retail flow (all calls, vtable slots and stores match); armcc hoists the first handle load above the three state stores where retail keeps program order. */
#include "classes/Obj421aa4Requests.h"

extern "C" {
void nw_snd_SoundHandle_DetachSound(u32 handle);
void nw_snd_SoundPlayer_detail_FreePlayerHeap(u32 player, Obj421aa4 *sound);
void nw_snd_SoundPlayer_detail_RemoveSound(u32 player, Obj421aa4 *sound);
void nw_snd_internal_ExternalSoundPlayer_RemoveSound(u32 player, Obj421aa4 *sound);
}

/* The object a sound reports its release to (slot 3 of its vtable). */
class Obj421aa4Listener {
public:
    virtual void vfunc00();
    virtual void vfunc04();
    virtual void vfunc08();
    virtual void notifyRelease(u32 handle, Obj421aa4 *sound);
};

// Announces the sound's end to the sound manager, detaches it from its handles, player and listener
// and marks it inactive.
void Obj421aa4::shutdown()
{
    if (active != 0) {
        if (unk85[1] != 0) {
            Obj421aa4Manager *manager = FUN_002baed8();
            Obj421aa4Node *node = soundRequestBegin(manager, 6);
            node->type = 6;
            node->id = vfunc20();
            node->byte = unk85[3];
            listAppendNode(manager, node);
        }
        unk85[4] = 0;
        unk8a[0] = 2;
        unk9c = -1;
        if (unk04[1] != 0) {
            nw_snd_SoundHandle_DetachSound(unk04[1]);
        }
        if (unk04[2] != 0) {
            nw_snd_SoundHandle_DetachSound(unk04[2]);
        }
        if (vfunc18()) {
            vfunc1c();
        }
        if (unk04[0] != 0) {
            nw_snd_SoundPlayer_detail_FreePlayerHeap(unk04[3], this);
        }
        if (unk04[3] != 0) {
            nw_snd_SoundPlayer_detail_RemoveSound(unk04[3], this);
        }
        if (unk04[5] != 0) {
            nw_snd_internal_ExternalSoundPlayer_RemoveSound(unk04[5], this);
        }
        Obj421aa4Listener *listener = (Obj421aa4Listener *)unk1c[2];
        if (listener != NULL) {
            listener->notifyRelease(unk1c[3], this);
            unk1c[3] = 0;
        }
        unk85[1] = 0;
        unk85[3] = 0;
        Obj421aa4Manager *manager = FUN_002baed8();
        Obj421aa4Node *node = soundRequestBegin(manager, 6);
        node->type = 4;
        node->id = vfunc20();
        listAppendNode(manager, node);
        active = 0;
    }
}
