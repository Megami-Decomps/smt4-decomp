/* NON_MATCHING: the name buffers are block-scoped so the preset and state calls tail-call as in retail, and the
 * characters come through nameFormGetCharacter; retail hoists the four table bases and &name (r5-r9, seven registers
 * saved), tests the name kind with one cmpne and keeps the unlocked preset choice after the pool (148 rows). */
#include "common.h"
#include <stddef.h>
#include "name/nameMain.h"
#include "name/NameFormText.h"

/* A name as the engine stores it: nine two-byte characters and a terminator. */
struct NameBuffer {
    /* 0x00 */ u32 words[4];
    /* 0x10 */ u16 tail;
};

struct NameForm {
    /* 0x00 */ u8 unk00[0x49];
    /* 0x49 */ s8 nameKind;
    /* 0x4A */ u8 unk4A[0xA];
};

/* The name-entry task as this function sees it: the form's text (name/NameFormText.h) leads it. */
struct NameTask {
    /* 0x000 */ u8 unk000[0x10];
    union {
        /* 0x010 */ NameFormTextFields text; /* the edited name, its characters at 0xB0 */
        struct {
            /* 0x010 */ u8 unk010[0x10];
            /* 0x020 */ s8 mode;
            /* 0x021 */ u8 unk021[8];
            /* 0x029 */ u8 locked;
        } entry;
    };
    /* 0x0D4 */ u8 unk0D4[0x52C];
    /* 0x600 */ NameForm form;
    /* 0x654 */ u32 script;
    /* 0x658 */ u8 scriptStarted;
    /* 0x659 */ u8 unk659[0x13B];
    /* 0x794 */ u8 sprite[0x1BA];
    /* 0x94E */ char confirmText[1];
};
typedef char NameTaskLayout[offsetof(NameTask, text.characters) == 0xB0 && offsetof(NameTask, entry.locked) == 0x29 &&
    offsetof(NameTask, form) == 0x600 && offsetof(NameTask, sprite) == 0x794 && offsetof(NameTask, confirmText) == 0x94E ? 1 : -1];

/* Character conversion tables: a lookup from the entered character to its stored form, in two ranges. */
struct NameCharTables {
    /* 0x000 */ s16 keysA[0x104];
    /* 0x208 */ u16 valuesA[0x104];
    /* 0x410 */ s16 keysB[0x54];
    /* 0x4B8 */ u16 valuesB[0x54];
};

extern "C" {

extern const NameCharTables DAT_00405070;

s32 scrRunOpcodesStub(u32 script);
s32 messageMainGetChoiceResult(void);
s32 sys43e188GetState(void);
void messageOwnerSetState(NameTask *task, s32 state);
void buttonHelpSetPreset(s32 preset);
void buttonHelpResetSlots(void);
void uiSpriteSetImageKeyframe(void *sprite, s32 keyframe, s32 frame);
void nameEntryCopyEditedName(NameTask *task, NameBuffer *name);
void textEncodeFontSlot(s32 slot, NameBuffer *name);
void scrScriptProcessStartEntry(u32 script, s32 entry);
NameBuffer *logFormatBuffer(NameBuffer *name, const char *text, s32 mode);

/* One step of the name-entry task: starts the entry script once the system is ready, then waits for it to ask for
 * confirmation and validates the converted name. */
void FUN_00397b40(NameTask *task)
{
    NameForm *form = &task->form;

    if (task->scriptStarted == 0) {
        if (sys43e188GetState() != 0) {
            NameBuffer name;
            nameEntryCopyEditedName(task, &name);
            textEncodeFontSlot(0x32, &name);
            scrScriptProcessStartEntry(task->script, 1);
            task->scriptStarted = 1;
            buttonHelpSetPreset(0x9A);
        }
        return;
    }
    if (scrRunOpcodesStub(task->script) != 2) {
        return;
    }
    if (messageMainGetChoiceResult() != 0) {
        messageOwnerSetState(task, 2);
        if (task->entry.locked != 0) {
            buttonHelpSetPreset(0x97);
            return;
        }
        if (task->entry.mode == 2 || task->entry.mode == 6) {
            buttonHelpSetPreset(0x96);
            return;
        }
        buttonHelpSetPreset(0x95);
        return;
    }
    uiSpriteSetImageKeyframe(task->sprite, 0, 1);
    if (form->nameKind == 0 || form->nameKind == 1) {
        NameBuffer name;
        nameEntryCopyEditedName(task, &name);
        for (s32 i = 0; i <= 8; i++) {
            s16 character = nameFormGetCharacter(task, (s8)i);
            s32 found = 0;
            for (s32 j = 0; j < 0x104; j++) {
                if (DAT_00405070.keysA[j] == character) {
                    ((u8 *)&name)[i * 2] = (u8)(DAT_00405070.valuesA[j] >> 8);
                    ((u8 *)&name)[i * 2 + 1] = (u8)DAT_00405070.valuesA[j];
                    found = 1;
                    break;
                }
            }
            if (!found) {
                for (s32 j = 0; j < 0x54; j++) {
                    if (DAT_00405070.keysB[j] == character) {
                        ((u8 *)&name)[i * 2] = (u8)(DAT_00405070.valuesB[j] >> 8);
                        ((u8 *)&name)[i * 2 + 1] = (u8)DAT_00405070.valuesB[j];
                        break;
                    }
                }
            }
        }
        NameBuffer *result = logFormatBuffer(&name, task->confirmText, 1);
        s32 lookup = convertToBufferAndStore(reinterpret_cast<const char *>(&name), reinterpret_cast<u16 *>(task->confirmText));
        if (result->words[0] == 0 && lookup < 6) {
            buttonHelpResetSlots();
            messageOwnerSetState(task, 7);
        } else {
            messageOwnerSetState(task, 6);
            scrScriptProcessStartEntry(task->script, 4);
        }
        return;
    }
    buttonHelpResetSlots();
    messageOwnerSetState(task, 7);
}

} /* extern "C" */
