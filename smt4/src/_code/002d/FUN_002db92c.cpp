/* NON_MATCHING: retail predicates the last release call (movne/movne/blne); armcc here branches around an unpredicated call. Everything else, including the compiler's two trailing nops, matches. */
#include "common.h"
#include "shard/JobWork.h"

extern "C" {

/* A texture-table owner: either an external resource or two table nodes. */
struct TextureOwnerWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 mode;
    /* 0x10 */ u8 unk10[0x2C];
    /* 0x3C */ s32 table;
    /* 0x40 */ s32 node;
    /* 0x44 */ s32 extraNode;
    /* 0x48 */ void *resource;
    /* 0x4C */ u8 unk4C[0x18];
    /* 0x64 */ u8 hasDefault;
};

void resourceReleaseReference(void *resource);
void asdTMTexTableReleaseNode(s32 table, s32 node);
void asdMemFree(void *block);

/* Releases the work area's textures and frees it. */
void FUN_002db92c(u32 job)
{
    TextureOwnerWork *work = (TextureOwnerWork *)jobGetWork(job);

    if (work->resource == NULL) {
        if (work->mode != 1) {
            asdTMTexTableReleaseNode(work->table, work->node);
            if (work->extraNode >= 0) {
                asdTMTexTableReleaseNode(work->table, work->extraNode);
            }
            if (work->hasDefault != 0) {
                asdTMTexTableReleaseNode(0x32, 0);
            }
        }
    } else {
        resourceReleaseReference(work->resource);
        work->resource = NULL;
    }
    asdMemFree(work);
}

} /* extern "C" */
