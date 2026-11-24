#pragma once
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "classes/Obj557d00.h"
#include <stddef.h>

/* A model request from content or the renderer. The target is a file handle
 * unless isResource says it already points to the loaded model data. */
struct MoriModelRequest {
    /* 0x00 */ void *target;
    /* 0x04 */ u8 isResource;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 commandHeap;
    /* 0x0C */ u32 keyHeap;
    /* 0x10 */ u32 curveHeap;
    /* 0x14 */ u8 mode;

    MoriModelRequest() : target(NULL), isResource(0), commandHeap(ASD_HEAP_VRAM_B),
                         keyHeap(ASD_HEAP_EXTRA), curveHeap(ASD_HEAP_EXTRA), mode(0) {}

    explicit MoriModelRequest(u32 fileId) : isResource(0), commandHeap(ASD_HEAP_VRAM_B),
                                            keyHeap(ASD_HEAP_EXTRA), curveHeap(ASD_HEAP_EXTRA), mode(0)
    {
        target = (void *)fileId;
    }

    MoriModelRequest &bindTarget(void *resource)
    {
        target = resource;
        return *this;
    }

    MoriModelRequest &setResourceMode(bool direct)
    {
        isResource = direct;
        return *this;
    }

    MoriModelRequest &setCommandHeap(u32 heap)
    {
        commandHeap = heap;
        return *this;
    }

    MoriModelRequest &setKeyHeap(u32 heap)
    {
        keyHeap = heap;
        return *this;
    }

    MoriModelRequest &setMode(u8 value)
    {
        mode = value;
        return *this;
    }
};
typedef char MoriModelRequestLayoutCheck[offsetof(MoriModelRequest, target) == 0 &&
    offsetof(MoriModelRequest, isResource) == 4 && offsetof(MoriModelRequest, commandHeap) == 8 &&
    offsetof(MoriModelRequest, keyHeap) == 0xC && offsetof(MoriModelRequest, curveHeap) == 0x10 &&
    offsetof(MoriModelRequest, mode) == 0x14 && sizeof(MoriModelRequest) == 0x18 ? 1 : -1];

extern "C" {

u32 FUN_00177654(void);
Obj557d00 *moriModelResourceCreate(const MoriModelRequest *request);
void FUN_0016c88c(const MoriModelRequest *request, Obj557d00 *resource);

} /* extern "C" */
