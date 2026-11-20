#include "shard/X14_AocTexRequest.h"

extern "C" {

extern u32 g_aocSystem;

void *asdTMTexTableGetNode(u32 table, u32 node);
s32 resourceIsReady(void);
s32 aocPackageHasVoiceContent(u32 aoc, u32 contentId, s32 arg2);
s32 aocPackageHasTextureContent(u32 aoc, u32 contentId, s32 arg2);
u32 aocResourceStateValueKind12(u32 aoc, u32 contentId);
u32 aocResourceStateValueKind16(u32 aoc, u32 contentId);
u32 recordPrepareLinkedOwner(u32 aoc, u32 table, u32 node);

/* Loads the request's texture node and returns whether the content provides bits not yet prepared. */
bool aocTextureRequestHasNewContent(AocTexRequest *request)
{
    u32 available;
    u32 prepared;

    asdTMTexTableGetNode(request->table, request->node);
    if (!resourceIsReady()) {
        return false;
    }
    if (request->table == 6) {
        if (!aocPackageHasTextureContent(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = aocResourceStateValueKind16(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->node);
    } else {
        if (!aocPackageHasVoiceContent(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = aocResourceStateValueKind12(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->node);
    }
    return (available & ~prepared) != 0;
}

} /* extern "C" */
