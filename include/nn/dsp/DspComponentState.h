#ifndef NN_DSP_DSP_COMPONENT_STATE_H
#define NN_DSP_DSP_COMPONENT_STATE_H

#include "common.h"

/* Result returned by the DSP wrappers while no component is loaded. */
#define DSP_RESULT_NOT_LOADED 0xC8A0A7F8

struct DspComponentState {
    /* 0x0 */ u8 unk0;
    /* 0x1 */ u8 loaded;
    /* 0x2 */ u8 unk2[6];
    /* 0x8 */ u32 component;
};

extern "C" {
extern DspComponentState g_callbackState;
}

#endif
