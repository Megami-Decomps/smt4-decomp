#include "common.h"

extern "C" {

typedef struct ButtonSlot {
    /* 0x0 */ u8 kind;
    /* 0x1 */ u8 unk1[3];
} ButtonSlot;

typedef struct ButtonRecord {
    /* 0x000 */ u8 unk000[0x494];
    /* 0x494 */ ButtonSlot slots[6];
    /* 0x4AC */ s16 buttons[6];     /* button id of slot i; the combo kinds also read the next two */
    /* 0x4B8 */ u8 enabled[6];
} ButtonRecord;

typedef struct ButtonHelpGlobal {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ ButtonRecord *record;
} ButtonHelpGlobal;

extern ButtonHelpGlobal g_buttonHelp;

s32 ifTouchIsInitialSelection(s32 button);

/* Returns 1 if a slot of the given kind (or a combo slot, kinds 8 and 9, that covers it) has a button for which ifTouchIsInitialSelection holds. */
u32 buttonHelpKindIsTriggered(u32 kind)
{
    ButtonRecord *record = g_buttonHelp.record;
    s32 i;

    if (record != NULL) {
        for (i = 0; i < 6; i++) {
            if (record->slots[i].kind == kind && record->enabled[i] != 0 && ifTouchIsInitialSelection(record->buttons[i]) != 0) {
                return 1;
            }
            if (record->slots[i].kind == 8 && kind == 4 && record->enabled[i] != 0) {
                if (ifTouchIsInitialSelection(record->buttons[i]) != 0 || ifTouchIsInitialSelection(record->buttons[i + 1]) != 0 ||
                    ifTouchIsInitialSelection(record->buttons[i + 2]) != 0) {
                    return 1;
                }
            }
            if (record->slots[i].kind == 9 && kind == 3 && record->enabled[i] != 0) {
                if (ifTouchIsInitialSelection(record->buttons[i]) != 0 || ifTouchIsInitialSelection(record->buttons[i + 1]) != 0 ||
                    ifTouchIsInitialSelection(record->buttons[i + 2]) != 0) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

} /* extern "C" */
