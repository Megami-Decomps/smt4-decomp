/* NON_MATCHING: the operation result now constructs like retail; retail reuses the pending-request temporary's slot for it (36-byte frame vs 52), copies it member-wise and loads the g_aocMain address before the first call. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/WindowOperation.h"
#include "script/scrScriptProcess.h"
#include "AsdSDK/FileLoadSync.h"
#include "AsdSDK/AsdMemUtil.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/asdTMTexTableLoadSprites.h"
#include "addon/AocSystem.h"

namespace {
struct AocPurchaseMenu {
    u32 unk000;
    u32 state;
    u32 substate;
    u8 unk00C[0x1FC];
    Obj42217c *window;
    u32 unk20C;
    WindowStatusOperationResult operation;
    u8 unk224[0x12C];
    void *scriptFile;
    void *scriptBuffer;
    ScriptProcess *script;
    u8 unk35C[0xDD4];
    char prompt[0x80];
};
typedef char AocPurchaseMenuOffsetsCheck[
    offsetof(AocPurchaseMenu, window) == 0x208 &&
    offsetof(AocPurchaseMenu, operation) == 0x210 &&
    offsetof(AocPurchaseMenu, script) == 0x358 &&
    offsetof(AocPurchaseMenu, prompt) == 0x1130 ? 1 : -1];
}

extern "C" {
extern const char DAT_003ff148[];
s32 FUN_00361960(void);
void FUN_0036196c(void);
void FUN_00126fb8(u32 *result);
void aocMenuInitializePanelSprites(void *context);
void asdTMTexTablePrepareNodeImage(u32 group, s32 image);
void *fileSlotGetBuffer(u32 slot);
void __aeabi_memcpy4(void *output, const void *input, u32 size);

void AocMenu::openPurchaseList()
{
    AocPurchaseMenu * menu = reinterpret_cast<AocPurchaseMenu *>(this);
    if (FUN_00361960() != 0)
        FUN_0036196c();
    g_aocSystem->getPendingRequest();
    FUN_00126fb8(&g_aocMain->queryResult);
    WindowStatusOperationResult operation(0);
    menu->operation = operation;
    aocMenuInitializePanelSprites(menu);
    asdTMTexTableLoadSprites(0x3A);
    for (s32 image = 0; image < 3; ++image)
        asdTMTexTablePrepareNodeImage(0x3A, image);
    u32 fileSize;
    menu->scriptFile = fileLoadSync(DAT_003ff148, &fileSize, 0);
    menu->scriptBuffer = fileSlotGetBuffer(0x41);
    menu->script = scrScriptProcessCreate(menu->scriptFile, menu->scriptBuffer);
    menu->script->mode = 2;
    menu->state = 1;
    menu->substate = 0;
    if (menu->window != NULL) {
        delete menu->window;
        menu->window = NULL;
    }
    AocMain *main = g_aocMain;
    main->flags &= ~0x70u;
    main->mode = 2;
    memClear(menu->prompt, sizeof(menu->prompt));
    __aeabi_memcpy4(menu->prompt, "Please select content to purchase.", 0x23);
}
}
