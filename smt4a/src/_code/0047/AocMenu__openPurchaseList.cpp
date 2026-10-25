/* NON_MATCHING: the request reset (strb, member ctor, owner recovery, ldrd/strd) now matches retail; remaining: retail loads the g_aocMain address first, forwards the freshly built request fields from registers when copying it into the menu (ldr/ldm/stm pieces) where this build copies the whole object with one ldm/stm, and reuses r1 for the constant 2. */
#include "classes/AocMenu.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "addon/aocMain.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include <stddef.h>

extern "C" {
extern AocSystemA *g_aocSystem;
extern QueuedRequestState *g_aocMain;
extern const char DAT_00526444[];
s32 appletIsRegistered406(void);
void FUN_00441f54(void);
void FUN_0016ccb4(void *query);
void aocMenuInitializeSprites(AocMenu *menu);
void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 table, s32 index);
u32 dataTableValueOrZero(s32 index);
ScriptProcess *FUN_00275bc8(void *tableFile, u32 tableValue);
void sysMemClear(void *buffer, u32 size);
void *__aeabi_memcpy4(void *destination, const void *source, u32 size);
}

void AocMenu::openPurchaseList()
{
    if (appletIsRegistered406()) {
        FUN_00441f54();
    }
    RequestParameters pending = g_aocSystem->getPendingRequest();
    FUN_0016ccb4(reinterpret_cast<u8 *>(g_aocMain) + 0x80);
    new (&pending) RequestParameters(0);
    request = pending;
    aocMenuInitializeSprites(this);
    asdTMTexTableLoadSprites(0x2f);
    for (s32 i = 0; i < 3; ++i) {
        FUN_0014afd0(0x2f, i);
    }
    u32 size;
    tableFile = asdLoadFileWithSize(DAT_00526444, &size, 0);
    tableValue = dataTableValueOrZero(0x40);
    script = FUN_00275bc8(tableFile, tableValue);
    script->state = 2;
    step = 1;
    substep = 0;
    if (window != NULL) {
        delete window;
        window = NULL;
    }
    g_aocMain->flags &= ~0x70u;
    g_aocMain->mode = 2;
    sysMemClear(prompt, sizeof(prompt));
    __aeabi_memcpy4(prompt, "Please select content to purchase.", 35);
}
