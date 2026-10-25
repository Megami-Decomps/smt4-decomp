/* NON_MATCHING: The result aggregate is constructed on the stack and copied instead of retail's direct return-storage construction. */
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "nn/Result.h"
#include "AsdSDK/AsdDebug.h"

struct AocFileContentBuffer {
    u8 unk00[0x20];
    void *buffer;
    char mount[0x10];
    u32 size;
};
extern "C" {
extern AocMain *g_aocMain;
extern const char DAT_003ff230[];
void asdMemFree(void *buffer);
u32 FUN_003550f4(u32 *size, u32 kind, u32 id, s32 first, s32 second, s32 flags);
s32 legacyResourceIdRemap(const WindowStatusResult *result);
void *jyoucyuGetTableEntry(s32 index);
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 mode);
void rt_memclr(void *buffer, u32 size);
void textFormatBuffer(char *output, const char *format, ...);

/* Queries an add-on archive's size, prepares its mount buffer, or translates the query failure. */
WindowStatusOperationResult FUN_0038bae8(AocFileContentBuffer *content, u32 id)
{
    if (content->buffer != NULL) {
        asdMemFree(content->buffer);
        content->buffer = NULL;
    }
    WindowStatusOperationResult operation(0);
    WindowStatusResult result(FUN_003550f4(&content->size, 0xE5C, id, 2, 2, 0));
    if (nnResultIsFailure(legacyResourceIdRemap(&result))) {
        jyoucyuGetTableEntry(0);
        operation.status = 100;
        operation.result = result;
        if ((u32)legacyResourceIdRemap(&result) != 0xC9413891 && FUN_002ad1e0(&g_aocMain->objB) != 0) {
            g_aocMain->flags &= ~0x10000;
            operation.status = 200;
        }
        return operation;
    }
    asdDebugTrace(DAT_003ff230, 190);
    content->buffer = asdMemoryAlloc(0x100, 0x100, 0, content->size, 1);
    rt_memclr(content->buffer, content->size);
    textFormatBuffer(content->mount, "aoc%d:", id);
    return operation;
}
}
