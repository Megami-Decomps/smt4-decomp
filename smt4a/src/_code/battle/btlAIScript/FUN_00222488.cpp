/* NON_MATCHING: retail schedules the g_btlAiScript pool load before `sub sp, sp, #132`; rest identical. */
#include "battle/BtlMainAccess.h"
#include "battle/btlAIScript.h"

extern "C" {

void asdMemFree(void *block);
void scrScriptProcessDestroy(void *process);
u8 *dataTable00FindById(u32 id);
void sysMemClear(void *dst, u32 size);
void textFormatBuffer(char *dst, const char *format, ...);
s32 FUN_00240c34(const char *path);
char *libc_strcpy(char *dst, const char *src);
u32 aocContentLookupSucceeds(BtlAiScriptAocSystem *aoc, u16 id);

extern BtlAiScript *g_btlAiScript;
extern BtlAiScriptAocSystem *g_aocSystem;
extern const char DAT_00527f94[]; /* "battle/AI/%s.bf" */
extern const char DAT_00527fa4[]; /* "battle/AI/tmp.bf" */

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
        name = (const char *)(dataTable00FindById(actor->demon->id) + 0x8E);
        sysMemClear(path, sizeof(path));
        textFormatBuffer(path, DAT_00527f94, name);
        if (FUN_00240c34(path) == 0) {
            textFormatBuffer(path, DAT_00527fa4);
        }
        libc_strcpy(script->path, path);
        if (aocContentLookupSucceeds(g_aocSystem, actor->demon->id) != 0) {
            g_aocSystem->aiDemonId = actor->demon->id;
        }
    }
}

} /* extern "C" */
