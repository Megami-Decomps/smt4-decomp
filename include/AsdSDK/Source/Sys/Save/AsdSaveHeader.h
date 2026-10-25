#ifndef ASDSDK_SOURCE_SYS_SAVE_ASDSAVEHEADER_H
#define ASDSDK_SOURCE_SYS_SAVE_ASDSAVEHEADER_H

#include "AsdSDK/Source/Sys/Save/AsdSaveCommon.h"

struct SaveCalendarTime {
    /* 0x00 */ u32 year;
    /* 0x04 */ u8 month;
    /* 0x05 */ u8 day;
    /* 0x06 */ u8 weekday;
    /* 0x07 */ u8 hour;
    /* 0x08 */ u8 minute;
    /* 0x09 */ u8 second;
    /* 0x0a */ u16 millisecond;
};
struct AsdSaveHeader {
    /* 0x00 */ u32 gameMagic;
    /* 0x04 */ u32 blockMagic;
    /* 0x08 */ u32 version;
    /* 0x0c */ u32 dataSize;
    /* 0x10 */ SaveCalendarTime timestamp;
    /* 0x1c */ u8 unk1c[0x24];
    /* 0x40 */ u32 flags;
    /* 0x44 */ u8 metadata[0x3c];
};

typedef char AsdSaveHeaderSizeCheck[sizeof(AsdSaveHeader) == ASD_SAVE_HEADER_SIZE ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void memCopy(const void *src, const void *dst, int size);
#ifdef __cplusplus
}
#endif

#endif
