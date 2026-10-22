/* NON_MATCHING: branch layout: retail returns `(provided & ~owned) != 0` straight after the
 * first branch (`bics; movne r0, #1; pop`) and the table-6 branch jumps back to it. */
#include "shard/X14_AocTexRequest.h"

extern "C" {

void *asdTMTexTableGetNode(u32 table, u32 node);
s32 resourceIsReady(void);
u32 recordPrepareLinkedOwner(void *aoc, u32 table, u32 node);
s32 FUN_004705ec(void *aoc, u32 contentId, s32 arg);
u32 FUN_004706e8(void *aoc, u32 contentId);
s32 FUN_00470b18(void *aoc, u32 contentId, s32 arg);
u32 FUN_00470e48(void *aoc, u32 contentId);

extern void *g_aocSystem;

/* Returns 1 when the requested content provides bits its texture node's owner record lacks. */
u32 FUN_003fcbe0(AocTexRequest *request)
{
    u32 provided;
    u32 owned;

    asdTMTexTableGetNode(request->table, request->node);
    if (resourceIsReady() == 0) {
        return 0;
    }
    if (request->table != 6) {
        if (FUN_004705ec(g_aocSystem, request->contentId, 0) == 0) {
            return 0;
        }
        provided = FUN_004706e8(g_aocSystem, request->contentId);
        owned = recordPrepareLinkedOwner(g_aocSystem, request->table, request->node);
    } else {
        if (FUN_00470b18(g_aocSystem, request->contentId, 0) == 0) {
            return 0;
        }
        provided = FUN_00470e48(g_aocSystem, request->contentId);
        owned = recordPrepareLinkedOwner(g_aocSystem, request->table, request->node);
    }
    return (provided & ~owned) != 0;
}

} /* extern "C" */
