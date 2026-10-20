/* NON_MATCHING: the color-key global is loaded through r0 after `mov r4, r0` where retail loads it through r1 first. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef struct TextSystem {
    u32 unk00[2];
    u32 colorKey; /* 0x08 */
} TextSystem;

extern TextSystem g_asdTextDefaults;

typedef struct SpriteHandle {
    u8 unk00[0x34];
    u32 flags;       /* 0x34 */
    u32 colorKey;    /* 0x38 */
    u8 unk3c[0x14];
    s32 unk50;       /* 0x50 */
    u8 unk54[0x48];
    s32 unk9c;       /* 0x9c */
    u8 unka0[0xc];
    u8 visible;      /* 0xac */
    u8 unkad[3];
    u32 unkb0;       /* 0xb0 */
    u8 unkb4[8];     /* 0xb4 */
} SpriteHandle;

extern SpriteHandle *FUN_00163318(u32 size, u32 type);
extern void rt_aeabi_memclr(void *block, u32 size);

/* Creates a sprite handle of the given type with its default state. */
SpriteHandle *spriteHandleCreate(u32 type)
{
    SpriteHandle *sprite;

    asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Text\\AsdText.cpp", 144);
    sprite = FUN_00163318(sizeof(SpriteHandle), type);
    sprite->flags = 0x402;
    sprite->visible = 0;
    sprite->unk50 = -1;
    sprite->unkb0 = 0;
    sprite->unk9c = -1;
    sprite->colorKey = g_asdTextDefaults.colorKey & ~0xffu;
    rt_aeabi_memclr(sprite->unkb4, 8);
    return sprite;
}

} /* extern "C" */
