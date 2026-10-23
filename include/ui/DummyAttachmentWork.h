#ifndef UI_DUMMY_ATTACHMENT_WORK_H
#define UI_DUMMY_ATTACHMENT_WORK_H

#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include <stddef.h>

struct DummyAttachmentSource {
    u8 unk00[0x1c];
    AsdMdlObject *model; // 0x1c
};

struct DummyAttachmentWork {
    u8 unk00[0x21];
    u8 mode; // 0x21
    u8 unk22[0xcee];
    AsdMdlObject *primary[6]; // 0xd10
    AsdMdlObject *secondary[6]; // 0xd28
    u8 initialized; // 0xd40
    u8 unkD41[0x26b];
    DummyAttachmentSource *source; // 0xfac
    union {
        u8 unkFB0[8];
        struct {
            /* 0xFB0 */ s32 requested;
            /* 0xFB4 */ s32 applied;
        } playback;
    };
    AsdMdlObject *alternate; // 0xfb8
};

typedef char DummyAttachmentLayoutCheck[
    offsetof(DummyAttachmentSource, model) == 0x1c &&
    offsetof(DummyAttachmentWork, mode) == 0x21 &&
    offsetof(DummyAttachmentWork, primary) == 0xd10 &&
    offsetof(DummyAttachmentWork, secondary) == 0xd28 &&
    offsetof(DummyAttachmentWork, initialized) == 0xd40 &&
    offsetof(DummyAttachmentWork, source) == 0xfac &&
    offsetof(DummyAttachmentWork, alternate) == 0xfb8 &&
    sizeof(DummyAttachmentWork) == 0xfbc ? 1 : -1];
typedef char DummyAttachmentPlaybackOffsets[
    offsetof(DummyAttachmentWork, playback.requested) == 0xFB0 &&
    offsetof(DummyAttachmentWork, playback.applied) == 0xFB4 &&
    sizeof(DummyAttachmentWork) == 0xFBC ? 1 : -1];

#endif
