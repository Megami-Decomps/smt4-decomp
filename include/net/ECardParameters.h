/* The key/value parameter table of an eCard response and its linear lookup. */
#ifndef NET_ECARD_PARAMETERS_H
#define NET_ECARD_PARAMETERS_H

#include "common.h"

extern "C" s32 libc_strncmp(const char *first, const char *second, u32 length);

struct ECardParameter {
    const char *key;
    const char *value;
};

struct ECardParameters {
    ECardParameter *entries;
    u32 count;
};

struct ECardResponse {
    u32 unk00;
    ECardParameters *parameters;
};

/* The value of the first parameter whose key matches (compared over 64 characters), or NULL. */
static inline const char *findECardParameter(ECardParameters *parameters, const char *key)
{
    u32 count = parameters->count;
    for (u32 index = 0; index < count; ++index) {
        if (libc_strncmp(parameters->entries[index].key, key, 0x40) == 0)
            return parameters->entries[index].value;
    }
    return NULL;
}

#endif
