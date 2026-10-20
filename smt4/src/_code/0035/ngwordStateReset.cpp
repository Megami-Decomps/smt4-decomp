#include "common.h"

extern "C" {

typedef struct Obj8Holder Obj8Holder;

typedef struct NgwordState {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 holder[0x14];   /* Obj8Holder registered while `registered` is set */
    /* 0x18 */ u8 registered;
    /* 0x19 */ u8 pending;
    /* 0x1A */ u8 unk1a;
    /* 0x1B */ u8 unk1b;
    /* 0x1C */ u32 unk1c;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u32 unk2c;
    /* 0x30 */ u8 idle;
} NgwordState;

extern const char DAT_0040b770[]; /* "ngword:" */

void FUN_002c3dfc(const char *text);
void registerObj8Holder(void *holder);

/* Resets the ngword check state, releasing its holder if one is registered. */
void ngwordStateReset(NgwordState *state)
{
    if (state->pending != 0) {
        FUN_002c3dfc(DAT_0040b770);
    }
    if (state->registered != 0) {
        registerObj8Holder(state->holder);
    }
    state->registered = 0;
    state->pending = 0;
    state->unk1a = 0;
    state->unk1c = 0;
    state->unk20 = 0;
    state->unk24 = 0;
    state->unk28 = 0;
    state->unk2c = 0;
    state->idle = 1;
}

}
