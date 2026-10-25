#include "shard/Shard003B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
u32 requestIdToCode(s32 request);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void asdTMTexLoadMainHeap(u32 table, u32 node);

void gfxAdvanceTextureRequestQueue(ResSet* resources, s32 activeRequest)
{
    enum { Idle, Requested, Loading, Loaded };
    for (s32 index = 0; index < 9; ++index) {
        if (activeRequest != index) {
            if (resources->states[index] == Requested) {
                resources->states[index] = Idle;
            }
            if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index)) &&
                resources->states[index] == Loaded && resources) {
                if (asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index)) &&
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
            if (!asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index))) {
                pending = true;
            } else {
                resources->states[index] = Loaded;
            }
        }
    }
    if (!pending) {
        for (s32 index = 0; index < 9; ++index) {
            if (resources->states[index] == Requested) {
                if (resources && !asdTMTexTableNodeIsLoaded(0x2E, requestIdToCode(index)) &&
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
