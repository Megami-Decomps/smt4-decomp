#include "common.h"
#include "nn/Result.h"

struct ExtSaveDataSpecifier {
    u8 bytes[12];
};
struct SaveDataArchive;
struct SaveDataArchiveVtable {
    /* 0x00 */ void *unk00[12];
    /* 0x30 */ void (*close)(SaveDataArchive *archive);
};
struct SaveDataArchive {
    /* 0x00 */ SaveDataArchiveVtable *vtable;
};

static __inline s32 resultDescription(s32 status)
{
    nnResultFields fields;
    fields.value = status;
    return fields.fields.description;
}

extern "C" {
void nn_fs_ExtSaveDataSpecifier_Make(ExtSaveDataSpecifier *specifier, s32 mediaType);
nn::Result FUN_00355ecc(SaveDataArchive **archive, const ExtSaveDataSpecifier *specifier, u32 flags);
s32 FUN_002bb99c(const char *name, SaveDataArchive *archive, u8 downloadable, u8 flags);

/* Opens the ext save data archive, maps its "not found" descriptions to one result, and runs the
 * archive operation; closes the archive when that fails. */
s32 FUN_00354dac(const char *name)
{
    ExtSaveDataSpecifier specifier;
    nn_fs_ExtSaveDataSpecifier_Make(&specifier, 1);
    SaveDataArchive *archive;
    nn::Result status = FUN_00355ecc(&archive, &specifier, 0);
    nn::Result module = nnResultModule(status);
    if (module == 17 && resultDescription(status) >= 220 && resultDescription(status) <= 229) {
        status = (s32)0xc8804482;
    }
    if (nnResultIsSuccess(status)) {
        status = FUN_002bb99c(name, archive, 0, 0);
        if ((s32)(status & 0x80000000) < 0) {
            archive->vtable->close(archive);
        }
    }
    return status;
}
}
