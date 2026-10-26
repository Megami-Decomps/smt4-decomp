#include "common.h"
#include "code/Code0023_Smt4.h"

struct ContentTexture {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ void *texture;
    /* 0x1c */ s32 sharedId;
};

struct ContentHeader {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 textureCount;
};

class ContentHandle {
public:
    virtual void unk00() = 0;
    virtual void release() = 0;
};

struct TextureContent {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 fileId;
    /* 0x08 */ s32 category;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ ContentHeader *header;
    /* 0x14 */ ContentTexture *textures;
    /* 0x18 */ void *unk18;
    /* 0x1c */ void *unk1c;
    /* 0x20 */ void *unk20;
    /* 0x24 */ void *unk24;
    /* 0x28 */ void *image;
    /* 0x2c */ void *unk2c;
    /* 0x30 */ void *unk30;
    /* 0x34 */ u8 unk34[8];
    /* 0x3c */ u8 loaded;
    /* 0x3d */ u8 unk3d;
    /* 0x3e */ u8 unk3e[6];
    /* 0x44 */ ContentHandle *handle;
};

extern "C" {
extern void *g_aocSystem;
void asdTMTexTableReleaseNode(s32 category, s32 id);
void FUN_002a60cc(void *system, s32 category, s32 id);
void asdTextureRelease(void *);
void asdMemFree(void *);
void FUN_00389f54(void *system, u32 fileId);
void FUN_0038a134(void *system, u32 fileId);

// Release shared or private textures before freeing the containing file.
void textureContentRelease(TextureContent *content)
{
    if (content->textures) {
        for (s32 i = 0; i < content->header->textureCount; ++i) {
            ContentTexture *entry = &content->textures[i];
            if (entry->texture) {
                if (entry->sharedId >= 0) {
                    asdTMTexTableReleaseNode(content->category, entry->sharedId);
                    FUN_002a60cc(g_aocSystem, content->category, entry->sharedId);
                } else {
                    asdTextureRelease(entry->texture);
                }
                entry->texture = NULL;
                entry->sharedId = -1;
            }
        }
    }
    if (content->image) {
        if (content->category == 12)
            FUN_0038a134(g_aocSystem, content->fileId);
        else
            FUN_00389f54(g_aocSystem, content->fileId);
        asdMemFree(content->image);
        content->header = NULL;
        content->textures = NULL;
        content->unk18 = NULL;
        content->unk1c = NULL;
        content->unk20 = NULL;
        content->unk24 = NULL;
        content->image = NULL;
        content->loaded = 0;
        content->unk3d = 0;
    }
    if (content->unk2c) {
        asdMemFree(content->unk2c);
        content->unk2c = NULL;
    }
    if (content->unk30) {
        asdMemFree(content->unk30);
        content->unk30 = NULL;
    }
    if (content->handle) {
        content->handle->release();
        content->handle = NULL;
    }
    content->fileId = 0;
}
}
