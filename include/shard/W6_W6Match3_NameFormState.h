#ifndef SHARD_W6_W6MATCH3_NAMEFORMSTATE_H
#define SHARD_W6_W6MATCH3_NAMEFORMSTATE_H

#include "common.h"
#include "name/NameFormText.h"

// Known prefix of the name-entry form; its initializer installs twelve member callbacks.
struct NameFormState {
    typedef void (NameFormState::*Callback)();

    u8 complete;       // 0x000
    u8 phase;          // 0x001
    u8 unk002[0xa];
    u32 frame;         // 0x00c
    union {
        u8 unk010[0xc4];
        NameFormTextFields text; // 0x010: length at 0x22, characters at 0xb0
    };
    Callback handlers[12];  // 0x0d4
    u8 unk134[0x80e];
    s16 countdown;     // 0x942
};
typedef char NameFormTextOffsetCheck[offsetof(NameFormState, text) == 0x10 &&
    offsetof(NameFormState, handlers) == 0xd4 && sizeof(NameFormState) == 0x944 ? 1 : -1];

extern "C" void nameFormUpdate(NameFormState* form);


#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *recordTableGet(u32 index);
#ifdef __cplusplus
}
#endif

#endif
