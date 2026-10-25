/* NON_MATCHING: retail emits 'movs r4, r0'; compiler emits 'mov r5, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Header { s32 references; u32 reserved, size; };
struct String { u8 *data; };
void refCounterAddUnlessEmpty(Header *header);
Header *__rw_string_rep_allocate(u32 size, u32 capacity);
void FUN_002e40ec(u8 *output, const u8 *source, u32 size);
String *FUN_002e3f2c(String *output, const String *source) {
    Header *header = (Header *)source->data - 1;
    if (header->references != -1) {
        output->data = source->data;
        refCounterAddUnlessEmpty(header);
    } else {
        Header *copy = __rw_string_rep_allocate(header->size, header->size);
        output->data = (u8 *)(copy + 1);
        FUN_002e40ec(output->data, source->data, header->size);
    }
    return output;
}
}
