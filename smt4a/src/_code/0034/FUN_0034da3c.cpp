/* NON_MATCHING: retail predicates the last release call (movne/movne/blne); armcc here branches around an unpredicated call. Everything else, including the compiler's two trailing nops, matches. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {

/* A texture-table owner: either an external resource or two table nodes. */
struct TextureOwnerWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 mode;
    /* 0x10 */ u8 unk10[0x30];
    /* 0x40 */ s32 table;
    /* 0x44 */ s32 node;
    /* 0x48 */ s32 extraNode;
    /* 0x4C */ void *resource;
    /* 0x50 */ u8 unk50[0x38];
    /* 0x88 */ u8 hasDefault;
};

void resourceReleaseReference(void *resource);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void asdMemFree(void *block);

/* Releases the work area's textures and frees it. */
void FUN_0034da3c(u32 job)
{
    TextureOwnerWork *work = (TextureOwnerWork *)jobGetWork(job);

    if (work->resource == NULL) {
        if (work->mode != 1) {
            asdTMTexTableReleaseNode(work->table, work->node);
            if (work->extraNode >= 0) {
                asdTMTexTableReleaseNode(work->table, work->extraNode);
            }
            if (work->hasDefault != 0) {
                asdTMTexTableReleaseNode(0x27, 0);
            }
        }
    } else {
        resourceReleaseReference(work->resource);
        work->resource = NULL;
    }
    asdMemFree(work);
}

} /* extern "C" */
