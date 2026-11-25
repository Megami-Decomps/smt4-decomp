/* NON_MATCHING: 137 lines (140 vs 141 rows): both tail-calls (sysPlaySe/stateSetterEnterState), both conversion loops, and characterAt uxtab match; retail uses a +0x200 subobject base for target and hoists the four table pointers across the loop. */
#include "common.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "name/nameMain.h"

struct NameEntryMenu;
union NameBuffer {
    u8 bytes[18];
    char chars[18];
    u32 words[4];
};

/* Character conversion tables used when a typed name is confirmed: each character that appears in a source list is
 * replaced by the matching entry of its mapped list. */
struct NameConversionTables {
    /* 0x000 */ s16 firstSource[0x77];
    /* 0x0EE */ u16 firstMapped[0x77];
    /* 0x1DC */ s16 secondSource[0x2a];
    /* 0x230 */ u16 secondMapped[0x2a];
};

/* The name-entry menu (observed fields). */
struct NameInputView {
    u8 unk000[0xb0];
    s8 text[18];                 /* 0x0B0: the typed name, nine two-byte characters */
    u8 unk0c2[0x19f];
    s8 target;                   /* 0x261: which name is being edited */
    u8 unk262[10];
    u32 script;                  /* 0x26C */
    u8 confirming;               /* 0x270 */
    u8 unk271[0x13b];
    u8 sprite[0x20];             /* 0x3AC */
    u8 unk3cc[0x1a2];
    s8 confirmed[1];             /* 0x56E: the name as stored once confirmed */

    s16 characterAt(s8 index) const
    {
        if (index < 0) {
            return (s16)0x8140;
        }
        u8 hi = (u8)text[index * 2];
        s8 lo = text[index * 2 + 1];
        return (s16)((u16)(hi << 8) + (u8)lo);
    }
};

extern "C" {
extern NameConversionTables DAT_00532c10;

void sysPlaySe(s32 id);
void buttonHelpTeardownSlots(void);
void uiSpriteSetImageKeyframe(u8 *sprite, s32 frame, s32 flag);
void scrScriptProcessStartEntry(u32 script, s32 entry);
s32 *logFormatBuffer(NameBuffer *name, s8 *destination, s32 mode);
void nameEntryCopyEditedName(NameEntryMenu *menu, NameBuffer *name);
s32 scrRunOpcodesStub(u32 script);
s32 messageMainIsIdle(void);
s32 messageGetChoiceResult(void);

/* Steps the name-entry confirmation: first asks the question, then, on the answer, either goes back to editing (state 2)
 * or converts the typed name and checks its length before accepting it (state 6) or rejecting it (state 7). */
void FUN_00484378(NameInputView *menu)
{
    if (menu->confirming == 0) {
        if (messageMainIsIdle() != 0) {
            NameBuffer storage;
            nameEntryCopyEditedName((NameEntryMenu *)menu, &storage);
            scrSetStringSlot(0x32, storage.chars);
            scrScriptProcessStartEntry(menu->script, 1);
            menu->confirming = 1;
            sysPlaySe(0x9c);
        }
        return;
    }
    if (scrRunOpcodesStub(menu->script) != 2) {
        return;
    }
    if (messageGetChoiceResult() != 0) {
        stateSetterEnterState(menu, 2);
        sysPlaySe(0x97);
        return;
    }
    uiSpriteSetImageKeyframe(menu->sprite, 0, 1);
    if (menu->target == 0 || menu->target == 1 || menu->target == 4) {
        NameBuffer storage;
        nameEntryCopyEditedName((NameEntryMenu *)menu, &storage);
        for (s32 index = 0; index <= 8; index++) {
            s16 character = menu->characterAt((s8)index);
            bool matched = false;
            for (s32 entry = 0; entry < 0x77; entry++) {
                if (DAT_00532c10.firstSource[entry] == character) {
                    u16 mapped = DAT_00532c10.firstMapped[entry];
                    storage.bytes[index * 2] = (u8)(mapped >> 8);
                    storage.bytes[index * 2 + 1] = (u8)mapped;
                    matched = true;
                    break;
                }
            }
            if (!matched) {
                for (s32 entry = 0; entry < 0x2a; entry++) {
                    if (DAT_00532c10.secondSource[entry] == character) {
                        u16 mapped = DAT_00532c10.secondMapped[entry];
                        storage.bytes[index * 2] = (u8)(mapped >> 8);
                        storage.bytes[index * 2 + 1] = (u8)mapped;
                        break;
                    }
                }
            }
        }
        s32 *status = logFormatBuffer(&storage, menu->confirmed, 1);
        s32 length = convertToBufferAndStore(storage.chars, (u16 *)menu->confirmed);
        if (*status == 0 && length < 6) {
            buttonHelpTeardownSlots();
            stateSetterEnterState(menu, 7);
            return;
        }
        stateSetterEnterState(menu, 6);
        scrScriptProcessStartEntry(menu->script, 4);
    } else {
        buttonHelpTeardownSlots();
        stateSetterEnterState(menu, 7);
    }
}
}
