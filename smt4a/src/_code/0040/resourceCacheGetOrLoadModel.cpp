/* NON_MATCHING: 150 vs 151 rows (97 diff lines); operator new throw(), publish-first slot store, normal empty-slot for-loop and single return tail match retail structure; remaining: callee-saved numbering and cache base load order. */
#include "runtime/Stdio.h"
#include "classes/Obj557b08.h"
#include <new>
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "quest_center/qcCtrl.h"

inline void *operator new(unsigned int size, u32 option) throw()
{
    return asdOperatorNew(size, option);
}

extern "C" {

/* The model cache: a word, then 16 entries. */
extern Obj557b08 *g_resourceCache[17];
extern u32 g_aocSystem;
extern const char DAT_00527250[];
extern const char DAT_0052726c[];

void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);
void nkdwLoadWorldData(Obj557b08 *model, s32 id);
void npcPackageLoad(Obj557b08 *model);
void aocQueueType0c(u32 system, s32 id, void **handle, const char *path);
s32 aocPackageHasTextureContent(u32 system, s32 id, s32 flag);
void aocDisplayQueueFormattedEntry(u32 system, s32 id, void **handle, const char *path); /* declcheck: local (the shared declaration in shard/W5_W5Match7_EntrySort.h does not compile here: argument of type "void **" is incompatible with parameter of type "u32") */

/* Returns the cached model resource for `id` (negative ids are NPCs), creating and starting its
 * load when it is not cached yet. */
Obj557b08 *resourceCacheGetOrLoadModel(s32 id, s32 load, s32 synchronous, u32 allocOption)
{
    char path[64];
    s32 i;

    for (i = 0; i < 16; i++) {
        Obj557b08 **entry = &g_resourceCache[i];
        Obj557b08 *cached = entry[1];
        if (cached != NULL && cached->id == id) {
            cached->references++;
            return entry[1];
        }
    }
    for (i = 0; i < 16; i++) {
        if (g_resourceCache[i + 1] == NULL) {
            break;
        }
    }

    g_resourceCache[i + 1] = new (allocOption) Obj557b08;
    Obj557b08 *model = g_resourceCache[i + 1];
    model->references = 1;
    s32 npc = -id;
    if (load != 0) {
        if (id < 0) {
            model->id = -npc;
            __2sprintf(path, DAT_00527250, npc);
            model->kind = 2;
            model->handle = NULL;
            model->index = npc;
            if (aocPackageHasVoiceContent(g_aocSystem, npc, 1) != 0) {
                aocQueueType0c(g_aocSystem, npc, &model->handle, path);
            } else {
                asdLoadFileAsyncSimple(path, &model->handle, 0);
            }
        } else {
            model->id = id;
            __2sprintf(path, DAT_0052726c, id);
            model->handle = NULL;
            model->kind = 6;
            model->index = id - 1;
            if (aocPackageHasTextureContent(g_aocSystem, id, 1) != 0) {
                aocDisplayQueueFormattedEntry(g_aocSystem, id, &model->handle, path);
            } else if (synchronous == 0) {
                asdLoadFileAsyncSimple(path, &model->handle, 1);
            } else {
                asdLoadFileAsyncSimple(path, &model->handle, 0);
            }
        }
    } else {
        if (id < 0) {
            npcPackageLoad(model);
        } else {
            nkdwLoadWorldData(model, id);
        }
    }
    return model;
}

} /* extern "C" */
