/* NON_MATCHING: operation-result temporary storage/copy ABI differs, with a larger frame and different global/constant scheduling. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/WindowOperation.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/FileLoadSync.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"

namespace {
struct AocPurchaseMenu {
    u32 unk000;
    u32 state;
    u32 substate;
    u8 unk00C[0x1FC];
    Obj42217c *window;
    u32 unk20C;
    WindowOperationResult operation;
    u8 unk224[0x12C];
    void *scriptFile;
    void *scriptBuffer;
    ScriptRunState *script;
    u8 unk35C[0xDD4];
    char prompt[0x80];
};
// The menu mode at 0xd50 lies beyond the canonical main-block prefix.
struct AocPurchaseMainView {
    AocMain main;
    u8 unk758[0x5F8];
    u8 mode;
};
typedef char AocPurchaseMenuOffsetsCheck[
    offsetof(AocPurchaseMenu, window) == 0x208 &&
    offsetof(AocPurchaseMenu, operation) == 0x210 &&
    offsetof(AocPurchaseMenu, script) == 0x358 &&
    offsetof(AocPurchaseMenu, prompt) == 0x1130 &&
    offsetof(AocPurchaseMainView, mode) == 0xD50 ? 1 : -1];
}

extern "C" {
extern AocMain *g_aocMain;
extern AocSystem *g_aocSystem;
extern const char DAT_003ff148[];
s32 FUN_00361960(void);
void FUN_0036196c(void);
WindowOperationResult _ZN9AocSystem17getPendingRequestEv(AocSystem *system);
void FUN_00126fb8(u32 *result);
void aocMenuInitializePanelSprites(void *context);
void FUN_002c58c8(u32 group, s32 image);
void *fileSlotGetBuffer(u32 slot);
ScriptRunState *FUN_00297060(void *file, void *buffer);
void __aeabi_memcpy4(void *output, const void *input, u32 size);

void AocMenu::openPurchaseList()
{
    AocPurchaseMenu * menu = reinterpret_cast<AocPurchaseMenu *>(this);
    if (FUN_00361960() != 0)
        FUN_0036196c();
    _ZN9AocSystem17getPendingRequestEv(g_aocSystem);
    FUN_00126fb8(&g_aocMain->operation.queryResult);
    WindowOperationResult operation;
    operation.result = WindowStatusResult(0);
    menu->operation = operation;
    aocMenuInitializePanelSprites(menu);
    asdTMTexTableLoadSprites(0x3A);
    for (s32 image = 0; image < 3; ++image)
        FUN_002c58c8(0x3A, image);
    u32 fileSize;
    menu->scriptFile = fileLoadSync(DAT_003ff148, &fileSize, 0);
    menu->scriptBuffer = fileSlotGetBuffer(0x41);
    menu->script = FUN_00297060(menu->scriptFile, menu->scriptBuffer);
    menu->script->mode = 2;
    menu->state = 1;
    menu->substate = 0;
    if (menu->window != NULL) {
        delete menu->window;
        menu->window = NULL;
    }
    AocMain *main = g_aocMain;
    main->flags &= ~0x70u;
    reinterpret_cast<AocPurchaseMainView *>(main)->mode = 2;
    memClear(menu->prompt, sizeof(menu->prompt));
    __aeabi_memcpy4(menu->prompt, "Please select content to purchase.", 0x23);
}
}
