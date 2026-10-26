#include "common.h"
#include "code/Code0014_Smt4.h"

extern "C" {

struct EffectRequest {
    /* 0x00 */ u8 data[60];
};

struct EffectTarget {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 *channel;
};

struct EffectEntry {
    /* 0x00 */ EffectTarget *target;
};

struct EffectFileRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ EffectEntry **entries;
};

EffectFileRef *packageFindFileRefByName(u32 package, u32 type, u32 name);
void FUN_002a6d1c(EffectRequest *request, s32 mode, u32 first, u32 second, u32 param);
void FUN_002a8ac4(u32 channel, EffectRequest *request, EffectTarget *target);

/* Builds an effect request for the named package entry and submits it to the entry's channel. */
void effectSubmitPackageRequest(u32 package, u32 name, u32 first, u32 second, u32 param)
{
    EffectFileRef *ref = packageFindFileRefByName(package, 26, name);
    EffectEntry **entries = ref != NULL ? ref->entries : NULL;
    EffectTarget *target = (*entries)->target;
    EffectRequest request;

    FUN_002a6d1c(&request, 2, first, second, param);
    FUN_002a8ac4(*target->channel, &request, target);
}

} /* extern "C" */
