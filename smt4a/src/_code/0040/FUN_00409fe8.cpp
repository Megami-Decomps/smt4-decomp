/* NON_MATCHING: allocation + inline constructor now one conditional initialiser, the negated NPC index is computed once and the cache slot address is shared (151 vs 150 rows); remaining differences are callee-saved numbering (retail: cache r4, id r5, load sl, synchronous r8, index r7, zero r9) and the cache base literal being loaded before the argument moves. */
#include "classes/Obj557b08.h"
#include <new>
#include "quest_center/qcCtrl.h"

extern "C" {

/* The model cache: a word, then 16 entries. */
extern Obj557b08 *DAT_005cc508[17];
extern u32 g_aocSystem;
extern const char DAT_00527250[];
extern const char DAT_0052726c[];

void *asdOperatorNew(u32 size, u32 option);
void textFormatBuffer(char *buffer, const char *format, ...);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);
void FUN_003fc1b0(Obj557b08 *model, s32 id);
void FUN_003fcd20(Obj557b08 *model);
void aocQueueType0c(u32 system, s32 id, void **handle, const char *path);
s32 FUN_00470b18(u32 system, s32 id, s32 flag);
void FUN_004713ec(u32 system, s32 id, void **handle, const char *path);

/* Returns the cached model resource for `id` (negative ids are NPCs), creating and starting its
 * load when it is not cached yet. */
Obj557b08 *FUN_00409fe8(s32 id, s32 load, s32 synchronous, u32 allocOption)
{
    char path[64];
    s32 i;
    Obj557b08 **cache = DAT_005cc508;

    for (i = 0; i < 16; i++) {
        Obj557b08 **entry = &cache[i];
        Obj557b08 *cached = entry[1];
        if (cached != NULL && cached->id == id) {
            cached->references++;
            return entry[1];
        }
    }
    i = 0;
    do {
        if (cache[i + 1] == NULL) {
            break;
        }
        if (cache[i + 2] == NULL) {
            i++;
            break;
        }
        i += 2;
    } while (i < 16);

    void *memory = asdOperatorNew(0x48, allocOption);
    Obj557b08 *model = memory != NULL ? new (memory) Obj557b08 : NULL;
    cache[i + 1] = model;
    model->references = 1;
    s32 npc = -id;
    if (load != 0) {
        if (id < 0) {
            model->id = -npc;
            textFormatBuffer(path, DAT_00527250, npc);
            model->kind = 2;
            model->handle = NULL;
            model->index = npc;
            if (FUN_004705ec(g_aocSystem, npc, 1) != 0) {
                aocQueueType0c(g_aocSystem, npc, &model->handle, path);
                return model;
            }
        } else {
            model->id = id;
            textFormatBuffer(path, DAT_0052726c, id);
            model->handle = NULL;
            model->kind = 6;
            model->index = id - 1;
            if (FUN_00470b18(g_aocSystem, id, 1) != 0) {
                FUN_004713ec(g_aocSystem, id, &model->handle, path);
                return model;
            }
            if (synchronous == 0) {
                asdLoadFileAsyncSimple(path, &model->handle, 1);
                return model;
            }
        }
        asdLoadFileAsyncSimple(path, &model->handle, 0);
        return model;
    }
    if (id < 0) {
        FUN_003fcd20(model);
    } else {
        FUN_003fc1b0(model, id);
    }
    return model;
}

}
