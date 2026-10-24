/* NON_MATCHING: the literal pool order differs: retail pools DAT_0059ee30 before g_effectEditor. */
#include "common.h"
#include "shard/W6_W6Match2_EffectEditor.h"

struct Effect003c3b7c {
    /* 0x00 */ u8 unk00[0xe0];
    /* 0xe0 */ u8 body[0x10];
};

struct Object003c3b7c {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ Effect003c3b7c *effect;
};

/* The editor's texture slot (0x30). */
struct EditorTexture003c3b7c {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ void *texture;
};

extern "C" {

extern u8 DAT_0059ee30[];

void FUN_0035ba3c(void *body, void *texture, const void *table);

/* Forwards the effect's body (0xe0) with the editor's texture and DAT_0059ee30. */
void FUN_003c3b7c(Object003c3b7c *object)
{
    FUN_0035ba3c(object->effect->body, reinterpret_cast<EditorTexture003c3b7c &>(g_effectEditor).texture, DAT_0059ee30);
}

} /* extern "C" */
