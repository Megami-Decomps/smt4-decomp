#include "mikado/mikadoMain.h"
#include "script/scrScriptProcess.h"
#include "shard/mikadoLoadSceneResources.h"

extern "C" {
extern const char DAT_00404dec[];
extern const char DAT_00404dd4[];
extern const char DAT_00404dbc[];
extern const char DAT_00404da4[];
void asdTMTexTableLoadEntryAsync(s32 group, u32 entry);
s32 textFormatBuffer(char *destination, const char *format, ...);
void asdLoadFileAsyncSimple(const char *path, void **destination, u32 flags);
void *asdLoadFileSyncDefault(const char *path);
ScriptRunState *FUN_00297060(void *script, void *messages);

// Load location-specific Mikado resources and the shared map-system script.
void mikadoLoadSceneResources(MikadoCamera *camera)
{
    // Resource members extend past the shared camera prefix, so keep a local view.
    struct ResourceView {
        u8 prefix[0x20];
        u32 flags;
        u8 unk24[0x18];
        s16 location;
        u8 unk3E[0x52];
        u32 textureEntry, messageBase;
        u8 unk98[0xCD4];
        void *locationScript, *locationMessages;
        u8 unkD74[0x20];
        void *systemScript, *systemMessages;
        ScriptRunState *process;
    };
    ResourceView *scene = reinterpret_cast<ResourceView *>(camera);
    char scriptPath[32], messagePath[32];
    switch (scene->location) {
    case 0:
    case 1:
        scene->textureEntry = 0;
        scene->messageBase = 0;
        break;
    case 2:
    case 5:
        scene->textureEntry = 1;
        scene->messageBase = 1000;
        break;
    case 3:
    case 4:
        scene->textureEntry = 2;
        scene->messageBase = 2000;
        break;
    }
    asdTMTexTableLoadEntryAsync(0x21, scene->textureEntry);
    textFormatBuffer(scriptPath, DAT_00404dec, scene->location, scene->location);
    textFormatBuffer(messagePath, DAT_00404dd4, scene->location, scene->location);
    asdLoadFileAsyncSimple(scriptPath, &scene->locationScript, 0);
    asdLoadFileAsyncSimple(messagePath, &scene->locationMessages, 0);
    scene->systemScript = asdLoadFileSyncDefault(DAT_00404dbc);
    scene->systemMessages = asdLoadFileSyncDefault(DAT_00404da4);
    scene->process = FUN_00297060(scene->systemScript, scene->systemMessages);
    switch (scene->location) {
    case 0:
    case 4:
    case 5:
        scene->flags |= 0x10000000;
        break;
    case 1:
    case 2:
    case 3:
        scene->flags &= ~0x10000000;
        break;
    }
}
}
