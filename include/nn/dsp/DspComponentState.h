#ifndef NN_DSP_DSP_COMPONENT_STATE_H
#define NN_DSP_DSP_COMPONENT_STATE_H

#include "common.h"
#include <stddef.h>

/* Result returned by the DSP wrappers while no component is loaded. */
#define DSP_RESULT_NOT_LOADED 0xC8A0A7F8

enum { DSP_RESULT_CANNOT_LOAD_COMPONENT = 0xC8A0A7FCu };

struct DspComponentImage {
    const u8 *data;
    u32 size;
};

struct DspComponentState {
    /* 0x00 */ u8 unk0;
    /* 0x01 */ u8 loaded;
    /* 0x02 */ u8 reloadPending;
    /* 0x03 */ s8 started;
    /* 0x04 */ u16 programMask;
    /* 0x06 */ u16 dataMask;
    /* 0x08 */ u32 component;
    /* 0x0C */ u8 unk0C[0xC];
    /* 0x18 */ DspComponentImage image;
};

typedef char DspComponentStateLayoutCheck[
    offsetof(DspComponentState, loaded) == 1 &&
    offsetof(DspComponentState, component) == 8 &&
    offsetof(DspComponentState, image) == 0x18 && sizeof(DspComponentState) == 0x20 ? 1 : -1];

extern "C" {
extern DspComponentState g_callbackState;
}

#endif
