#ifndef GAMEDATA_SOURCEMETADATA_H
#define GAMEDATA_SOURCEMETADATA_H

#include "common.h"
#include <stddef.h>

struct SourceMetadataFlags {
    union {
        /* 0x00 */ u8 unk00[0x3E];
        struct {
            u8 unk00[0x38];
            /* 0x38 */ s16 skill;
            /* 0x3A */ s16 chance;
        } trigger;
    };
    /* 0x3E */ u16 flags;
};
typedef char SourceMetadataTriggerOffsets[
    offsetof(SourceMetadataFlags, trigger.skill) == 0x38 &&
    offsetof(SourceMetadataFlags, trigger.chance) == 0x3A &&
    offsetof(SourceMetadataFlags, flags) == 0x3E &&
    sizeof(SourceMetadataFlags) == 0x40 ? 1 : -1];

#endif
