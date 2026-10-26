/* NON_MATCHING: row layout and the full seven-argument FUN_0032b4f8 call now match retail; retail keeps 0x41 and 2 in r7/r9 (computing 0x42/0x43 as r7+1/+2 at each use) and loads all five row fields before the kind switch, which armcc here does not. */
#include "common.h"
#include "shard/TextureDrawCall.h"
#include "gfx/StereoParallax.h"
#include "code/Code0032.h"

extern "C" {

/* One row of the list: rows sit 0x10 apart, and a row's flag bytes (0x10..0x13) are stored in the
 * first word of the following row. */
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

/* The list work block: five rows, the selection count and the mark extent. */
typedef struct ListWork {
    /* 0x00 */ u8 rows[0x54];
    /* 0x54 */ s32 count;
    /* 0x58 */ f32 extentX;
    /* 0x5C */ f32 extentY;
} ListWork;

extern void *g_titleScene;


/* Draws the five rows of the list: each shown row sets its tag, picks its icon id from its kind
 * and flags, and draws the icon plus the extra marks some states carry. */
void FUN_00349214(ListWork *work)
{
    s32 parallax = (s32)renderCtxCalculateStereoParallax(g_titleScene, 0.7f);

    for (s32 i = 0; i < 5; i++) {
        ListRow *row = (ListRow *)&work->rows[i * 0x10];

        if (row->shown == 0) {
            continue;
        }
        s32 tag = row->tag;
        s32 state;

        if (tag != 0 || (u8)row->subTag != 0) {
            FUN_0032b4f8(0x41, tag, row->subTag, row->x + (f32)parallax, row->y, work->extentX, work->extentY);
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
