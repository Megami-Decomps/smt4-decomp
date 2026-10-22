/* NON_MATCHING: effect-entry store scheduling differs despite the matching debug file and line. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct MenuEffectOwnerView {
    u32 id;
    u32 unk04;
    u32 value;
};

extern "C" {
void *memAlloc(u32, u32, u32, u32, u32, u32);

// Build the menu effect record belonging to an owner.
void *FUN_0030ed8c(MenuEffectOwnerView *owner)
{
    // This 0x4c-byte variant has fields beyond the shared 0x38-byte menu node.
    struct MenuEffectView {
        u32 kind;
        u32 state;
        u32 unk08;
        u32 ownerId;
        u32 unk10;
        u32 unk14;
        u32 unk18;
        u32 unk1c;
        u32 unk20;
        u32 defaultWords[2];
        u32 value;
        u32 previousValue;
        u32 unk34;
        u32 unk38;
        u32 unk3c;
        u32 unk40;
        u32 unk44;
        MenuEffectOwnerView *owner;
    };
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\AsdSDK\\Source\\Gfx\\Effect\\effMenu.cpp", 2816);
    MenuEffectView *effect = static_cast<MenuEffectView *>(memAlloc(0x10000, 0x100, 0, sizeof(MenuEffectView), 0x10, 1));
    effect->kind = 8;
    effect->unk08 = 0;
    effect->state = 8;
    effect->ownerId = owner->id;
    effect->unk10 = 0;
    effect->unk14 = 0;
    effect->unk18 = 0;
    effect->unk1c = 0;
    effect->unk20 = 0;
    effect->defaultWords[0] = 0xFFFFC040;
    effect->defaultWords[1] = 0xC0000000;
    effect->value = owner->value;
    effect->unk34 = 0;
    effect->previousValue = owner->value;
    effect->unk38 = 0;
    effect->unk40 = 0;
    effect->unk3c = 0;
    effect->owner = owner;
    return effect;
}
}
