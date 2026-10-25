/* NON_MATCHING: VFP register allocation and the jump-table layout of the state switch differ from retail; the draw selection is the same. */
#include "common.h"
#include "shard/TextureDrawCall.h"

extern "C" {

/* One row of the list (0x10 bytes). */
typedef struct ListRow {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ f32 x;
    /* 0x08 */ f32 y;
    /* 0x0C */ u8 hasKind;
    /* 0x0D */ u8 kind;
    /* 0x0E */ s8 flagA;
    /* 0x0F */ s8 tag;
    /* 0x10 */ s8 subTag;
    /* 0x11 */ s8 flagB;
    /* 0x12 */ s8 flagC;
    /* 0x13 */ s8 shown;
} ListRow;

/* The list work block (only the rows and the selection count). */
typedef struct ListWork {
    /* 0x00 */ ListRow rows[5];
    /* 0x50 */ u8 unk50[4];
    /* 0x54 */ s32 count;
} ListWork;

extern void *g_titleScene;

f32 renderCtxCalculateStereoParallax(void *ctx, f32 depth);
void FUN_0032b4f8(s32 id, s32 tag, s32 subTag);

/* Draws the five rows of the list: each shown row sets its tag, picks its icon id from its kind
 * and flags, and draws the icon plus the extra marks some states carry. */
void FUN_00349214(ListWork *work)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.7f);

    for (s32 i = 0; i < 5; i++) {
        ListRow *row = &work->rows[i];

        if (row->shown == 0) {
            continue;
        }
        s32 tag = row->tag;
        s8 subTag = tag == 0 ? row->subTag : (s8)tag;
        s32 state;

        if (tag != 0 || subTag != 0) {
            FUN_0032b4f8(0x41, tag, row->subTag);
        }
        if (row->hasKind == 0) {
            state = 3;
        } else {
            switch (row->kind) {
            case 0:
            case 5:
                state = row->flagA == 0 ? 0 : 1;
                break;
            case 1:
                state = row->flagC == 0 ? 4 : 8;
                break;
            case 2:
                state = row->flagB == 0 ? 2 : 7;
                break;
            case 3:
                state = 5;
                break;
            case 4:
                state = row->flagC == 0 ? 6 : 9;
                break;
            default:
                state = 0;
                break;
            }
        }
        s32 id = 0x33;

        switch (state) {
        case 1:
            id = 0x34;
            break;
        case 2:
            id = work->count > 0 ? 0x72 : 0x71;
            break;
        case 3:
            id = work->count > 0 ? 0x74 : 0x73;
            break;
        case 4:
        case 5:
        case 6:
            id = work->count > 0 ? 0x76 : 0x75;
            break;
        case 7:
            id = work->count > 0 ? 0x7B : 0x7A;
            break;
        case 8:
            id = work->count > 0 ? 0x7D : 0x7C;
            break;
        }
        FUN_002bf288(2, 0x14, id, (s32)(row->x + (f32)parallax), (s32)row->y, 0x42);
        if (state == 4 || state == 8) {
            FUN_002bf288(2, 0x14, 0x77, (s32)(row->x + (f32)parallax), (s32)row->y, 0x43);
        }
        if (state != 5) {
            if (state == 6 || state == 9) {
                FUN_002bf288(2, 0x14, 0x79, (s32)(row->x + (f32)parallax), (s32)row->y, 0x43);
            }
        } else {
            FUN_002bf288(2, 0x14, 0x78, (s32)(row->x + (f32)parallax), (s32)row->y, 0x43);
        }
    }
}

}
