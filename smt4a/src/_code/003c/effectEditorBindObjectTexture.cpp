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

extern u8 g_effectEditorObjectTextureTable[];

void effectEditorBindTexture(void *body, void *texture, const void *table);

/* Forwards the effect's body (0xe0) with the editor's texture and g_effectEditorObjectTextureTable. */
void effectEditorBindObjectTexture(Object003c3b7c *object)
{
    const void *table = g_effectEditorObjectTextureTable;
    effectEditorBindTexture(object->effect->body, reinterpret_cast<EditorTexture003c3b7c &>(g_effectEditor).texture, table);
}

} /* extern "C" */
