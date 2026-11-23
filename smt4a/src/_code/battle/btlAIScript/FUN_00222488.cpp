#include <stdio.h>
#include "common.h"
#include "battle/BtlMainAccess.h"
#include "gamedata/NkmEnemyLookup.h"
#include "battle/btlAIScript.h"
#include "addon/AocSystemA.h"
#include "script/scrScriptProcess.h"

extern "C" {

void asdMemFree(void *block);
void sysMemClear(void *dst, u32 size);
s32 FUN_00240c34(const char *path);
char *libc_strcpy(char *dst, const char *src);

extern BtlAiScript *g_btlAiScript;
static const char s_aiScriptPathFormat[] = "battle/AI/%s.bf";
static const char s_aiScriptFallbackPath[] = "battle/AI/tmp.bf";

/* Drops the loaded AI script and picks the script file for the actor's demon, falling back to
 * the placeholder script when the demon has none. */
void FUN_00222488(BtlAiScriptActor *actor)
{
    BtlAiScript *script = g_btlAiScript;
    const char *name;
    char path[0x80];

    if (script != NULL) {
        if (script->process != NULL) {
            scrScriptProcessDestroy(script->process);
            script->process = NULL;
        }
        if (script->data != NULL) {
            asdMemFree(script->data);
            script->data = NULL;
        }
        script->unk0C = 1;
        g_aocSystem->aiDemonId = -1;
        btlGetMainState();
        name = nkmEnemyFindById(actor->demon->id)->aiScriptName;
        sysMemClear(path, sizeof(path));
        sprintf(path, s_aiScriptPathFormat, name);
        if (FUN_00240c34(path) == 0) {
            sprintf(path, s_aiScriptFallbackPath);
        }
        libc_strcpy(script->path, path);
        if (aocContentLookupSucceeds(g_aocSystem, actor->demon->id) != 0) {
            g_aocSystem->aiDemonId = actor->demon->id;
        }
    }
}

} /* extern "C" */
