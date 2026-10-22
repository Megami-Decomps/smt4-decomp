#include "shard/W5_W5Match2_UniteWork.h"
#include "shard/W4_Match1b_RegisteredHandle.h"

struct FusionCandidateOwner {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *candidate;
};
struct FusionCandidateView {
    /* 0x0000 */ u8 unk0000[0x9208];
    /* 0x9208 */ FusionCandidateOwner *candidate;
};
struct FusionPreviewObject {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
};
extern "C" {
extern UniteWork *g_unite;
extern void *g_handleRegistry;
extern const char DAT_0052f264[];
extern const char DAT_0052f298[];
f32 candidateGetPreferredValue(void *candidate);
u32 asdVramBGetFreeBytes();
void *FUN_00178b04(u32 size, const char *file, u32 line);
RegisteredHandle *modelListInit(RegisteredHandle *list);
void FUN_0040aa6c(RegisteredHandle *list, const char *name);
void FUN_0040a908(RegisteredHandle *list, u32 bytes);
void FUN_0040a918(RegisteredHandle *list, u32 bytes);
void FUN_0040aad4(RegisteredHandle *list, s32 mode);
void handleRegistryRegisterObject(void *registry, FusionPreviewObject *object);
void FUN_003fe86c(FusionPreviewObject *object, s32 index, s32 mode, f32 first, f32 second);
}

/* Lazily create and register the fusion preview model using the available VRAM budget. */
extern "C" void uniteCreatePreviewModel()
{
    UniteWork *work = g_unite;
    if (work == NULL) {
        return;
    }
    FusionCandidateView *candidates = reinterpret_cast<FusionCandidateView *>(work);
    f32 preferred = candidateGetPreferredValue(candidates->candidate->candidate);
    if (work->registered.handle == NULL) {
        u32 budget = 0x20000;
        if (asdVramBGetFreeBytes() > 0x20000) {
            budget = 0x30000;
        }
        RegisteredHandle *list = static_cast<RegisteredHandle *>(
            FUN_00178b04(32, DAT_0052f264, 0x23e8));
        if (list != NULL) {
            list = modelListInit(list);
        }
        work->registered.handle = list;
        FUN_0040aa6c(list, DAT_0052f298);
        FUN_0040a908(work->registered.handle, budget);
        FUN_0040a918(work->registered.handle, budget);
        FUN_0040aad4(work->registered.handle, 0);
        FusionPreviewObject *object = reinterpret_cast<FusionPreviewObject *>(work->registered.handle->id);
        handleRegistryRegisterObject(g_handleRegistry, object);
        FUN_003fe86c(object, 0, 2, 0.0f, 0.0f);
        object->flags &= ~3;
        FUN_003fe86c(object, 0, 2, preferred, 0.0f);
    }
}
