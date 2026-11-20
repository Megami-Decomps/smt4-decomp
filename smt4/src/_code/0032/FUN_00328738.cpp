#include "ui/UiSpriteApi.h"
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

extern u8 g_effectEditorObjectTextureTable[];

void effectEditorBindTexture(void *body, void *texture, const void *table);

/* Forwards the effect's body (0x98) with the editor's texture and g_effectEditorObjectTextureTable. */
void FUN_00328738(Object00328738 *object)
{
    u8 *table = g_effectEditorObjectTextureTable;
    effectEditorBindTexture(object->effect->body, reinterpret_cast<EditorTexture00328738 &>(g_effectEditor).texture, table);
}

} /* extern "C" */
