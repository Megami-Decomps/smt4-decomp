/* NON_MATCHING: same logic; retail hoists the table base before the use-count test and reuses the use-count register as the loop index (saves only r4), while armcc here allocates r4-r6. */
#include "common.h"

/* A loaded texture content object (deleted through its virtual destructor). */
class TextureContent {
public:
    virtual ~TextureContent();
    u32 id;
};

/* A reference to a texture content by id, with a use count at 0x40. */
struct TextureRef {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
    /* 0x08 */ u8 unk08[0x38];
    /* 0x40 */ s32 useCount;
};

struct TextureContentTable {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ TextureContent *entries[16];
};

extern "C" {

extern TextureContentTable DAT_0047e508;
void textureContentRelease(void);

/* Drops one use of a texture content; on the last use it releases and deletes the registered object. */
void FUN_00294f64(TextureRef *ref)
{
    if (ref->useCount == 1) {
        u32 id = ref->id;
        for (s32 i = 0; i < 16; i++) {
            TextureContent *content = DAT_0047e508.entries[i];
            if (content != NULL && content->id == id) {
                textureContentRelease();
                if (DAT_0047e508.entries[i] != NULL) {
                    delete DAT_0047e508.entries[i];
                }
                DAT_0047e508.entries[i] = NULL;
                return;
            }
        }
    } else {
        ref->useCount--;
    }
}

} /* extern "C" */
