/* NON_MATCHING: register allocation: retail keeps the module base in r8, computes the texture base after the first free and indexes it from r9. */
#include "common.h"

struct SmokeFadeWork {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ void *buffer;
};

struct SmokeFadeTexture {
    /* 0x00 */ u32 table;
    /* 0x04 */ u32 node;
    /* 0x08 */ u8 nodeHeld;
    /* 0x09 */ u8 entryHeld;
    /* 0x0a */ u8 unk0a[2];
};

struct SmokeFadeModule {
    /* 0x00 */ SmokeFadeWork *work;
    /* 0x04 */ u8 unk04[0x14];
    /* 0x18 */ SmokeFadeTexture textures[2];
};

extern "C" {
extern SmokeFadeModule DAT_0043df28;

void asdMemFree(void *memory);
s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
s32 textureGetIndexedResource(u32 table);
void asdTMTexTableFreeEntry(u32 table);
void jobStop(u32 job, s32 arg);

/* Frees the smoke fade's buffer, releases its texture nodes and entries, stops its job and frees the work. */
void FUN_002efd64(void)
{
    SmokeFadeWork *work = DAT_0043df28.work;
    SmokeFadeTexture *textures = DAT_0043df28.textures;
    s32 i;

    asdMemFree(work->buffer);
    for (i = 0; i < 2; i++) {
        if (textures[i].nodeHeld) {
            if (asdTMTexTableNodeIsLoaded(textures[i].table, textures[i].node)) {
                asdTMTexTableReleaseNode(textures[i].table, textures[i].node);
            }
            textures[i].nodeHeld = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (textures[i].entryHeld) {
            if (textureGetIndexedResource(textures[i].table)) {
                asdTMTexTableFreeEntry(textures[i].table);
            }
            textures[i].entryHeld = 0;
        }
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    DAT_0043df28.work = NULL;
}

} /* extern "C" */
