#include "common.h"

extern "C" {

struct CampCecEditOptions {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u8 enabled;
    /* 0x0F */ u8 unk0F[2];
    /* 0x11 */ s8 selection;
};

struct CampCecEdit {
    /* 0x000 */ u8 unk000[8];
    /* 0x008 */ void *resource;
    /* 0x00C */ u32 effectId;
    /* 0x010 */ u8 parameters[0xF0];
    /* 0x100 */ CampCecEditOptions options;
};
extern CampCecEdit *g_campCecEdit;
void *FUN_0032d61c(u32 effectId, void *resource, void *parameters, u32 mode, u32 flags, s32 selection);
s32 campCecEditCreateEffect(void)
{
    CampCecEdit *edit = g_campCecEdit;
    CampCecEditOptions *options = &edit->options;
    if (options->enabled != 0) {
        FUN_0032d61c(edit->effectId, edit->resource, edit->parameters, 0, 0, options->selection);
    }
    return 0;
}

} /* extern "C" */
