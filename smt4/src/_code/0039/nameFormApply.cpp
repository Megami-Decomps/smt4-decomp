#include "common.h"

extern "C" {

typedef struct NameBuffer {
    /* 0x00 */ u32 words[4];
    /* 0x10 */ u16 tail;
} NameBuffer;

typedef struct NameForm {
    /* 0x00 */ u8 unk00[0x49];
    /* 0x49 */ s8 nameKind;     /* 0 or -1: default name, 1: player name, 2: second name */
} NameForm;

typedef struct NameTask {
    /* 0x000 */ u8 unk000[0x600];
    /* 0x600 */ NameForm form;
    /* 0x64A */ u8 unk64A[0x14A];
    /* 0x794 */ u8 unk794[1];
} NameTask;

extern NameBuffer *gameDataGetSecondName(void);
extern NameBuffer *gameDataGetPlayerName(void);
extern NameBuffer *FUN_002bd1fc(void);
extern int FUN_002bf818(void *a);
extern void nameEntryCopyEditedName(NameTask *task, NameBuffer *name);
extern int FUN_00296ee0(NameTask *task, int arg);

/* Clears the name buffer selected by the form's name kind and applies it to the task. */
void nameFormApply(NameTask *task)
{
    NameBuffer *name;

    if (FUN_002bf818(task->unk794) == 0) {
        return;
    }
    if (task->form.nameKind == 0 || task->form.nameKind == -1) {
        name = FUN_002bd1fc();
        name->words[0] = 0;
        name->words[1] = 0;
        name->words[2] = 0;
        name->words[3] = 0;
        name->tail = 0;
        nameEntryCopyEditedName(task, name);
    }
    if (task->form.nameKind == 1) {
        name = gameDataGetPlayerName();
        name->words[0] = 0;
        name->words[1] = 0;
        name->words[2] = 0;
        name->words[3] = 0;
        name->tail = 0;
        nameEntryCopyEditedName(task, name);
    }
    if (task->form.nameKind == 2) {
        name = gameDataGetSecondName();
        name->words[0] = 0;
        name->words[1] = 0;
        name->words[2] = 0;
        name->words[3] = 0;
        name->tail = 0;
        nameEntryCopyEditedName(task, name);
    }
    FUN_00296ee0(task, 8);
}

} /* extern "C" */
