/* NON_MATCHING: same logic and calls; retail lays the mismatch return before the error path and reaches the stream error through a second base register (add r5, r4, #256); the build orders the exits differently and uses r5/r6 the other way round. */
#include "common.h"

/* The sound archive reader (the parts this function touches). */
struct SoundArchiveReader {
    /* 0x000 */ u8 unk000[0x11c];
    /* 0x11c */ u8 stream[0x18];
    /* 0x134 */ u32 streamError;
    /* 0x138 */ u8 unk138[4];
    /* 0x13c */ u8 header[0x44];
    /* 0x180 */ u32 error;
};

extern "C" {

s32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(void *header);
u32 nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(void *header);
u32 FUN_00174a64(void *stream, s32 offset, s32 origin);
u32 FUN_00174a00(void *stream, u32 destination, u32 size, u32 *bytesRead);
void FUN_001757c4(void *header, u32 destination);

// Reads the archive's string block into `destination` (at most `capacity` bytes) and parses it.
u32 FUN_0015e978(SoundArchiveReader *reader, u32 destination, u32 capacity)
{
    s32 offset = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockOffset(reader->header);
    u32 size = nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(reader->header);
    if (offset != -1 && size <= capacity) {
        u32 bytesRead;
        if (FUN_00174a64(reader->stream, offset, 0)) {
            bytesRead = 0;
            if (FUN_00174a00(reader->stream, destination, size, &bytesRead)) {
                if (bytesRead != size) {
                    return 0;
                }
                FUN_001757c4(reader->header, destination);
                return 1;
            }
        }
        reader->error = reader->streamError;
    }
    return 0;
}

}
