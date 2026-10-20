/* NON_MATCHING: instruction scheduling only: in the second store retail loads the count before the buffer pointer and keeps them in r8/r1, built in r1/r8 */
#include "common.h"

extern "C" {

typedef struct Command {
    /* 0x00 */ u32 a;
    /* 0x04 */ u32 b;
    /* 0x08 */ u32 c;
    /* 0x0C */ u32 d;
} Command; /* 0x10 */

typedef struct CommandList {
    /* 0x0000 */ u8 unk0000[0x2410];
    /* 0x2410 */ Command *commands;
    /* 0x2414 */ s32 count;
} CommandList;

/* Appends a four-word command to the list. */
void FUN_003e77cc(CommandList *list, u32 a, u32 b, u32 c, u32 d)
{
    list->commands[list->count].a = a;
    list->commands[list->count].b = b;
    list->commands[list->count].c = c;
    list->commands[list->count].d = d;
    list->count++;
}

} /* extern "C" */
