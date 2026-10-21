/* NON_MATCHING: constructor stores are grouped, parser cold blocks and saved-register lifetimes differ, and literal order changes; candidate -O2. */
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "AsdSDK/Source/Util/AsdList.h"
#include "shard/GlobalBlocks.h"

struct ModelNodeData {
    u32 references;
    union {
        u32 flags;
        struct { u8 registered; u8 unk05[3]; } state;
    };
    void *model;
    void *source;
    void *dictionary;
    void *argument;
    u32 unk18;
};
struct ModelContainerHeader {
    u8 magic[4];
    u8 unk04[8];
    u32 dictionaryOffset;
    u32 modelOffset;
    u32 signedModelOffset;
};
struct ModelSignatureHeader {
    u8 magic[8];
    u32 flags;
};
struct ModelDataCounterView {
    u8 unk00[0x38];
    u32 count;
};
extern "C" {
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
s32 rt_memcmp(const void *left, const void *right, u32 size);
void asdListAdd(AsdList *list, void *item, s32 index);
extern const char g_asdModelContainerAtbcMagic[];
extern const char g_asdModelContainerAbchMagic[];
extern const char g_asdModelPayloadSignature[];
extern AsdList DAT_00636ebc;
}

static __inline void *modelPayload(void *source, u32 *flags)
{
    ModelContainerHeader *container = (ModelContainerHeader *)source;
    if (rt_memcmp(source, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(source, g_asdModelContainerAbchMagic, 4) == 0) {
        u32 offset = container->signedModelOffset;
        if (offset == 0) {
            offset = container->modelOffset;
        }
        ModelSignatureHeader *signature = (ModelSignatureHeader *)((u8 *)source + offset);
        if (rt_memcmp(signature, g_asdModelPayloadSignature, 7) == 0) {
            *flags = signature->flags;
            return (u8 *)signature + 0x80;
        }
        return NULL;
    }
    return source;
}

static __inline void *modelDictionary(void *source)
{
    if (rt_memcmp(source, g_asdModelContainerAtbcMagic, 4) == 0 ||
        rt_memcmp(source, g_asdModelContainerAbchMagic, 4) == 0) {
        return (u8 *)source + ((ModelContainerHeader *)source)->dictionaryOffset;
    }
    return NULL;
}

extern "C" void *asdMdlBuildNodeData(void *source, void *argument)
{
    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdModel.cpp", 0x7cc);
    ModelNodeData *node = (ModelNodeData *)asdMemoryAlloc(
        ASD_HEAP_MAIN, ASD_ALIGN_DEFAULT, 0, sizeof(ModelNodeData), 1);
    node->flags = 0;
    node->model = NULL;
    node->dictionary = NULL;
    node->argument = NULL;
    node->unk18 = 0;
    node->references = 1;
    node->state.registered = 1;
    node->source = source;
    u32 flags = 0;
    node->model = modelPayload(source, &flags);
    node->dictionary = modelDictionary(source);
    if (flags == 0) {
        node->argument = argument;
    }
    asdListAdd(&DAT_00636ebc, node, 0);
    ++((ModelDataCounterView *)&g_gfxSettings)->count;
    return node;
}
