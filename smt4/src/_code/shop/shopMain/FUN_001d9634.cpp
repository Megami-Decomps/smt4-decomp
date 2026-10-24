/* NON_MATCHING: readable rebuild from asm of the shop main's per-frame phase machine (create the selection scene, wait for its load, tear it down, then request the next sequence); armcc here orders the shop singleton's lazy allocation (inlined twice in retail) and the story-flag screen list differently. */
#include "common.h"

/* The shop main (only the fields read here). */
struct ShopMain {
    /* 0x00 */ u8 unk00[5];
    /* 0x05 */ u8 phase;
    /* 0x06 */ u8 sceneMode;
    /* 0x07 */ u8 unk07;
    /* 0x08 */ s32 screen;
    /* 0x0C */ u8 silent;
    /* 0x0D */ u8 unk0D[3];
    /* 0x10 */ s32 selection;
    /* 0x14 */ u8 requestPending;
    /* 0x15 */ u8 unk15[3];
    /* 0x18 */ u8 *scene;
};

/* A selection scene (first word is its load state; +0x828 its touch interface). */
struct ShopScene {
    u32 loadFlags;
};

/* The shop sequence request block (a lazily allocated 8-byte singleton). */
struct ShopSequence {
    u8 pending;
    u8 unk01[3];
    s32 screen;
};

extern "C" {
extern ShopMain *g_shop;
extern ShopSequence *DAT_0044df80;
extern s32 DAT_0049fc18;

s32 storyFlagRangeAnySet(void);
s32 FUN_00343af0(void);
void FUN_00343b48(void);
void fileSlot17Acquire(s32 *slot);
void fileSlot17Release(s32 *slot);
void *asdOperatorNew(u32 bytes);
u8 *FUN_003a5e30(void *memory, s32 mode, s32 kind, s32 sub);
void shopResetMessageState(u8 *scene);
void sceneRunLoadingPhaseUpdate(void);
void FUN_003a3914(void);
u32 _ZN9Obj55ca08D1Ev(u8 *touch);
void asdMemFreeNonNull(u8 *block);
void textFormatBuffer(u8 *buffer, const char *format, s32 a, s32 b);
void asdSequenceRequest(s32 kind, s32 *arguments, s32 flag);
s32 FUN_00287304(void);
s32 gameStateIsFlagSetAndLarge(void);
void FUN_002a03d8(s32 a, s32 b);
void soundChannelStopAll(s32 channel);

/* The shop sequence singleton, allocated on first use. */
static ShopSequence *shopSequence(void)
{
    if (DAT_0044df80 == NULL) {
        DAT_0044df80 = (ShopSequence *)asdOperatorNew(8);
        if (DAT_0044df80 != NULL) {
            DAT_0044df80->pending = 0;
            DAT_0044df80->screen = 0;
        }
    }
    return DAT_0044df80;
}

/* Steps the shop main: 0 builds the scene (unless a story screen takes over), 1 waits for it to
 * load, 2 destroys it, 3 requests the next sequence. Returns -1 when the shop is done. */
u32 FUN_001d9634(void)
{
    ShopMain *shop = g_shop;
    s32 slot[2];
    switch (shop->phase) {
    case 0: {
        s32 screen;
        if (storyFlagRangeAnySet() != 0 && FUN_00343af0() == 0 && (screen = shop->screen) != 6 && screen != 7 &&
            screen != 9 && screen != 10 && screen != 11 && screen != 12 && screen != 0x69 && screen != 0x6E &&
            screen != 0x6F && screen != 0x70 && screen != 0x71) {
            shop->requestPending = 1;
            FUN_00343b48();
            shop->phase = 3;
            break;
        }
        fileSlot17Acquire(slot);
        s32 sub = shop->screen;
        s32 kind = sub >= 100 ? 1 : 0;
        if (sub >= 100)
            sub -= 100;
        if (shop->sceneMode == 0) {
            void *memory = asdOperatorNew(0x15D6C);
            shop->scene = memory != NULL ? FUN_003a5e30(memory, 0, kind, sub) : NULL;
        } else if (shop->sceneMode == 1) {
            void *memory = asdOperatorNew(0x15D6C);
            u8 *scene = memory != NULL ? FUN_003a5e30(memory, 1, kind, sub) : NULL;
            shop->scene = scene;
            s32 selection = shop->selection;
            if (selection == 8)
                selection = 8;
            *(s32 *)(scene + 0x860) = selection;
        }
        shopResetMessageState(shop->scene);
        shop->phase = 1;
        break;
    }
    case 1:
        if (shop != NULL && shop->scene != NULL) {
            sceneRunLoadingPhaseUpdate();
            if (*(u32 *)shop->scene & 1)
                shop->phase = 2;
        }
        break;
    case 2:
        if (shop->scene != NULL) {
            FUN_003a3914();
            if (shop->scene != NULL)
                asdMemFreeNonNull((u8 *)_ZN9Obj55ca08D1Ev(shop->scene + 0x828) - 0x828);
            fileSlot17Release(slot);
        }
        shop->phase = 3;
        break;
    case 3: {
        if (shop->requestPending != 0) {
            s32 which;
            if (shop->screen >= 100)
                which = shop->screen == 0x6D ? 2 : 4;
            else
                which = shop->screen == 8 ? 1 : 3;
            ShopSequence *sequence = shopSequence();
            sequence->screen = shop->screen;
            shopSequence()->pending = 1;
            s32 arguments[2];
            u8 buffer[24];
            arguments[0] = 0x4B;
            arguments[1] = -1;
            textFormatBuffer(buffer, "e%03d_%02d", 0x4B, which);
            asdSequenceRequest(4, arguments, 0x20);
        } else if (FUN_00287304() != 0) {
            if (gameStateIsFlagSetAndLarge() != 0) {
                s32 arguments[2];
                arguments[0] = DAT_0049fc18 - 200;
                asdSequenceRequest(14, arguments, 4);
            } else {
                asdSequenceRequest(6, NULL, 0);
            }
        } else if (shop->silent != 0) {
            FUN_002a03d8(0, 1);
            FUN_002a03d8(1, 0);
        } else {
            FUN_002a03d8(0, 1);
            FUN_002a03d8(1, 0);
            soundChannelStopAll(15);
        }
        return 0xFFFFFFFF;
    }
    }
    return 0;
}

} /* extern "C" */
