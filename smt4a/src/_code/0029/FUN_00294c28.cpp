#include "map/mapDepart.h"

extern "C" {

typedef struct PopupState {
    /* 0x00 */ s32 mode;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ s32 unk08[3];
    /* 0x14 */ s32 handle;
} PopupState;
extern PopupState *g_popupState;

typedef struct Candidate {
    /* 0x000 */ u8 unk000[300];
    /* 0x12C */ u16 id;
} Candidate;

extern GameStateA g_gameState;

void FUN_00152f44(void);
void gameFlagsGetBlock(void);
s32 randRange(u32 id);
Candidate *saveSlotFindSelected(void);
s32 gameFlagIsSet(u32 flag);
s32 FUN_002d8b58(u32 kind, u16 id);

/* Starts the mode-2 popup when nothing is busy, flag 0x49A is set, a candidate exists and flag 0x1A2 is clear or the level is above 0x32; with level above 0x3C and flag 0x10 set it uses id 0xAD instead of the candidate's. */
void FUN_00294c28(void)
{
    PopupState *popup;
    Candidate *candidate;
    s32 value;
    u16 id;

    gameFlagsGetBlock();
    FUN_00152f44();
    if (((((g_gameState.inputBlocked == 0) && (g_popupState->mode == 0)) && (value = gameFlagIsSet(0x49A), value != 0)) &&
         ((candidate = saveSlotFindSelected(), candidate != NULL) &&
          ((value = gameFlagIsSet(0x1A2), value == 0 || (value = randRange(99), value + 1 > 0x32)))))) {
        value = randRange(99);
        if ((value + 1 > 0x3C) && (value = gameFlagIsSet(0x10), value != 0)) {
            id = 0xAD;
        } else {
            id = candidate->id;
        }
        value = FUN_002d8b58(0, id);
        popup = g_popupState;
        g_popupState->handle = value;
        popup->mode = 2;
        popup->unk04 = 0;
    }
}

} /* extern "C" */
