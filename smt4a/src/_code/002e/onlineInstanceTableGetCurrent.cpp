#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 value;
} Entry;

Entry *onlineInstantiationContextGetCurrent(void);

/* Returns the word at 0x10 of the entry onlineInstantiationContextGetCurrent returns. */
u32 onlineInstanceTableGetCurrent(void)
{
    Entry *entry = onlineInstantiationContextGetCurrent();
    return entry->value;
}

} /* extern "C" */
