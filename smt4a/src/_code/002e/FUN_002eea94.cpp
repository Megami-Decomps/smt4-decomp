/* Replaces the owned 16-bit string: frees the old one, allocates a new empty one of the given capacity. */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk00[4];   /* 0x00 */
    u16 *buffer;   /* 0x04 */
} StringHolder;

extern u8 DAT_0053a204;

void operatorDeleteArray(void);
u16 *FUN_002e786a(u32 capacity, u8 *tag, u32 flags);

void FUN_002eea94(StringHolder *self, u32 capacity)
{
    u16 *buffer;

    if (self->buffer != NULL) {
        operatorDeleteArray();
    }
    buffer = FUN_002e786a(capacity, &DAT_0053a204, 0);
    self->buffer = buffer;
    *buffer = 0;
}

} /* extern "C" */
