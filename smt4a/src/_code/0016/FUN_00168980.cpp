#include "ui/ButtonHelp.h"
#include "gamedata/SavedUnitSelection.h"

extern "C" {
extern ButtonHelpGlobalsA g_buttonHelp;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ u8 flag;
} Entry;

void buttonHelpBeginExit(s32 value);
void FUN_00183e58(void);
Entry *dataTableGetEntry0e(u32 id);

/* Compares the entries for the record's id and for `id`: when the first has its flag clear and the second set, runs buttonHelpBeginExit(1); otherwise FUN_00183e58. Does nothing if either entry is missing. */
void FUN_00168980(u32 id)
{
    Entry *current;
    Entry *other;

    current = dataTableGetEntry0e(g_buttonHelp.work->selectedId);
    other = dataTableGetEntry0e(id);
    if (current == NULL || other == NULL) {
        return;
    }
    if (current->flag == 0 && other->flag != 0) {
        buttonHelpBeginExit(1);
        return;
    }
    FUN_00183e58();
}

} /* extern "C" */
