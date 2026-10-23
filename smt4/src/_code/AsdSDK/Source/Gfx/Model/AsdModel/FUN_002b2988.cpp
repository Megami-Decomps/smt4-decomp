/* NON_MATCHING: payload validation remains inline instead of moving after the epilogue; initialization stores and saved registers differ. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/ModelContainer.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Util/AsdList.h"
#include "shard/S1GfxModel.h"

extern "C" {
extern AsdList DAT_004dae3c;
extern GfxModelState g_gfxSettings;
extern const char DAT_00409428[];
extern const char DAT_00409438[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void asdListAdd(AsdList *list, void *item, s32 index);
s32 rt_memcmp(const void *left, const void *right, u32 size);

// An unwrapped model already points at its payload; ATBC adds a validated header.
static __inline void *modelContainerGetPayload(u8 *file, u32 *payloadSize)
{
    if (rt_memcmp(file, DAT_00409428, 4) != 0) {
        return file;
    }
    AsdModelContainerHeader *container = reinterpret_cast<AsdModelContainerHeader *>(file);
    u32 offset = container->payloadOffset;
    if (offset == 0) {
        offset = container->fallbackOffset;
    }
    AsdModelPayloadHeader *header = reinterpret_cast<AsdModelPayloadHeader *>(file + offset);
    if (rt_memcmp(header, DAT_00409438, 7) == 0) {
        *payloadSize = header->payloadSize;
        return header + 1;
    }
    return NULL;
}

// Register a model image, accepting either raw data or an ATBC-wrapped MDLSIGN payload.
AsdModelEntry *FUN_002b2988(u8 *file, u32 parameter)
{
    // AsdModelEntry only describes the first 0xC bytes; this registration owns 0x1C.
    struct LoadedModelView {
        u32 references; // 0x00
        union {
            u32 flags; // 0x04
            struct { u8 active; u8 unk05[3]; } state;
        };
        void *payload; // 0x08
        u8 *file; // 0x0C
        void *auxiliary; // 0x10
        u32 parameter; // 0x14
        void *next; // 0x18
    };
    typedef char LoadedModelViewLayoutCheck[
        sizeof(LoadedModelView) == 0x1C && offsetof(LoadedModelView, payload) == 8 &&
        offsetof(LoadedModelView, file) == 0xC && offsetof(LoadedModelView, auxiliary) == 0x10 &&
        offsetof(LoadedModelView, parameter) == 0x14 && offsetof(LoadedModelView, next) == 0x18 ? 1 : -1];

    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x7C8);
    LoadedModelView *model = static_cast<LoadedModelView *>(
        asdMemoryAlloc(ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(LoadedModelView), 1));
    model->flags = 0;
    model->payload = NULL;
    model->auxiliary = NULL;
    model->parameter = 0;
    model->next = NULL;
    model->references = 1;
    model->state.active = 1;
    model->file = file;

    u32 payloadSize = 0;
    model->payload = modelContainerGetPayload(file, &payloadSize);
    void *auxiliary = NULL;
    if (rt_memcmp(file, DAT_00409428, 4) == 0) {
        auxiliary = file + reinterpret_cast<AsdModelContainerHeader *>(file)->auxiliary.offset;
    }
    model->auxiliary = auxiliary;
    if (payloadSize == 0) {
        model->parameter = parameter;
    }
    asdListAdd(&DAT_004dae3c, model, 0);
    ++g_gfxSettings.loadedModels.count;
    return reinterpret_cast<AsdModelEntry *>(model);
}
}
