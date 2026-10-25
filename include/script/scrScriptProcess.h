/* script/scrScriptProcess.c: script resources. */
#ifndef SCRIPT_SCRSCRIPTPROCESS_H
#define SCRIPT_SCRSCRIPTPROCESS_H

#include "common.h"

/* A script resource node (doubly linked list). */
typedef struct ScriptResource {
    /* 0x00 */ u8 unk00[0xD4];
    /* 0xD4 */ void *bufC;                /* heap block, freed on release */
    /* 0xD8 */ u8 unkD8[0x10];
    /* 0xE8 */ void *bufA;                /* heap block, freed on release */
    /* 0xEC */ void *bufB;                /* heap block, freed on release */
    /* 0xF0 */ struct ScriptResource *prev;
    /* 0xF4 */ struct ScriptResource *next;
} ScriptResource;

typedef struct ScriptResourceList {
    /* 0x00 */ s32 count;
    /* 0x04 */ ScriptResource *head;
    /* 0x08 */ ScriptResource *tail;
} ScriptResourceList;

/* Prefix used when a freshly created script is put into execution mode. */
struct ScriptRunState {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ s32 mode;
};
typedef char ScriptRunStateModeOffsetCheck[
    __INTADDR__(&((ScriptRunState *)0)->mode) == 0x108 ? 1 : -1];

extern "C" {
void FUN_00298d50(u32 value);
}

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
u32 FUN_0022fbc0(void *screen);
#ifdef __cplusplus
}
#endif

#endif
