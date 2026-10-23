#include "camp/ScriptPanelResources.h"

extern "C" {
void textFormatBuffer(char *output, const char *format, ...);
void asdTMTexLoadMainHeap(u32 table, u32 node);
void *asdLoadFileSyncDefault(const char *path);
void asdLoadFileAsyncSimple(const char *path, void **output, s32 mode);
ScriptProcess *FUN_00275bc8(void *script, void *messages);
extern const char DAT_005328e4[];
extern const char DAT_005328cc[];
extern const char DAT_005328b4[];
extern const char DAT_0053289c[];

// Load Mikado scene textures and scripts, including the shared map-system interpreter.
void mikadoLoadSceneResources(CampScriptPanelResources *work)
{
    switch (work->mikado.sceneId) {
    case 0: case 1:
        work->textureNode = 0;
        work->textureImage = 0;
        break;
    case 2: case 5:
        work->textureNode = 1;
        work->textureImage = 1000;
        break;
    case 3: case 4:
        work->textureNode = 2;
        work->textureImage = 2000;
        break;
    }
    asdTMTexLoadMainHeap(24, work->textureNode);
    char scriptPath[32];
    char messagePath[32];
    textFormatBuffer(scriptPath, DAT_005328e4, work->mikado.sceneId, work->mikado.sceneId);
    textFormatBuffer(messagePath, DAT_005328cc, work->mikado.sceneId, work->mikado.sceneId);
    asdLoadFileAsyncSimple(scriptPath, &work->scriptFileA, 0);
    asdLoadFileAsyncSimple(messagePath, &work->messageFileA, 0);
    work->scriptFileB = asdLoadFileSyncDefault(DAT_005328b4);
    work->messageFileB = asdLoadFileSyncDefault(DAT_0053289c);
    work->scriptB = FUN_00275bc8(work->scriptFileB, work->messageFileB);
    switch (work->mikado.sceneId) {
    case 0: case 4: case 5:
        work->mikado.flags |= 0x10000000;
        break;
    case 1: case 2: case 3:
        work->mikado.flags &= ~0x10000000;
        break;
    }
}
}
