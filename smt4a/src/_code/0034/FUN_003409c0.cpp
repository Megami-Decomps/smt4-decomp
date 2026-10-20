/* NON_MATCHING: the constant stored into `closing` is materialised in r1 (retail: r0). */
#include "common.h"

extern "C" {

typedef struct StreamBuffer {
    /* 0x000 */ u8 unk000[0x110];
    /* 0x110 */ u8 unk110[1];
} StreamBuffer;

typedef struct JyoucyuScreen {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u8 closing;
    /* 0x5 */ u8 unk5[3];
    /* 0x8 */ StreamBuffer *buffer;
} JyoucyuScreen;

typedef struct JyoucyuHandle {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ JyoucyuScreen *screen;
} JyoucyuHandle;

void FUN_0019e290(StreamBuffer *buffer);
u8 *FUN_004d08d0(u8 *member);
void asdOperatorDelete(void *block);
int jyoucyuGetTableEntry(int index);

/* Closes the screen: flags it as closing, releases its stream buffer, then resets the table entry. */
void FUN_002d54e0(JyoucyuHandle *handle)
{
    JyoucyuScreen *screen = handle->screen;

    screen->closing = 1;
    if (screen->buffer != NULL) {
        FUN_0019e290(screen->buffer);
        if (screen->buffer != NULL) {
            asdOperatorDelete(FUN_004d08d0(screen->buffer->unk110) - 0x110);
        }
        screen->buffer = NULL;
    }
    jyoucyuGetTableEntry(0);
}

}
