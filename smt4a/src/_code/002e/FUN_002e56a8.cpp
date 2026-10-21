/* NON_MATCHING: retail emits 'movs r4, r0'; compiler emits 'mov r4, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Header { s32 references; u32 reserved, size; };
struct String { u8 *data; };
void refCounterAddUnlessEmpty(Header *header);
void FUN_002e5780(String *string);
s32 FUN_002e57c8(String *string, u32 offset, u32 oldSize, const u8 *source, u32 size);
s32 FUN_002e56a8(String *output, const String *source) {
    Header *header = (Header *)source->data - 1;
    if (header->references != -1) {
        refCounterAddUnlessEmpty(header);
        FUN_002e5780(output);
        output->data = source->data;
    } else if (output != source) {
        Header *old = (Header *)output->data - 1;
        FUN_002e57c8(output, 0, old->size, source->data, header->size);
    }
    return 0;
}
}
