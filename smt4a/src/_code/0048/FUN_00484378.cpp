/* NON_MATCHING: readable rewrite of the name-entry confirm step; retail tail-calls sysPlaySe/stateSetterEnterState with a 20-byte frame, reads the target through a +0x200 base register and uses sxtb/uxtab for the signed character index, while the build uses a 24-byte frame, plain calls and a pointer-induction loop. */
#include "common.h"

struct NameEntryMenu;
struct NameBuffer {
    u32 w0;
    u32 w1;
    u32 w2;
    u32 w3;
    u16 w4;
};

// Character conversion tables used when a typed name is confirmed: each character that appears in a source list is
// replaced by the matching entry of its mapped list.
struct NameConversionTables {
    /* 0x000 */ s16 firstSource[0x77];
    /* 0x0EE */ u16 firstMapped[0x77];
    /* 0x1DC */ s16 secondSource[0x2a];
    /* 0x230 */ u16 secondMapped[0x2a];
};

// The name-entry menu (observed fields).
struct NameInputView {
    u8 unk000[0xb0];
    s8 text[18];                 // 0x0B0: the typed name, nine two-byte characters
    u8 unk0c2[0x19f];
    s8 target;                   // 0x261: which name is being edited
    u8 unk262[10];
    u32 script;                  // 0x26C
    u8 confirming;               // 0x270
    u8 unk271[0x13b];
    u8 sprite[0x20];             // 0x3AC
    u8 unk3cc[0x1a2];
    s8 confirmed[1];             // 0x56E: the name as stored once confirmed

    s16 characterAt(s8 index) const
    {
        if (index < 0) {
            return (s16)0x8140;
        }
        u16 high = (u8)text[index * 2];
        high <<= 8;
        return (s16)(high + (u8)text[index * 2 + 1]);
    }
};

extern "C" {
extern NameConversionTables DAT_00532c10;

void sysPlaySe(s32 id);
void FUN_00183e58(void);
void uiSpriteSetImageKeyframe(u8 *sprite, s32 frame, s32 flag);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void FUN_003180c4(s32 id, NameBuffer *name);
s32 *logFormatBuffer(NameBuffer *name, s8 *destination, s32 mode);
void nameEntryCopyEditedName(NameEntryMenu *menu, NameBuffer *name);
void stateSetterEnterState(NameEntryMenu *menu, s32 state);
s32 scrRunOpcodesStub(u32 script);
s32 messageMainIsIdle(void);
s32 messageGetChoiceResult(void);
s32 convertToBufferAndStore(NameBuffer *name, s8 *destination);

// Steps the name-entry confirmation: first asks the question, then, on the answer, either goes back to editing (state 2)
// or converts the typed name and checks its length before accepting it (state 6) or rejecting it (state 7).
void FUN_00484378(NameInputView *menu)
{
    NameBuffer storage;
    NameBuffer *name = &storage;
    u8 *buffer = reinterpret_cast<u8 *>(&storage);
    if (menu->confirming == 0) {
        if (messageMainIsIdle() != 0) {
            nameEntryCopyEditedName(reinterpret_cast<NameEntryMenu *>(menu), name);
            FUN_003180c4(0x32, name);
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
        stateSetterEnterState(reinterpret_cast<NameEntryMenu *>(menu), 2);
        sysPlaySe(0x97);
        return;
    }
    uiSpriteSetImageKeyframe(menu->sprite, 0, 1);
    if (menu->target != 0 && menu->target != 1 && menu->target != 4) {
        FUN_00183e58();
        stateSetterEnterState(reinterpret_cast<NameEntryMenu *>(menu), 7);
        return;
    }
    nameEntryCopyEditedName(reinterpret_cast<NameEntryMenu *>(menu), name);
    for (s32 index = 0; index < 9; index++) {
        s16 character = menu->characterAt((s8)index);
        u16 converted;
        bool found = false;
        for (s32 entry = 0; entry < 0x77; entry++) {
            if (DAT_00532c10.firstSource[entry] == character) {
                converted = DAT_00532c10.firstMapped[entry];
                found = true;
                break;
            }
        }
        if (!found) {
            for (s32 entry = 0; entry < 0x2a; entry++) {
                if (DAT_00532c10.secondSource[entry] == character) {
                    converted = DAT_00532c10.secondMapped[entry];
                    found = true;
                    break;
                }
            }
        }
        if (found) {
            buffer[index * 2] = (u8)(converted >> 8);
            buffer[index * 2 + 1] = (u8)converted;
        }
    }
    s32 *status = logFormatBuffer(name, menu->confirmed, 1);
    s32 length = convertToBufferAndStore(name, menu->confirmed);
    if (*status == 0 && length < 6) {
        FUN_00183e58();
        stateSetterEnterState(reinterpret_cast<NameEntryMenu *>(menu), 7);
        return;
    }
    stateSetterEnterState(reinterpret_cast<NameEntryMenu *>(menu), 6);
    scrScriptProcessStartEntry(menu->script, 4);
}
}
