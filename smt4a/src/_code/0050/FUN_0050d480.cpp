#include "common.h"

extern "C" {

typedef struct Primary Primary;
typedef struct PrimaryVtbl {
    /* 0x00 */ void *unk00[4];
    /* 0x10 */ void (*onMissingFile)(Primary *self, u32 id);
} PrimaryVtbl;

typedef struct FileSource FileSource;
typedef struct FileSourceVtbl {
    /* 0x00 */ void *unk00[2];
    /* 0x08 */ int (*getFile)(FileSource *self, u32 id);
} FileSourceVtbl;
struct FileSource {
    /* 0x00 */ FileSourceVtbl *vtbl;
};

/* The SoundArchiveLoader part, a secondary base of Primary at +0xC. */
typedef struct Loader {
    /* 0x000 */ u8 unk000[0x210];
    /* 0x210 */ FileSource *source;
} Loader;

struct Primary {
    /* 0x00 */ PrimaryVtbl *vtbl;
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ Loader loader;
};

int nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(Loader *loader, u32 id);

/* Looks the file up in the optional source, then in the sound archive; if neither has it, reports it through the owning object's virtual handler. */
void FUN_0050d480(Loader *loader, u32 id)
{
    Primary *primary = (Primary *)((u8 *)loader - 0xc);
    FileSource *source = primary->loader.source;

    if (source == NULL || source->vtbl->getFile(source, id) == 0) {
        if (nw_snd_internal_SoundArchiveLoader_GetFileAddressFromSoundArchive(&primary->loader, id) == 0) {
            primary->vtbl->onMissingFile(primary, id);
        }
    }
}

} /* extern "C" */
