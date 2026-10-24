#include "common.h"

extern "C" {

struct ScriptHelpOwner {
    /* 0x00 */ u32 state;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 mode;
    /* 0x09 */ u8 unk09[3];
    /* 0x0c */ void *textBuffer;
    /* 0x10 */ void *iconBuffer;
    /* 0x14 */ void *script;
};

void asdMemFree(void *block);
void scrScriptProcessDestroy(void *process);
void mapDepartSetTarget(s32 group, s32 map, s32 target);
void buttonHelpCreate(void);

/* Resets the owner to `mode`, frees its buffers and script, clears the map depart target, then creates the button help. */
void FUN_0028d664(ScriptHelpOwner *owner, u8 mode)
{
    owner->mode = mode;
    owner->state = 0;
    if (owner->textBuffer != NULL) {
        asdMemFree(owner->textBuffer);
        owner->textBuffer = NULL;
    }
    if (owner->iconBuffer != NULL) {
        asdMemFree(owner->iconBuffer);
        owner->iconBuffer = NULL;
    }
    if (owner->script != NULL) {
        scrScriptProcessDestroy(owner->script);
        owner->script = NULL;
    }
    mapDepartSetTarget(-1, -1, -1);
    buttonHelpCreate();
}

} /* extern "C" */
