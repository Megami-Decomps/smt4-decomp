#include "gamedata/SavedUnitSelection.h"
#include "network/DataStore/DataStoreMain.h"
#include "code/Code0023.h"
#include "code/Code002c.h"
#include "code/Code0033.h"
#include "gamedata/GamePlayerData.h"

extern "C" {
extern void *g_handleRegistry;
extern s8 g_saveLoadUIBase;
void statusCameraRestore(s32 enabled);
s32 byte1IsZero();
void FUN_0023b45c(s32 enabled);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);
void FUN_0038b5fc(s32 kind, u16 value);
void buttonHelpSetText(s32 slot, u32 color);
void ptrListRemoveClearOwner(void *registry, u32 handle);
void statusPanelClose();

/* Enters editor state `next`, remembering the state it leaves and restarting its frame count. */
static __inline void editorEnter(SavedUnitSelection *selection, u8 next)
{
    SavedUnitSelection::SavedUnitSelectionEditor *editor = &selection->editor;
    u8 previous = editor->state;
    editor->state = next;
    editor->previous = previous;
    editor->frame = 0;
}

// Apply staged player stats when requested, or release editor resources before closing.
void savedUnitEditorApplyOrClose(SavedUnitSelection *editor)
{
    if (objBStateAllowsAction() && editor->active) {
        editor->active = 0;
        statusCameraRestore(1);
        editor->changed = 1;
    }
    savedUnitEditorPollLoad(editor);
    if (g_saveLoadUIBase == 0 || editor->active) {
        if (!editor->editor.canApply || editor->active || !byte1IsZero())
            return;
        FUN_0033449c(0);
        FUN_0023b45c(1);
        gameGlobalsSetOverlayActive(1);
        statusCameraRestore(0);
        editor->changed = 0;
        if (!editor->changes[editor->selected])
            FUN_0023b45c(0);
        __aeabi_memcpy4(gameGetPlayerData(), &editor->editor.stats, sizeof(UnitSevenStats));
        FUN_0038b5fc(1, editor->editor.stats.values[4]);
        FUN_0038b5fc(2, editor->editor.stats.values[5]);
        FUN_0038b5fc(0, editor->editor.stats.values[3]);
        editor->active = 1;
        buttonHelpSetText(0, 0xF4F4F4FF);
        editorEnter(editor, 5);
    } else {
        if (editor->resource != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, editor->resource->handle);
            if (editor->resource != NULL) {
                editor->resource->vtable->destroy(editor->resource);
                editor->resource = NULL;
            }
        }
        statusPanelClose();
        buttonHelpTransitionPresetFlags(3);
        editorEnter(editor, 9);
    }
    editor->editor.pending = 0;
}
}
