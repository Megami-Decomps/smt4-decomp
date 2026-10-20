#include "common.h"

extern "C" {

typedef struct Traverser {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 unk14[0x8];
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u8 unk24[0x8];
    /* 0x2C */ u32 unk2C;
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u8 unk34[0x8];
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u8 unk44[0x8];
    /* 0x4C */ u32 unk4C;
    /* 0x50 */ u32 unk50;
    /* 0x54 */ u8 unk54[0x8];
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u32 unk60;
    /* 0x64 */ u8 unk64[0x8];
    /* 0x6C */ u32 unk6C;
    /* 0x70 */ u32 unk70;
    /* 0x74 */ u8 unk74[0x8];
    /* 0x7C */ u32 unk7C;
    /* 0x80 */ u32 unk80;
    /* 0x84 */ u8 unk84[0x8];
    /* 0x8C */ u32 unk8C;
    /* 0x90 */ u32 unk90;
    /* 0x94 */ u8 unk94[0x8];
    /* 0x9C */ u32 unk9C;
    /* 0xA0 */ u32 unkA0;
    /* 0xA4 */ u8 unkA4[0x8];
    /* 0xAC */ u32 unkAC;
    /* 0xB0 */ u32 unkB0;
    /* 0xB4 */ u8 unkB4[0x8];
    /* 0xBC */ u32 unkBC;
    /* 0xC0 */ u32 unkC0;
    /* 0xC4 */ u8 unkC4[0x8];
    /* 0xCC */ u32 unkCC;
    /* 0xD0 */ u32 unkD0;
    /* 0xD4 */ u8 unkD4[0x8];
    /* 0xDC */ u32 unkDC;
    /* 0xE0 */ u32 unkE0;
    /* 0xE4 */ u8 unkE4[0x8];
    /* 0xEC */ u32 unkEC;
    /* 0xF0 */ u32 unkF0;
} Traverser;

typedef struct Context {
    /* 0x0 */ u8 unk0[8];
    /* 0x8 */ Traverser *traverser;
} Context;

/* Starts a traversal: every saved slot (+0x10, +0x20, ...) is reset from its initial value. */
void nw_gfx_SceneTraverser_Begin(Context *context, Traverser *traverser)
{
    context->traverser = traverser;
    traverser->unk10 = traverser->unk0C;
    traverser->unk20 = traverser->unk1C;
    traverser->unk30 = traverser->unk2C;
    traverser->unk40 = traverser->unk3C;
    traverser->unk70 = traverser->unk6C;
    traverser->unk80 = traverser->unk7C;
    traverser->unk90 = traverser->unk8C;
    traverser->unkA0 = traverser->unk9C;
    traverser->unkB0 = traverser->unkAC;
    traverser->unk50 = traverser->unk4C;
    traverser->unk60 = traverser->unk5C;
    traverser->unkC0 = traverser->unkBC;
    traverser->unkD0 = traverser->unkCC;
    traverser->unkE0 = traverser->unkDC;
    traverser->unkF0 = traverser->unkEC;
}

} /* extern "C" */
