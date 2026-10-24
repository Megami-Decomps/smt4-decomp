/* NON_MATCHING: readable rebuild of the name-entry state setter's constructor (handler table of function/adjust pairs, the name source by mode, the sprite and param packet setup); armcc here orders the handler-table stores and the unaligned 18-byte name copies differently. */
#include "common.h"

/* A name (18 bytes). */
struct PlayerNameBuffer {
    u8 bytes[0x12];
};

/* One state handler: a function and its this-adjustment. */
struct StateHandler {
    void (*function)(void *setter);
    s32 adjust;
};

extern "C" {
extern const u8 DAT_00532e94[];
extern const u8 DAT_00532eac[];
extern const u8 DAT_00532ed0[];
extern u16 DAT_00588108;

void rect48Init(void *setter);
void FUN_004852a0(void *setter);
void FUN_00483d34(void *setter);
void FUN_004850e0(void *setter);
void FUN_00484378(void *setter);
void FUN_00485308(void *setter);
void jobAt26CWaitDone(void *setter);
void nameEntryMenuClearTarget(void *setter);
void stateSetterStart9(void *setter);
void FUN_00485ab8(void *setter);
void FUN_004850c0(void *setter);
void FUN_0048505c(void *setter);

void asdTMTexTableLoadSprites(s32 table);
void FUN_0014afd0(s32 a, s32 b);
void FUN_0014e188(u8 *sprite, s32 table, s32 a, u8 *packet, s32 b);
void paramsClearPacket(u8 *packet);
void paramsInit(u8 *packet, const u8 *a, s32 aSize, const u8 *b, s32 bSize, s32 c, s32 d, s32 e, s32 f, const u8 *g,
                s32 gSize);
void uiSpriteSelectAnim(u8 *sprite, s32 anim);
void uiSpriteSetKeyframe(u8 *sprite, s32 frame);
void uiSpriteSetImageKeyframe(u8 *sprite, s32 frame);
void FUN_00203b40(u8 *sprites, s32 a, s32 b, s32 c, s32 d, s32 e);
u32 asdLoadFileSyncDefault(const char *path);
u32 FUN_00275bc8(void);
void campButtonHelpAcquire(void);
PlayerNameBuffer *gameGetPlayerName(void);
PlayerNameBuffer *gameDataGetPlayerName(void);
PlayerNameBuffer *gameBlockGetArea221AA(void);
PlayerNameBuffer *FUN_002840ac(void);
u16 ifTouchGetButtonHelpValue(void);

/* Builds the name-entry state setter: installs its state handlers, loads the entry name for the
 * `source` (0/-1 the player, 1 the saved player, 2 an area block, 4 another), then its sprites,
 * resources and button help. */
void stateSetterConstruct(u8 *setter, u8 source)
{
    StateHandler *handlers = (StateHandler *)(setter + 0xD4);
    handlers[0].function = rect48Init;
    handlers[0].adjust = 0;
    handlers[1].function = FUN_004852a0;
    handlers[1].adjust = 0;
    handlers[2].function = FUN_00483d34;
    handlers[2].adjust = 0;
    handlers[3].function = FUN_004850e0;
    handlers[3].adjust = 0;
    handlers[4].function = FUN_00484378;
    handlers[4].adjust = 0;
    handlers[5].function = FUN_00485308;
    handlers[5].adjust = 0;
    handlers[6].function = jobAt26CWaitDone;
    handlers[6].adjust = 0;
    handlers[7].function = nameEntryMenuClearTarget;
    handlers[7].adjust = 0;
    handlers[8].function = stateSetterStart9;
    handlers[8].adjust = 0;
    handlers[9].function = FUN_00485ab8;
    handlers[9].adjust = 0;
    handlers[10].function = FUN_004850c0;
    handlers[10].adjust = 0;
    handlers[11].function = FUN_0048505c;
    handlers[11].adjust = 0;
    setter[0x261] = source;
    setter[0] = 0;
    setter[1] = 0;
    *(u32 *)(setter + 4) = 0;
    *(u32 *)(setter + 0x10) = 0;
    *(u32 *)(setter + 0x14) = 0;
    setter[0x20] = 0;
    setter[0x28] = 0;
    setter[0x29] = 0;
    setter[0x22] = 0;
    *(u16 *)(setter + 0x2C) = 0;
    *(u16 *)(setter + 0x2E) = 0;
    setter[0x2A] = 0;
    setter[0x2B] = 0;
    *(u32 *)(setter + 0xA4) = 0;
    *(u32 *)(setter + 0xA8) = 0;
    *(u32 *)(setter + 0xAC) = 0;
    setter[0x562] = 0;
    PlayerNameBuffer *name = (PlayerNameBuffer *)(setter + 0xB0);
    if (setter[0x261] == 0 || setter[0x261] == 0xFF)
        *name = *gameGetPlayerName();
    if (setter[0x261] == 1)
        *name = *gameDataGetPlayerName();
    if (setter[0x261] == 2)
        *name = *gameBlockGetArea221AA();
    if (setter[0x261] == 4)
        *name = *FUN_002840ac();
    *(PlayerNameBuffer *)(setter + 0xC2) = *name;
    asdTMTexTableLoadSprites(0x23);
    FUN_0014afd0(0x23, 0);
    FUN_00203b40(setter + 0x198, 0x69, 7, 0xF, 1, 1);
    FUN_00203b40(setter + 0x1FC, 4, 1, 4, 1, 1);
    *(u32 *)(setter + 0x264) = asdLoadFileSyncDefault("name/name.mbm");
    *(u32 *)(setter + 0x268) = asdLoadFileSyncDefault("name/name.bf");
    *(u32 *)(setter + 0x26C) = FUN_00275bc8();
    u8 *packet = setter + 0x274;
    paramsClearPacket(packet);
    paramsInit(packet, DAT_00532e94, 0x18, DAT_00532eac, 0x24, 0, 0, 0, 0, DAT_00532ed0, 0x70);
    FUN_0014e188(setter + 0x294, 0x23, 0, packet, 1);
    uiSpriteSelectAnim(setter + 0x294, 0);
    FUN_0014e188(setter + 0x320, 0x23, 0, packet, 1);
    uiSpriteSetKeyframe(setter + 0x320, 0);
    FUN_0014e188(setter + 0x3AC, 0x23, 0, packet, 1);
    uiSpriteSetImageKeyframe(setter + 0x3AC, 0);
    campButtonHelpAcquire();
    DAT_00588108 = ifTouchGetButtonHelpValue();
    *(u16 *)(setter + 0x55E) = 0x97;
}

} /* extern "C" */
