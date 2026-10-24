/* NON_MATCHING: readable rewrite compiles; the last parameter is a float passed on the stack; retail spills the register arguments (push {r0-r3}) and orders the null-safe state checks differently */
#include "common.h"

// Script message box: only the members this open/poll step touches.
struct MessageBox {
    u8 unk00[4];
    u32 object;             // 0x04: ui object the box draws through
    u8 state;               // 0x08: 0 idle, 3 opening, 4 busy, 5 done
    u8 kind;                // 0x09
    u8 unk0a[6];
    u32 color;              // 0x10
    u8 unk14[4];
    u32 result;             // 0x18
    u8 unk1c[4];
    u32 sprite;             // 0x20
    u8 unk24[9];
    u8 withRuby;            // 0x2d
    u8 reopen;              // 0x2e
    u8 unk2f[6];
    u8 hasText;             // 0x35
    u8 lockInput;           // 0x36
    u8 unk37[0x35];
    u8 portrait;            // 0x6c
    u8 mirrored;            // 0x6d
    u8 unk6e[0x1958];
    u16 helpValue;          // 0x19c6
    u8 slotFlags[6];        // 0x19c8
    u16 slotValues[6];      // 0x19ce
    u8 helpPressed;         // 0x19da
};

extern "C" {

extern MessageBox* DAT_0057f58c;
extern MessageBox* DAT_0057f590;
extern MessageBox* DAT_0057f594;
extern MessageBox* DAT_005e2010[];
extern s16 DAT_005e205a[];

s32 objFlagsSetBits(u32 object, s32 bits);
s32 msgBoxFlagsClear(u32 object, s32 bits);
void FUN_00165088(MessageBox* box, s32 kind);
void sysPlaySe(s32 id);
void FUN_00169548(void);
void FUN_00203da4(MessageBox* box, u32 a, s32 b, s32 kind, s32 c, s32 d, f32 e);
void messageSlotSet(s32 slot);
void FUN_0028b350(MessageBox* box, s32 kind);
void scrCommMessageSetMode(u32 mode);
void scrSetResult(u32 value);
s32 engineCleanupIsDone(void);
s32 FUN_00162ea4(void);
u32 FUN_001688c4(u32 object);
u16 ifTouchGetButtonHelpValue(void);
u16 screenGetSlotValue(u32 slot);
u8 screenGetSlotFlag(u32 slot);
s32 buttonHelpGetEntryValue(u32 slot);

// Opens (param_3 == 0) or polls (param_3 != 0) the script message box for `kind`; returns 1 when finished.
u32 FUN_0021bdac(u32 owner, s32 index, s32 poll, s32 kind, s32 lockInput, f32 extra)
{
    MessageBox* normal = DAT_0057f58c;
    MessageBox* box = DAT_0057f590;
    u8 withRuby = 0;
    u8 portrait = (kind == 0xb);
    if (kind != 0xb) {
        if (kind != 0xe) {
            if (kind == 0xf) {
                kind = 0xb;
            } else if (kind != 0x10) {
                box = DAT_0057f594;
                if (kind != 0xc) {
                    if (kind != 0xd) {
                        box = DAT_0057f590;
                        if (kind != 0xb && kind != 0x14) box = DAT_0057f58c;
                    } else {
                        box = DAT_005e2010[index];
                        index = DAT_005e205a[index];
                    }
                }
            } else {
                kind = 0xb;
                withRuby = 1;
                portrait = 0;
            }
        } else {
            withRuby = 1;
            kind = 0xb;
            portrait = 1;
        }
    }
    box->withRuby = withRuby;
    box->portrait = portrait;

    if (poll != 0) {
        s8 state = (box != NULL) ? box->state : 0;
        if (box != NULL && state == 4) return 1;
        if (box == NULL || state == 0) {
            if (box->reopen != 0) {
                box->reopen = 0;
                FUN_00203da4(box, owner, index, kind, 0x1a, 1, 0);
                if (box->hasText == 0) FUN_0028b350(box, box->kind);
                return 0;
            }
            if (kind != 0xb && kind != 0x14) return 1;
            s8 normalState = 0;
            if (normal != NULL) normalState = normal->state;
            if (normal == NULL || normalState == 0) {
                scrSetResult(box->result);
                scrCommMessageSetMode(0xffffffff);
                messageSlotSet(0);
                return 1;
            }
            return 0;
        }
        if (state == 5) {
            scrSetResult(box->result);
            return 1;
        }
        if (FUN_00162ea4() == 0) return 0;
        s8 current = 0;
        if (engineCleanupIsDone() != 0) current = box->state;
        if (engineCleanupIsDone() == 0 || current == 3 || current == 0) return 0;
    } else {
        if (portrait != 0) {
            box->mirrored = 1;
            normal->mirrored = 1;
        }
        box->lockInput = lockInput;
        box->color = (kind == 6) ? 0x5dacfeff : 0xffffffff;
        u32 state = 0;
        if (box != NULL) state = box->state;
        if (box == NULL || state == 0) {
            if (FUN_00162ea4() != 0 && engineCleanupIsDone() != 0) return 1;
            FUN_00203da4(box, owner, index, kind, 0x1a, 1, extra);
            if (kind == 0xb || kind == 0x14) box->sprite = FUN_001688c4(box->object);
            if (box->hasText == 0) FUN_0028b350(box, box->kind);
            if (lockInput != 0) {
                objFlagsSetBits(box->object, 0x20);
                msgBoxFlagsClear(box->object, 0x40);
            }
            box->helpValue = 0;
            for (u32 i = 0; i < 6; i++) {
                box->slotFlags[i] = screenGetSlotFlag(i & 0xff);
                box->slotValues[i] = screenGetSlotValue(i & 0xff);
            }
            if ((box->kind == 7 || box->kind == 8 || box->kind == 9) && buttonHelpGetEntryValue(0) == 5) {
                box->helpPressed = 1;
                box->helpValue = ifTouchGetButtonHelpValue();
                sysPlaySe(0xde);
            }
            if (kind != 0x14) return 0;
            FUN_00169548();
            return 0;
        }
        box->reopen = 1;
    }
    FUN_00165088(box, box->kind);
    box->state = 3;
    box->hasText = 0;
    return 0;
}

} /* extern "C" */
