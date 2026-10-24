/* NON_MATCHING: the literal pool order differs: retail pools DAT_0044fce0 before g_effectEditor. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

struct Effect00328738 {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u8 body[0x10];
};

struct Object00328738 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect00328738 *effect;
};

/* The editor's texture slot (0x30). */
struct EditorTexture00328738 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *texture;
};

extern "C" {

extern u8 DAT_0044fce0[];

void FUN_00242f94(void *body, void *texture, const void *table);

/* Forwards the effect's body (0x98) with the editor's texture and DAT_0044fce0. */
void FUN_00328738(Object00328738 *object)
{
    FUN_00242f94(object->effect->body, reinterpret_cast<EditorTexture00328738 &>(g_effectEditor).texture, DAT_0044fce0);
}

} /* extern "C" */
