#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

struct Effect003cc8d4 {
    /* 0x00 */ u8 unk00[0x98];
    /* 0x98 */ u8 body[0x10];
};

struct Object003cc8d4 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003cc8d4 *effect;
};

/* The editor's texture slot (0x30). */
struct EditorTexture003cc8d4 {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *texture;
};

extern "C" {

extern u8 DAT_0059ee30[];

void FUN_0035ba3c(void *body, void *texture, const void *table);

/* Forwards the effect's body (0x98) with the editor's texture and DAT_0059ee30. */
void FUN_003cc8d4(Object003cc8d4 *object)
{
    u8 *table = DAT_0059ee30;
    FUN_0035ba3c(object->effect->body, reinterpret_cast<EditorTexture003cc8d4 &>(g_effectEditor).texture, table);
}

} /* extern "C" */
