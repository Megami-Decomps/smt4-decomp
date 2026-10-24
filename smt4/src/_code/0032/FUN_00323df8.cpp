/* NON_MATCHING: the literal pool order differs: retail pools DAT_0044fce0 before g_effectEditor. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

struct Effect00323df8 {
    /* 0x00 */ u8 unk00[0xe0];
    /* 0xe0 */ u8 body[0x10];
};

struct Object00323df8 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect00323df8 *effect;
};

/* The editor's texture slot (0x30). */
struct EditorTexture00323df8 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *texture;
};

extern "C" {

extern u8 DAT_0044fce0[];

void FUN_00242f94(void *body, void *texture, const void *table);

/* Forwards the effect's body (0xe0) with the editor's texture and DAT_0044fce0. */
void FUN_00323df8(Object00323df8 *object)
{
    FUN_00242f94(object->effect->body, reinterpret_cast<EditorTexture00323df8 &>(g_effectEditor).texture, DAT_0044fce0);
}

} /* extern "C" */
