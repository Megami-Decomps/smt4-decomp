#include "common.h"

struct ModelOwner {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u32 handle;
};
extern "C" {
void textFormatBuffer(char *destination, const char *format, const char *name);
u32 asdMdlManagerCreateLoaded(const char *path, u32 mode);
void FUN_002a0428(u32 handle, u32 enabled);
/* Loads the model named by the owner and applies its state. */
void modelLoadBamAndEnable(ModelOwner *owner, const char *name)
{
    char path[128];
    textFormatBuffer(path, "%s.bam", name);
    owner->handle = asdMdlManagerCreateLoaded(path, 7);
    FUN_002a0428(owner->handle, 1);
}
}
