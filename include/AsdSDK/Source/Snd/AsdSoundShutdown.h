#ifndef ASDSDK_SOURCE_SND_ASDSOUNDSHUTDOWN_H
#define ASDSDK_SOURCE_SND_ASDSOUNDSHUTDOWN_H

#include "AsdSDK/Source/Snd/AsdSoundSystem.h"

/* Single-handle view of the auxiliary slot's opaque heap tail. */
struct AsdSndSingleHeapSlotView {
    u8 heap[0x20];
    s32 handle;
};

struct AsdSndSelectionViewIV {
    u8 prefix[0x1204];
    AsdSndSlotB *slotB;
    AsdSndAuxSlot *auxiliary[2];
    AsdSndSlotC *outputs[2];
    AsdSndSlotA *slotA;

    AsdSndSingleHeapSlotView *getAuxiliary(u32 index) const
    {
        if (index == 0 || index == 1) {
            return reinterpret_cast<AsdSndSingleHeapSlotView *>(auxiliary[index]);
        }
        return NULL;
    }

    AsdSndSlotC *getOutput(u32 index) const
    {
        if (index == 0 || index == 1) {
            return outputs[index];
        }
        return NULL;
    }
};
typedef char AsdSndSelectionOffsets[
    offsetof(AsdSndSelectionViewIV, auxiliary) == 0x1208 &&
    offsetof(AsdSndSelectionViewIV, outputs) == 0x1210 &&
    offsetof(AsdSndSelectionViewIV, slotA) == 0x1218 ? 1 : -1];

/* The 3D manager and stream work occupy the opaque region preceding the duck state. */
struct AsdSnd3dShutdownViewIV {
    u8 prefix[0x784];
    /* 0x784 */ u8 manager[0xc];
    /* 0x790 */ u8 list[0x870];
    /* 0x1000 */ s32 handles[16];
    u8 unk1040[0x124];
    /* 0x1164 */ u8 sourceNode[8];
    u8 unk116c[0x5c];
    /* 0x11c8 */ void *buffer;
    /* 0x11cc */ s8 enabled;
    u8 unk11cd[3];
};
typedef char AsdSndShutdownOffsets[
    offsetof(AsdSndSingleHeapSlotView, handle) == 0x20 &&
    offsetof(AsdSnd3dShutdownViewIV, handles) == 0x1000 &&
    offsetof(AsdSnd3dShutdownViewIV, sourceNode) == 0x1164 &&
    offsetof(AsdSnd3dShutdownViewIV, enabled) == 0x11cc &&
    sizeof(AsdSnd3dShutdownViewIV) == 0x11d0 ? 1 : -1];

#endif
