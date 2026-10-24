#include "shard/W6_W6Match2_TextureHolder.h"

/* A texture resource: its image kind is a u16 at 0x1C. */
struct TextureResource {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ u16 kind;
};

/* The effect editor's preview slot: the source resource at 0x1C and the texture made from it at 0x30. */
struct EffectEditorPreview {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ TextureResource *resource;
    /* 0x20 */ u8 unk20[0x10];
    /* 0x30 */ AsdTexture *texture;
};

extern "C" {

extern EffectEditorPreview g_effectEditor;
void *resourceResolveDataPointer(TextureResource *resource);

/* Rebuilds the preview texture from the source resource (image kind 1 or effect kind 9). */
void effectEditorPreviewRebuildTexture(void)
{
    TextureResource *resource;

    if (g_effectEditor.texture != NULL) {
        asdTextureRelease(g_effectEditor.texture);
        g_effectEditor.texture = NULL;
    }
    resource = g_effectEditor.resource;
    if (resource != NULL) {
        void *data = resourceResolveDataPointer(resource);
        if (data != NULL) {
            AsdTexture *texture;

            if (resource->kind == 1) {
                texture = textureCreateFromImage(data);
            } else if (resource->kind == 9) {
                texture = asdEffectTextureCreate(data);
            } else {
                return;
            }
            if (texture != NULL) {
                g_effectEditor.texture = texture;
            }
        }
    }
}

} /* extern "C" */
