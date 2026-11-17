/* The script virtual machine's process (ScriptProcess): an instruction cursor over 4-byte instructions and a small
 * tagged value stack. The opcode handlers return 1 to keep running. */
#ifndef SCRIPT_SCRIPTVM_H
#define SCRIPT_SCRIPTVM_H

#include "common.h"
#include <stddef.h>

/* How a stack value is read. */
enum ScriptVmTag {
    SCRIPT_VM_TAG_INT = 0,
    SCRIPT_VM_TAG_FLOAT = 1,
    SCRIPT_VM_TAG_INT_VAR = 2,    /* the value is an index into the integer variables */
    SCRIPT_VM_TAG_FLOAT_VAR = 3,  /* the value is an index into the float variables */
    SCRIPT_VM_TAG_RETURN_ADDRESS = 4,
    SCRIPT_VM_TAG_STRING = 5      /* the value is a string pointer */
};

/* The stack slot a script command's result is stored in (scrSetResult), read back by the opcode
 * that pushes the result. */
enum { SCRIPT_VM_RESULT_SLOT = 0x1b };

/* The 16-bit halves of an instruction. */
struct ScriptVmOperands {
    u16 opcode;
    u16 operand;
};

/* One 4-byte instruction: an opcode with a 16-bit operand, or one 32-bit immediate word. */
union ScriptVmInstruction {
    ScriptVmOperands decoded;
    u32 word;
};

/* One stack word, read as the tag says. */
union ScriptVmValue {
    u32 u;
    s32 i;
    f32 f;
};

/* A name or label table entry of a script file (0x20 bytes): a function's name and the
 * instruction index it starts at, or a jump target. */
struct ScriptVmLabel {
    /* 0x00 */ s8 name[0x18];
    /* 0x18 */ s32 target;
    /* 0x1C */ u8 unk1c[4];
};

struct ScriptFile;
struct ScriptFileSection;

/* A running script (scrScriptProcess.cpp, 0x10C bytes as scrScriptProcessCreate allocates it):
 * the interpreter state every opcode and command receives, plus its links in the process list. */
struct ScriptProcess {
    /* 0x00 */ s8 name[0x18];                 /* the entry function's name */
    /* 0x18 */ s32 pc;                         /* index of the current instruction */
    /* 0x1C */ s32 depth;                      /* values on the stack */
    /* 0x20 */ u8 tags[0x1c];                  /* ScriptVmTag of each stack value */
    /* 0x3C */ ScriptVmValue values[0x1c];     /* the stack */
    /* 0xAC */ ScriptFile *file;
    /* 0xB0 */ ScriptFileSection *sections;   /* the file's section table */
    /* 0xB4 */ ScriptVmLabel *functions;      /* the file's name table */
    /* 0xB8 */ ScriptVmLabel *labels;
    /* 0xBC */ ScriptVmInstruction *code;
    /* 0xC0 */ u32 commandOwner;              /* the message commands' context word */
    /* 0xC4 */ u8 *dataBase;                  /* the script's data block; string operands are offsets into it */
    /* 0xC8 */ s32 functionIndex;             /* the entry function's name table index */
    /* 0xCC */ s32 stepCount;                 /* times the script has been stepped */
    /* 0xD0 */ u32 commandFrame;              /* frames the running command has waited */
    /* 0xD4 */ void *allocation;              /* heap block a command allocated, freed with the process */
    /* 0xD8 */ u32 workValues[4];             /* the script's work words */
    /* 0xE8 */ ScriptVmValue *intVariables;   /* values of the integer variables */
    /* 0xEC */ ScriptVmValue *floatVariables; /* values of the float variables */
    /* 0xF0 */ ScriptProcess *prev;           /* links in g_scrScriptResources */
    /* 0xF4 */ ScriptProcess *next;
    /* 0xF8 */ u32 unkF8;
    /* 0xFC */ u8 unkFC[0xC];
    /* 0x108 */ s32 mode;                     /* run mode: callers set 2 to start the script */
};

/* Pushes a tagged value. Plain static (not __inline): armcc auto-inlines it with right-to-left argument evaluation, which the opcodes' load order shows. */
static void scriptVmPush(ScriptProcess *process, u8 tag, u32 value)
{
    process->tags[process->depth] = tag;
    process->values[process->depth].u = value;
    process->depth++;
}

/* Pushes a float value (tag SCRIPT_VM_TAG_FLOAT). Plain static like scriptVmPush; the f32
 * parameter (rather than its bits) gives retail's register order in the float opcodes. */
static void scriptVmPushFloat(ScriptProcess *process, f32 value)
{
    process->tags[process->depth] = SCRIPT_VM_TAG_FLOAT;
    process->values[process->depth].f = value;
    process->depth++;
}

typedef char ScriptProcessLayout[
    offsetof(ScriptProcess, pc) == 0x18 && offsetof(ScriptProcess, tags) == 0x20 &&
    offsetof(ScriptProcess, values) == 0x3c && offsetof(ScriptProcess, functions) == 0xb4 &&
    offsetof(ScriptProcess, labels) == 0xb8 && offsetof(ScriptProcess, code) == 0xbc &&
    offsetof(ScriptProcess, commandOwner) == 0xc0 && offsetof(ScriptProcess, dataBase) == 0xc4 && offsetof(ScriptProcess, stepCount) == 0xcc && offsetof(ScriptProcess, commandFrame) == 0xd0 &&
    offsetof(ScriptProcess, workValues) == 0xd8 &&
    offsetof(ScriptProcess, intVariables) == 0xe8 && offsetof(ScriptProcess, floatVariables) == 0xec &&
    offsetof(ScriptProcess, allocation) == 0xd4 && offsetof(ScriptProcess, prev) == 0xf0 &&
    offsetof(ScriptProcess, mode) == 0x108 &&
    sizeof(ScriptProcess) == 0x10c && sizeof(ScriptVmValue) == 4 &&
    sizeof(ScriptVmLabel) == 0x20 ? 1 : -1];

/* The interpreter's global state: the binary operators' operand and result registers and the
 * process whose command is running. */
struct ScriptContext {
    /* 0x00 */ s32 leftInt;
    /* 0x04 */ s32 rightInt;
    /* 0x08 */ s32 intResult;
    /* 0x0C */ f32 leftFloat;
    /* 0x10 */ f32 rightFloat;
    /* 0x14 */ f32 floatResult;
    /* 0x18 */ u32 topTag;        /* tag of the top of the stack */
    /* 0x1C */ u32 belowTag;      /* tag of the value below it */
    /* 0x20 */ ScriptProcess *active;
};

typedef char ScriptContextLayout[
    offsetof(ScriptContext, intResult) == 0x08 && offsetof(ScriptContext, floatResult) == 0x14 &&
    offsetof(ScriptContext, belowTag) == 0x1c && offsetof(ScriptContext, active) == 0x20 ? 1 : -1];

extern ScriptContext g_scrContext;

extern s32 g_scrIntVars[0x180];   /* script integer variables */
extern f32 g_scrFloatVars[0x180]; /* script float variables */

extern "C" {

/* Pops the top stack value of `process` as a float / an int, resolving variable references. */
f32 scrPopFloat(ScriptProcess *process);
s32 scrPopInt(ScriptProcess *process);

} /* extern "C" */

#endif
