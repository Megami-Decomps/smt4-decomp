#ifndef NN_SWKBD_SOFTWAREKEYBOARDCONFIG_H
#define NN_SWKBD_SOFTWAREKEYBOARDCONFIG_H
#include "common.h"
#include <stddef.h>

/* CTR software-keyboard configuration, including the response fields written by the applet. */
struct SoftwareKeyboardConfig {
    u32 type;
    u8 unk004[4];
    u32 validation;
    u32 passwordMode;
    u8 unk010[4];
    u32 filterFlags;
    u8 unk018[8];
    u16 maximumLength;
    u8 unk022[0x6e];
    u16 hintText[65];
    u8 unk112;
    u8 options[3];
    u8 unk116[0x22];
    s32 response;
    u8 unk13c[8];
    s32 textOffset;
    u8 unk148[0x2b8];
};
typedef char SoftwareKeyboardConfigOffsets[
    sizeof(SoftwareKeyboardConfig) == 0x400 &&
    offsetof(SoftwareKeyboardConfig, maximumLength) == 0x20 &&
    offsetof(SoftwareKeyboardConfig, hintText) == 0x90 &&
    offsetof(SoftwareKeyboardConfig, options) == 0x113 &&
    offsetof(SoftwareKeyboardConfig, response) == 0x138 &&
    offsetof(SoftwareKeyboardConfig, textOffset) == 0x144 ? 1 : -1];
#endif
