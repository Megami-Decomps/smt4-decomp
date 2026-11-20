#include "shard/AocTextureRequest.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

extern u32 g_aocSystem;

s32 resourceIsReady(void);
s32 aocPackageHasVoiceContent(u32 aoc, u32 contentId, s32 arg2);
s32 aocPackageHasTextureContent(u32 aoc, u32 contentId, s32 arg2);
u32 aocResourceStateValueKind12(u32 aoc, u32 contentId);
u32 aocResourceStateValueKind16(u32 aoc, u32 contentId);
u32 recordPrepareLinkedOwner(u32 aoc, u32 table, u32 file);

/* Loads the request's texture file and returns whether the content provides bits not yet prepared. */
bool aocTextureRequestHasNewContent(AocTextureRequest *request)
{
    u32 available;
    u32 prepared;

    asdTMTexTableCallFileB(request->table, request->file);
    if (!resourceIsReady()) {
        return false;
    }
    if (request->table == 12) {
        if (!aocPackageHasTextureContent(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = aocResourceStateValueKind16(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->file);
    } else {
        if (!aocPackageHasVoiceContent(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = aocResourceStateValueKind12(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->file);
    }
    return (available & ~prepared) != 0;
}

} /* extern "C" */
