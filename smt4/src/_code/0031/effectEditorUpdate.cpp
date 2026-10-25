/* NON_MATCHING: register allocation only: retail loads the state into r0 (so it reloads g_effectEditor.object for the free) and sums the offsets in r0; the build keeps state in r1 / the offset in r2. */
#include "common.h"
#include "shard/W6_W6Match2_GeometryResources.h"

extern "C" {

typedef struct EditorObject0031ba38 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 state;
} EditorObject0031ba38;

typedef struct EffectEditor0031ba38 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 baseOffset;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 source;
    /* 0x18 */ u8 unk18[0x2c];
    /* 0x44 */ EditorObject0031ba38 *object;
} EffectEditor0031ba38;

typedef struct EditorOffsets0031ba38 {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ s32 extraOffset;
} EditorOffsets0031ba38;

void FUN_002f2aa8(EditorObject0031ba38 *object);
s32 linkedFindItemByIndex(u32 source, s32 offset);
void namedObjectFormatName(EditorObject0031ba38 *object, s32 offset);

extern EffectEditor0031ba38 g_effectEditor; /* 0x44ea80 */
extern EditorOffsets0031ba38 DAT_0044f858;  /* 0x44f858 */

/* Updates the effect editor's object and returns 0x200001 while it keeps running; frees it and returns 0 once it ended (state 1 or 2). */
u32 effectEditorUpdate(void)
{
    s32 data;

    FUN_002f2aa8(g_effectEditor.object);
    data = linkedFindItemByIndex(g_effectEditor.source, g_effectEditor.baseOffset + DAT_0044f858.extraOffset);
    s32 nameOffset = data + 0x9c;
    namedObjectFormatName(g_effectEditor.object, nameOffset);
    if (g_effectEditor.object->state == 2 || g_effectEditor.object->state == 1) {
        asdMemoryFreeLocked(g_effectEditor.object);
        g_effectEditor.object = NULL;
        return 0;
    }
    return 0x200001;
}

} /* extern "C" */
