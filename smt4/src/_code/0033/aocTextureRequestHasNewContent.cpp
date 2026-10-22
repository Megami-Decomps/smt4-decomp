#include "shard/AocTextureRequest.h"

extern "C" {

extern u32 g_aocSystem;

void asdTMTexTableCallFileB(u32 table, u32 file);
s32 resourceIsReady(void);
s32 FUN_0023e330(u32 aoc, u32 contentId, s32 arg2);
s32 FUN_0023e3a4(u32 aoc, u32 contentId, s32 arg2);
u32 FUN_00389700(u32 aoc, u32 contentId);
u32 FUN_00389dc0(u32 aoc, u32 contentId);
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
        if (!FUN_0023e3a4(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = FUN_00389dc0(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->file);
    } else {
        if (!FUN_0023e330(g_aocSystem, request->contentId, 0)) {
            return false;
        }
        available = FUN_00389700(g_aocSystem, request->contentId);
        prepared = recordPrepareLinkedOwner(g_aocSystem, request->table, request->file);
    }
    return (available & ~prepared) != 0;
}

} /* extern "C" */
