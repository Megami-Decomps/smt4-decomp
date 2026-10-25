/* NON_MATCHING: register allocation and store scheduling only: retail loads the cache base first and keeps the arguments in r5/sl/r8, stores the vptr and id with one stm and tests the allocation with cmp/mov r9; ours reaches the same stores with different registers and order */
#include "classes/Obj557b08.h"
#include <new>
#include "quest_center/qcCtrl.h"

/* The model cache: a word, then 16 entries. */
struct ModelCache {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ Obj557b08 *entries[16];
};

extern "C" {

extern ModelCache DAT_005cc508;
extern u32 g_aocSystem;
extern const char DAT_00527250[];
extern const char DAT_0052726c[];

void *asdOperatorNew(u32 size, u32 option);
void textFormatBuffer(char *buffer, const char *format, ...);
void asdLoadFileAsyncSimple(const char *path, void **resource, s32 mode);
void FUN_003fc1b0(Obj557b08 *model, s32 id);
void FUN_003fcd20(Obj557b08 *model);
void FUN_00470b60(u32 system, s32 id, void **handle, const char *path);
s32 FUN_00470b18(u32 system, s32 id, s32 flag);
void FUN_004713ec(u32 system, s32 id, void **handle, const char *path);

/* Returns the cached model resource for `id` (negative ids are NPCs), creating and starting its
 * load when it is not cached yet. */
Obj557b08 *FUN_00409fe8(s32 id, s32 load, s32 synchronous, u32 allocOption)
{
    char path[64];
    s32 i;

    for (i = 0; i < 16; i++) {
        Obj557b08 *cached = DAT_005cc508.entries[i];
        if (cached != NULL && cached->id == id) {
            cached->references++;
            return DAT_005cc508.entries[i];
        }
    }
    i = 0;
    do {
        if (DAT_005cc508.entries[i] == NULL) {
            break;
        }
        if (DAT_005cc508.entries[i + 1] == NULL) {
            i++;
            break;
        }
        i += 2;
    } while (i < 16);

    Obj557b08 *model = static_cast<Obj557b08 *>(asdOperatorNew(0x48, allocOption));
    if (model != NULL) {
        new (model) Obj557b08;
    }
    DAT_005cc508.entries[i] = model;
    model->references = 1;
    if (load != 0) {
        if (id < 0) {
            model->id = id;
            textFormatBuffer(path, DAT_00527250, -id);
            model->handle = NULL;
            model->kind = 2;
            model->index = -id;
            if (FUN_004705ec(g_aocSystem, -id, 1) != 0) {
                FUN_00470b60(g_aocSystem, -id, &model->handle, path);
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
