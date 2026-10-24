/* NON_MATCHING: retail keeps the script file and owner in r0/r1 through the section scan and spills the owner and strings pointer to the stack at the first use (the 11-register push is 9 and the 12-byte frame is 4 here), and returns through one shared epilogue; ours moves the file to r5 up front (202 rows against 208). The section parse, field setup and list append follow retail. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "script/scrScriptProcess.h"

#define SCRIPT_SECTION_NAMES 0
#define SCRIPT_SECTION_LABELS 1
#define SCRIPT_SECTION_CODE 2
#define SCRIPT_SECTION_DATA 3
#define SCRIPT_SECTION_STRINGS 4

/* A section table entry of a script file (0x10 bytes). */
struct ScriptFileSection {
    /* 0x00 */ u32 type;
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
    /* 0x14 */ s16 localCount;       /* integer locals */
    /* 0x16 */ s16 floatCount;       /* float locals */
    /* 0x18 */ u8 unk18[8];
    /* 0x20 */ ScriptFileSection section[1];
};

/* A name table entry (0x20 bytes, observed fields). */
struct ScriptName {
    /* 0x00 */ s8 name[0x18];
    /* 0x18 */ u32 value;
    /* 0x1C */ u8 unk1C[4];
};

/* A running script (0x10C bytes, observed fields). */
struct ScriptProcessWork {
    /* 0x000 */ s8 name[0x18];
    /* 0x018 */ u32 nameValue;
    /* 0x01C */ u32 zero1C[8];
    /* 0x03C */ u8 state[0x70];
    /* 0x0AC */ ScriptFile *file;
    /* 0x0B0 */ ScriptFileSection *sections;
    /* 0x0B4 */ ScriptName *names;
    /* 0x0B8 */ u8 *labels;
    /* 0x0BC */ u8 *code;
    /* 0x0C0 */ u32 owner;
    /* 0x0C4 */ u8 *strings;
    /* 0x0C8 */ s32 nameIndex;
    /* 0x0CC */ u32 unk0CC;
    /* 0x0D0 */ u32 unk0D0;
    /* 0x0D4 */ u8 unk0D4[4];
    /* 0x0D8 */ u32 unk0D8;
    /* 0x0DC */ u32 unk0DC;
    /* 0x0E0 */ u32 unk0E0;
    /* 0x0E4 */ u32 unk0E4;
    /* 0x0E8 */ s32 *locals;
    /* 0x0EC */ f32 *floatLocals;
    /* 0x0F0 */ ScriptProcessWork *prev;
    /* 0x0F4 */ ScriptProcessWork *next;
    /* 0x0F8 */ u32 unk0F8;
    /* 0x0FC */ u8 unk0FC[0x10];
};

struct ScriptProcessList {
    s32 count;
    ScriptProcessWork *head;
    ScriptProcessWork *tail;
};

extern "C" {

extern ScriptProcessList g_scrScriptResources;

void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 enabled);
void sysMemClear(void *memory, u32 size);

/* Creates a script process from a loaded script file: finds the file's sections, copies the first
 * name, allocates the local tables and appends the process to the process list. Returns the process,
 * or NULL when the file is not a usable script. */
ScriptProcessWork *FUN_00275bc8(ScriptFile *file, u32 owner)
{
    ScriptProcessWork *process = NULL;
    ScriptFileSection *sections = file->section;
    ScriptName *names = NULL;
    u8 *labels = NULL;
    u8 *code = NULL;
    u8 *strings = NULL;
    s32 nameIndex = 0;
    s32 i;

    if (file->magic[0] != 'F' || file->magic[1] != 'L' || file->magic[2] != 'W' || file->magic[3] != '0') {
        return process;
    }
    for (i = 0; i < file->sectionCount; i++) {
        switch (sections[i].type) {
        case SCRIPT_SECTION_NAMES:
            names = (ScriptName *)((u8 *)file + sections[i].offset);
            break;
        case SCRIPT_SECTION_LABELS:
            labels = (u8 *)file + sections[i].offset;
            break;
        case SCRIPT_SECTION_CODE:
            code = (u8 *)file + sections[i].offset;
            break;
        case SCRIPT_SECTION_DATA:
            break;
        case SCRIPT_SECTION_STRINGS:
            strings = (u8 *)file + sections[i].offset;
            break;
        default:
            return process;
        }
    }
    if (file != NULL && sections != NULL && names != NULL && code != NULL && sections[0].size > 0) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\script\\scrScriptProcess.cpp", 139);
        process = (ScriptProcessWork *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(ScriptProcessWork), 0);
        sysMemClear(process, sizeof(ScriptProcessWork));
        if (process != NULL) {
            for (i = 0; (process->name[i] = names[nameIndex].name[i]) != 0; i++) {
            }
            process->nameValue = names[nameIndex].value;
            for (i = 0; i < 8; i++) {
                process->zero1C[i] = 0;
            }
            sysMemClear(process->state, 0x70);
            process->code = code;
            process->file = file;
            process->sections = sections;
            process->names = names;
            process->labels = labels;
            process->owner = owner;
            process->strings = strings;
            process->nameIndex = nameIndex;
            process->unk0CC = 0;
            process->unk0D0 = 0;
            process->locals = NULL;
            process->floatLocals = NULL;
            process->prev = NULL;
            process->next = NULL;
            process->unk0F8 = 0;
            process->unk0E4 = 0;
            process->unk0E0 = 0;
            process->unk0DC = 0;
            process->unk0D8 = 0;
            if (file->localCount > 0) {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\script\\scrScriptProcess.cpp", 182);
                process->locals = (s32 *)asdMemoryAlloc(0x100, 0x100, 0, file->localCount << 2, 0);
                for (i = 0; i < file->localCount; i++) {
                    process->locals[i] = 0;
                }
            }
            if (file->floatCount <= 0) {
                process->floatLocals = NULL;
            } else {
                asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\script\\scrScriptProcess.cpp", 191);
                process->floatLocals = (f32 *)asdMemoryAlloc(0x100, 0x100, 0, file->floatCount << 2, 0);
                for (i = 0; i < file->floatCount; i++) {
                    process->floatLocals[i] = 0.0f;
                }
            }
            if (g_scrScriptResources.tail != NULL) {
                process->prev = g_scrScriptResources.tail;
                g_scrScriptResources.tail->next = process;
                process->next = NULL;
                g_scrScriptResources.tail = process;
            } else {
                g_scrScriptResources.head = process;
                g_scrScriptResources.tail = process;
                process->prev = NULL;
                process->next = NULL;
            }
                g_scrScriptResources.count++;
        }
    }
    return process;
}

} /* extern "C" */
