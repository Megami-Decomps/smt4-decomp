#include "common.h"

extern "C" {
extern void* DAT_004daee8[8];
extern u16 DAT_004def18[8];
extern u32 DAT_004def28[8];

// Register text data in the first unused slot with its ID and attributes.
void asdTextRegisterSlot(u16 id, u32 attributes, void* text)
{
    for (s32 index = 0; index < 8; ++index) {
        if (DAT_004daee8[index] == NULL) {
            DAT_004daee8[index] = text;
            DAT_004def18[index] = id;
            DAT_004def28[index] = attributes;
            return;
        }
    }
}
}
