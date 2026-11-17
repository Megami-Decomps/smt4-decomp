/* NON_MATCHING: retail keeps the script file and owner in r0/r1 through the section scan and spills the owner and strings pointer to the stack at the first use (the 11-register push is 9 and the 12-byte frame is 4 here), and returns through one shared epilogue; ours moves the file to r5 up front (202 rows against 208). The section parse, field setup and list append follow retail. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"
#include "script/scrScriptProcess.h"
#include "code/Code0029_Smt4.h"

extern "C" {

void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 bytes, u32 enabled);
void memClear(void *memory, u32 size);

/* Creates a script process from a loaded script file: finds the file's sections, copies the first
 * name, allocates the local tables and appends the process to the process list. Returns the process,
 * or NULL when the file is not a usable script. */
ScriptProcess *scrScriptProcessCreate(void *script, void *owner)
{
    ScriptFile *file = (ScriptFile *)script;
    ScriptProcess *process = NULL;
    ScriptFileSection *sections = file->sections;
    ScriptVmLabel *names = NULL;
    ScriptVmLabel *labels = NULL;
    ScriptVmInstruction *code = NULL;
    u8 *strings = NULL;
    s32 nameIndex = 0;
    s32 i;

    if (file->magic[0] != 'F' || file->magic[1] != 'L' || file->magic[2] != 'W' || file->magic[3] != '0') {
        return process;
    }
    for (i = 0; i < file->sectionCount; i++) {
        switch (sections[i].type) {
        case SCRIPT_SECTION_NAMES:
            names = (ScriptVmLabel *)((u8 *)file + sections[i].offset);
            break;
        case SCRIPT_SECTION_LABELS:
            labels = (ScriptVmLabel *)((u8 *)file + sections[i].offset);
            break;
        case SCRIPT_SECTION_CODE:
            code = (ScriptVmInstruction *)((u8 *)file + sections[i].offset);
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
        asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\script\\scrScriptProcess.cpp", 139);
        process = (ScriptProcess *)asdMemoryAlloc(0x100, 0x100, 0, sizeof(ScriptProcess), 0);
        memClear(process, sizeof(ScriptProcess));
        if (process != NULL) {
            for (i = 0; (process->name[i] = names[nameIndex].name[i]) != 0; i++) {
            }
            process->pc = names[nameIndex].target;
            /* Clears the stack depth and tags as eight words. */
            u32 *stackWords = (u32 *)&process->depth;
            for (i = 0; i < 8; i++) {
                stackWords[i] = 0;
            }
            memClear(process->values, sizeof(process->values));
            process->code = code;
            process->file = file;
            process->sections = sections;
            process->functions = names;
            process->labels = labels;
            process->commandOwner = (u32)owner;
            process->dataBase = strings;
            process->functionIndex = nameIndex;
            process->stepCount = 0;
            process->commandFrame = 0;
            process->intVariables = NULL;
            process->floatVariables = NULL;
            process->prev = NULL;
            process->next = NULL;
            process->unkF8 = 0;
            process->workValues[3] = 0;
            process->workValues[2] = 0;
            process->workValues[1] = 0;
            process->workValues[0] = 0;
            if (file->intVariableCount > 0) {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\script\\scrScriptProcess.cpp", 182);
                process->intVariables = (ScriptVmValue *)asdMemoryAlloc(0x100, 0x100, 0, file->intVariableCount << 2, 0);
                for (i = 0; i < file->intVariableCount; i++) {
                    process->intVariables[i].i = 0;
                }
            }
            if (file->floatVariableCount <= 0) {
                process->floatVariables = NULL;
            } else {
                asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\script\\scrScriptProcess.cpp", 191);
                process->floatVariables = (ScriptVmValue *)asdMemoryAlloc(0x100, 0x100, 0, file->floatVariableCount << 2, 0);
                for (i = 0; i < file->floatVariableCount; i++) {
                    process->floatVariables[i].f = 0.0f;
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
