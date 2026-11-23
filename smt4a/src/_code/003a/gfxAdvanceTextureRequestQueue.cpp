#include "shard/Shard003B.h"
#include "saveLoadUI/SaveLoadUIBase.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"

extern "C" {
void asdTMTexTableReleaseNode(u32 table, u32 node);

void gfxAdvanceTextureRequestQueue(ResSet* resources, s32 activeRequest)
{
    enum { Idle, Requested, Loading, Loaded };
    for (s32 index = 0; index < 9; ++index) {
        if (activeRequest != index) {
            if (resources->states[index] == Requested) {
                resources->states[index] = Idle;
            }
            if (requestTextureIsLoaded(index) &&
                resources->states[index] == Loaded && resources) {
                if (requestTextureIsLoaded(index) &&
                    resources->states[index] != Loading) {
                    asdTMTexTableReleaseNode(0x2E, requestIdToCode(index));
                    resources->states[index] = Idle;
                }
            }
        }
    }
    bool pending = false;
    for (s32 index = 0; index < 9; ++index) {
        if (resources->states[index] == Loading) {
            if (!requestTextureIsLoaded(index)) {
                pending = true;
            } else {
                resources->states[index] = Loaded;
            }
        }
    }
    if (!pending) {
        for (s32 index = 0; index < 9; ++index) {
            if (resources->states[index] == Requested) {
                if (resources && !requestTextureIsLoaded(index) &&
                    resources->states[index] != Loaded && resources->states[index] != Loading) {
                    asdTMTexLoadMainHeap(0x2E, requestIdToCode(index));
                    resources->states[index] = Loading;
                }
                return;
            }
        }
    }
}
}
