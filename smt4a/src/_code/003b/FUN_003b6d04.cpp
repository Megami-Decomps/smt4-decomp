/* NON_MATCHING: register allocation only (r5-r9 rotated). Retail addresses the texture array as g_eventEffect+0x1c, likely a separate global of the original unit placed after it. */
#include "common.h"

extern "C" {

/* A texture an event effect holds: its table node and indexed entry. */
typedef struct EventEffectTexture {
    /* 0x00 */ u32 table;
    /* 0x04 */ u32 node;
    /* 0x08 */ u8 nodeLoaded;
    /* 0x09 */ u8 entryLoaded;
    /* 0x0A */ u8 unk0A[2];
} EventEffectTexture;

typedef struct EventEffectWork {
    /* 0x00 */ u32 job;
} EventEffectWork;

/* The event effect state: the running work and its two textures. */
typedef struct EventEffectState {
    /* 0x00 */ EventEffectWork *work;
    /* 0x04 */ u8 unk04[0x18];
    /* 0x1C */ EventEffectTexture textures[2];
} EventEffectState;

extern EventEffectState g_eventEffect;

s32 asdTMTexTableNodeIsLoaded(u32 table, u32 node);
void asdTMTexTableReleaseNode(u32 table, u32 node);
void *textureGetIndexedResource(u32 table);
void asdTMTexTableFreeEntry(u32 table);
void jobStop(u32 job, s32 arg);
void asdMemFree(void *ptr);

/* Releases the event effect's textures, stops its job and frees its work. */
void FUN_003b6d04(void)
{
    EventEffectWork *work = g_eventEffect.work;
    EventEffectTexture *textures = g_eventEffect.textures;
    s32 i;

    for (i = 0; i < 2; i++) {
        if (textures[i].nodeLoaded) {
            if (asdTMTexTableNodeIsLoaded(textures[i].table, textures[i].node)) {
                asdTMTexTableReleaseNode(textures[i].table, textures[i].node);
            }
            textures[i].nodeLoaded = 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (textures[i].entryLoaded) {
            if (textureGetIndexedResource(textures[i].table) != NULL) {
                asdTMTexTableFreeEntry(textures[i].table);
            }
            textures[i].entryLoaded = 0;
        }
    }
    jobStop(work->job, 0);
    asdMemFree(work);
    g_eventEffect.work = NULL;
}

} /* extern "C" */
