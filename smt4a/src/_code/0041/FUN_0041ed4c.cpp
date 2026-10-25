/* NON_MATCHING: state, previous-state and frame stores exchange registers and instruction order. */
#include "gamedata/SavedUnitSelection.h"

extern "C" {
extern void *g_handleRegistry;
extern s8 g_saveLoadUIBase;
s32 objBStateAllowsAction();
void FUN_002f0384(s32 enabled);
void FUN_0041dcc0(SavedUnitSelection *editor);
s32 byte1IsZero();
void FUN_0033449c(s32 enabled);
void FUN_0023b45c(s32 enabled);
void FUN_002c8538(s32 enabled);
UnitRecord *gameGetPlayerData();
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_0038b5fc(s32 kind, u16 value);
void FUN_0019de98(s32 slot, u32 color);
void ptrListRemoveClearOwner(void *registry, u32 handle);
void FUN_0022e774();
void FUN_00168980(s32 state);

// Apply staged player stats when requested, or release editor resources before closing.
void FUN_0041ed4c(SavedUnitSelection *editor)
{
    if (objBStateAllowsAction() && editor->active) {
        editor->active = 0;
        FUN_002f0384(1);
        editor->changed = 1;
    }
    FUN_0041dcc0(editor);
    if (g_saveLoadUIBase == 0 || editor->active) {
        if (!editor->editor.canApply || editor->active || !byte1IsZero())
            return;
        FUN_0033449c(0);
        FUN_0023b45c(1);
        FUN_002c8538(1);
        FUN_002f0384(0);
        editor->changed = 0;
        if (!editor->changes[editor->selected])
            FUN_0023b45c(0);
        __aeabi_memcpy4(gameGetPlayerData(), &editor->editor.stats, sizeof(UnitSevenStats));
        FUN_0038b5fc(1, editor->editor.stats.values[4]);
        FUN_0038b5fc(2, editor->editor.stats.values[5]);
        FUN_0038b5fc(0, editor->editor.stats.values[3]);
        editor->active = 1;
        FUN_0019de98(0, 0xF4F4F4FF);
        editor->editor.previous = editor->editor.state;
        editor->editor.state = 5;
        editor->editor.frame = 0;
    } else {
        if (editor->resource != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, editor->resource->handle);
            if (editor->resource != NULL) {
                editor->resource->vtable->destroy(editor->resource);
                editor->resource = NULL;
            }
        }
        FUN_0022e774();
        FUN_00168980(3);
        editor->editor.previous = editor->editor.state;
        editor->editor.state = 9;
        editor->editor.frame = 0;
    }
    editor->editor.pending = 0;
}
}
