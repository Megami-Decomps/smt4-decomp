/* NON_MATCHING: stack reservation and initial zero register are scheduled before the process load/test. */
#include "battle/btlAIScript.h"
#include "battle/btlMain.h"
#include "addon/aocMain.h"
#include "gamedata/DevilRecord.h"
#include "gamedata/SupportUnitRecord.h"
#include "util/CalleeContracts.h"

extern "C" {
extern AocSystem *g_aocSystem;
extern const char DAT_00400444[]; /* battle/AI/%s.bf */
extern const char DAT_00400454[]; /* battle/AI/tmp.bf */
void scrScriptProcessDestroy(void *);
void asdMemFree(void *);
SupportUnitRecord *supportUnitGetEntry(s32, s32);
DevilRecord *dataTable00FindById(u32);
void memClear(void *, u32);
s32 textFormatBuffer(char *, const char *, ...);
BtlMainState *btlGetMainState();
s32 FUN_002402c4(BtlMainState *, char *);
char *libc_strcpy(char *, const char *);
s32 aocContentLookupSucceeds(AocSystem *, u16);

/* Resolve support-unit or demon AI, falling back to the temporary script. */
void btlAiScriptLoadFile(BtlAiScript *script, BtlAiScriptActor *actor)
{
    /* Both the support IDs and IV's add-on AI selector exceed their shared prefixes. */
    struct DemonSourceView { u8 flags; u8 unk01; u16 id; s16 support; s16 variant; };
    struct AocAiView { u8 unk000[0x444]; s32 aiDemonId; };
    typedef char AiScriptExtendedOffsets[
        offsetof(DemonSourceView, support) == 4 &&
        offsetof(DemonSourceView, variant) == 6 &&
        offsetof(AocAiView, aiDemonId) == 0x444 ? 1 : -1];
    if (script->process != NULL) {
        scrScriptProcessDestroy(script->process);
        script->process = NULL;
    }
    if (script->data != NULL) {
        asdMemFree(script->data);
        script->data = NULL;
    }
    script->unk0C = 1;
    bool useSupport = false;
    if ((((DemonSourceView *)actor->demon)->flags & 8) && FUN_002b6ad0())
        useSupport = true;
    ((AocAiView *)g_aocSystem)->aiDemonId = -1;
    char path[0x80];
    if (useSupport) {
        DemonSourceView *source = (DemonSourceView *)actor->demon;
        const char *name = supportUnitGetEntry(source->support, source->variant)->aiScript.name;
        memClear(path, sizeof(path));
        textFormatBuffer(path, DAT_00400444, name);
        if (!FUN_002402c4(btlGetMainState(), path))
            textFormatBuffer(path, DAT_00400454);
        libc_strcpy(script->path, path);
    } else {
        const char *name = dataTable00FindById(actor->demon->id)->aiScript.name;
        memClear(path, sizeof(path));
        textFormatBuffer(path, DAT_00400444, name);
        if (!FUN_002402c4(btlGetMainState(), path))
            textFormatBuffer(path, DAT_00400454);
        libc_strcpy(script->path, path);
        if (aocContentLookupSucceeds(g_aocSystem, actor->demon->id))
            ((AocAiView *)g_aocSystem)->aiDemonId = actor->demon->id;
    }
}
}
