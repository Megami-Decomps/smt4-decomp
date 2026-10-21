#include "common.h"

extern "C" {
extern void* DAT_00636f68[8];
extern u16 DAT_0063af98[8];
extern u32 DAT_0063afa8[8];

// Register text data in the first unused slot with its ID and attributes.
void asdTextRegisterSlot(u16 id, u32 attributes, void* text)
{
    for (s32 index = 0; index < 8; ++index) {
        if (DAT_00636f68[index] == NULL) {
            DAT_00636f68[index] = text;
            DAT_0063af98[index] = id;
            DAT_0063afa8[index] = attributes;
            return;
        }
    }
}
}
