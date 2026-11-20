#include "ui/UiSpriteApi.h"
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

extern u8 g_effectEditorObjectTextureTable[];

void effectEditorBindTexture(void *body, void *texture, const void *table);

/* Forwards the effect's body (0xe0) with the editor's texture and g_effectEditorObjectTextureTable. */
void effectEditorBindObjectTexture(Object00323df8 *object)
{
    u8 *table = g_effectEditorObjectTextureTable;
    effectEditorBindTexture(object->effect->body, reinterpret_cast<EditorTexture00323df8 &>(g_effectEditor).texture, table);
}

} /* extern "C" */
