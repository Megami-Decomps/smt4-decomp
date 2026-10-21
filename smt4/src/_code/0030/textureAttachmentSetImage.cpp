/* NON_MATCHING: retail keeps texture in r0 longer and uses r1 for dimension/store addresses; compiler moves it to r5 early and uses r0. Candidate O2. */
#include "shard/W6_W6Match5_TextureAttachment.h"

extern "C" {
AsdTexture* textureCreateFromImage(void*);
void refCountIncrement(AsdTexture*);
void asdTextureRelease(AsdTexture*);

// Transfer an image-created texture to the attachment and derive its half-size.
void textureAttachmentSetImage(TextureAttachment* attachment, void* image)
{
    AsdTexture* texture = textureCreateFromImage(image);
    f32 width = (f32)texture->dimensions.width;
    f32 height = (f32)texture->dimensions.height;
    attachment->halfWidth = width * 0.5f * 0.0625f;
    attachment->halfHeight = height * 0.5f * 0.0625f;
    attachment->content->model->texture = texture;
    refCountIncrement(texture);
    asdTextureRelease(texture);
}
}
