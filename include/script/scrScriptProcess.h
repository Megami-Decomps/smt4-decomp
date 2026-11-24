/* script/scrScriptProcess.c: script processes (ScriptProcess, script/ScriptVm.h) built from
 * loaded FLW0 script files and kept in one list. */
#ifndef SCRIPT_SCRSCRIPTPROCESS_H
#define SCRIPT_SCRSCRIPTPROCESS_H

#include "common.h"
#include "script/ScriptVm.h"

/* The section types of a script file. */
enum ScriptSectionType {
    SCRIPT_SECTION_NAMES = 0,
    SCRIPT_SECTION_LABELS = 1,
    SCRIPT_SECTION_CODE = 2,
    SCRIPT_SECTION_DATA = 3,
    SCRIPT_SECTION_STRINGS = 4
};

/* A section table entry of a script file (0x10 bytes). */
struct ScriptFileSection {
    /* 0x00 */ u32 type;            /* ScriptSectionType */
    /* 0x04 */ u32 unk04;
    /* 0x08 */ s32 size;
    /* 0x0C */ u32 offset;          /* from the start of the file */
};

/* A script file ("FLW0"): header, then the section table (observed fields). */
struct ScriptFile {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ char magic[4];
    /* 0x0C */ u8 unk0C[4];
    /* 0x10 */ s32 sectionCount;
    /* 0x14 */ s16 intVariableCount;
    /* 0x16 */ s16 floatVariableCount;
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ ScriptFileSection sections[1];
};

/* Every live script process, in creation order. */
struct ScriptProcessList {
    /* 0x00 */ s32 count;
    /* 0x04 */ ScriptProcess *head;
    /* 0x08 */ ScriptProcess *tail;
};

extern "C" {

extern ScriptProcessList g_scrScriptResources;

/* Creates a script process from a loaded script file (`script`); `owner` becomes its
 * commandOwner. Returns NULL when the file is not a usable script. */
ScriptProcess *scrScriptProcessCreate(void *script, void *owner);

/* Frees a process, its variables and its command allocation, and unlinks it. */
void scrScriptProcessDestroy(ScriptProcess *process);

/* Runs the process's opcodes (forwards to scrRunOpcodes); 2 means the script has finished. */
u32 scrRunOpcodesStub(ScriptProcess *process);

/* Sets the process's mode (0x108); a one-instruction setter armlink inlines at every call (config/inlined.txt). */
void scriptProcessSetMode(ScriptProcess *process, s32 mode);

void FUN_00298d50(u32 value);

/* Canonical declaration (matches the definition). */
u32 shopApplyEntryAndCheckReady(void *screen);

} /* extern "C" */

#endif
