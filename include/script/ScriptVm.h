/* The script virtual machine's process: an instruction cursor over 4-byte instructions and a small
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
    SCRIPT_VM_TAG_RETURN_ADDRESS = 4
};

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

/* A jump target: the instruction index to continue at. */
struct ScriptVmLabel {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 target;
    /* 0x1C */ u8 unk1c[4];
};

struct ScriptVmProcess {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 pc;                         /* index of the current instruction */
    /* 0x1C */ s32 depth;                      /* values on the stack */
    /* 0x20 */ u8 tags[0x1c];                  /* ScriptVmTag of each stack value */
    /* 0x3C */ u32 values[0x1c];               /* the stack */
    /* 0xAC */ union {
        u8 unkAC[0xc];
        struct {
            u8 unkAC[8];
            ScriptVmLabel *functions;
        } tables;
    };
    /* 0xB8 */ ScriptVmLabel *labels;
    /* 0xBC */ ScriptVmInstruction *code;
    /* 0xC0 */ u8 unkC0[0x28];
    /* 0xE8 */ u32 *intVariables;             /* values of the integer variables */
    /* 0xEC */ u32 *constants;
};

/* Pushes a tagged value. */
static __inline void scriptVmPush(ScriptVmProcess *process, u8 tag, u32 value)
{
    process->tags[process->depth] = tag;
    process->values[process->depth] = value;
    process->depth++;
}

typedef char ScriptVmProcessLayout[
    offsetof(ScriptVmProcess, pc) == 0x18 && offsetof(ScriptVmProcess, tags) == 0x20 &&
    offsetof(ScriptVmProcess, values) == 0x3c && offsetof(ScriptVmProcess, tables.functions) == 0xb4 &&
    offsetof(ScriptVmProcess, labels) == 0xb8 && offsetof(ScriptVmProcess, code) == 0xbc &&
    offsetof(ScriptVmProcess, intVariables) == 0xe8 && offsetof(ScriptVmProcess, constants) == 0xec &&
    sizeof(ScriptVmProcess) == 0xf0 &&
    sizeof(ScriptVmLabel) == 0x20 ? 1 : -1];

#endif
