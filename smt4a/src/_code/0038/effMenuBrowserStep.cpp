/* NON_MATCHING: 14 lines in three places, the same instructions row for row (414). Retail loads the wait counter before
 * it sets up the frame and the zero register (the build after); the single step forward loads index and row with one
 * ldm and keeps index + 1 in r1 (the build two ldr, in r2; the 18-step copy matches); and a sprite entry's file is
 * moved into r0 before the branch (movne) where the build moves it after.
 * The first is <stdio.h>'s sprintf with the two formats as literals (docs/matching-guide.md: the formats are
 * shared with formattedTextCopyLabel, so no unit can own them); the other two stay with it. Tried without
 * effect on those: every static/static __inline choice of the eight helpers (256 combinations), `++row` inside
 * the test, an early return and `+= 1` in browserSelectNext, the store of `current` after the two counters, an
 * `else if (value != 0)` or a setter around the sprite group's creation; worse: the steps as a count loop
 * (182 lines), the `!= 0` arm first (107-160), the entry's value or the new group in a local (144-189). */
#include "runtime/Stdio.h"
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdDebug.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "sys/RuntimeObjects.h"

struct AsdTexture;

/* The effect-editor file browser: a window of 18 rows over the linked list of file entries. */
struct EffMenuBrowser {
    /* 0x00 */ u32 x;
    /* 0x04 */ u32 y;
    /* 0x08 */ u32 state;             /* BROWSER_STATE_* */
    /* 0x0C */ u8 unk0C[8];
    /* 0x14 */ s32 index;             /* index of the current entry */
    /* 0x18 */ s32 row;               /* row of the current entry inside the window */
    /* 0x1C */ u32 hasPreview;
    /* 0x20 */ u32 wait;              /* frames until input is read again */
    /* 0x24 */ u32 previewAlpha;
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ EffMenuTextNode *first; /* first entry of the window */
    /* 0x30 */ EffMenuTextNode *current;
    /* 0x34 */ EffMenuTextNode *shown; /* entry the preview was built for */
    /* 0x38 */ AsdTexture *texture;
    /* 0x3C */ u32 tableWord;
    /* 0x40 */ void *spriteGroup;
    /* 0x44 */ u16 previewKind;       /* BROWSER_PREVIEW_* */
    /* 0x46 */ u8 unk46[2];
    /* 0x48 */ EffMenuTextList *source;
};

extern "C" {
u32 padButtonRepeat(u32 button);
u32 padButtonIsPressed(u32 button);
void *memAlloc(u32 heap, u32 alignmentClass, u32 flags, u32 size, u32 alignment, u32 category);
void asdTextureRelease(AsdTexture *texture);
AsdTexture *textureCreateFromImage(const void *image);
void asdMemFree(void *memory);
void *spriteGroupCreateFromFile(const void *file);
void handleBlockRefDrop(void *resource);
void effMenuAppendDefaultColorRect(u32 x, u32 y, u32 width, u32 height);
void effMenuAppendColorRect(u32 x, u32 y, u32 width, u32 height, u32 alpha, u32 flags);
extern EffMenuLists g_effMenuHandles;
extern const char g_formatStringPrefixedText[]; /* "%s%s" */
extern const char g_formatStringPercentS[];     /* "%s" */
}

enum {
    BROWSER_ROWS = 18,
    BROWSER_ROW_HEIGHT = 12,
    BROWSER_STATE_BROWSING = 0,
    BROWSER_STATE_CHOSEN = 1,
    BROWSER_STATE_CANCELLED = 2,
    BROWSER_PREVIEW_TEXTURE = 1,
    BROWSER_PREVIEW_SPRITES = 2,
    BROWSER_PREVIEW_TABLE = 8
};

/* Moves the cursor to the entry before it, scrolling the window when it reaches the first row. */
static void browserSelectPrevious(EffMenuBrowser *menu)
{
    EffMenuTextNode *previous = menu->current->previous;
    if (previous != NULL) {
        menu->current = previous;
        menu->index--;
        if (menu->row != 0) {
            menu->row--;
        }
        if (menu->current == menu->first && menu->first->previous != NULL) {
            menu->first = menu->first->previous;
            menu->row = 1;
        }
    }
}

/* Moves the cursor to the entry after it, scrolling the window when it reaches the last row. */
static void browserSelectNext(EffMenuBrowser *menu)
{
    EffMenuTextNode *next = menu->current->next;
    if (next != NULL) {
        menu->current = next;
        menu->index++;
        menu->row++;
        if (menu->row == BROWSER_ROWS - 1 && menu->first->next != NULL) {
            menu->first = menu->first->next;
            menu->row = BROWSER_ROWS - 2;
        }
    }
}

/* Builds "<prefix><name>" for the entry, or just its name when the list has no prefix. The NULL test is the
 * original's; the one caller passes the current entry after reading its kind, so the path is always written. */
static __inline void browserEntryPath(EffMenuBrowser *menu, EffMenuTextNode *entry, char *path)
{
    if (entry != NULL) {
        if (menu->source->unk04 != 0) {
            __2sprintf(path, g_formatStringPrefixedText, menu->source->unk04, entry->name);
        } else {
            __2sprintf(path, g_formatStringPercentS, entry->name);
        }
    }
}

/* Replaces the preview texture with one made from `image`. */
static __inline void browserSetTexture(EffMenuBrowser *menu, const void *image)
{
    if (menu->texture != NULL && menu->previewKind == BROWSER_PREVIEW_TEXTURE) {
        asdTextureRelease(menu->texture);
        menu->texture = NULL;
    }
    menu->texture = textureCreateFromImage(image);
}

/* Loads the image file at `path` as the preview texture. Retail forms the path's address again (add r5, sp, #8) and
 * keeps it across the release where this and its sprite twin start: the parameter of an inlined function. */
static __inline void browserLoadTexture(EffMenuBrowser *menu, const char *path)
{
    if (menu->texture != NULL && menu->previewKind == BROWSER_PREVIEW_TEXTURE) {
        asdTextureRelease(menu->texture);
        menu->texture = NULL;
    }
    void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
    browserSetTexture(menu, file);
    asdMemFree(file);
}

/* Loads the sprite file at `path` as the preview sprite group. */
static __inline void browserLoadSpriteGroup(EffMenuBrowser *menu, const char *path)
{
    if (menu->spriteGroup != NULL) {
        handleBlockRefDrop(menu->spriteGroup);
        menu->spriteGroup = NULL;
    }
    void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
    if (menu->spriteGroup != NULL) {
        handleBlockRefDrop(menu->spriteGroup);
        menu->spriteGroup = NULL;
    }
    menu->spriteGroup = spriteGroupCreateFromFile(file);
    asdMemFree(file);
}

/* effMenuListAppend's body: appends `node` to menu node list `list`. */
static __inline void effMenuListAppendInline(EffMenuNode *node, s32 list)
{
    EffMenuLists *lists = &g_effMenuHandles;
    EffMenuNode **tail = lists->tail;

    if (lists->head[list] == NULL) {
        lists->head[list] = node;
    } else {
        tail[list]->next = node;
    }
    tail[list] = node;
    node->next = NULL;
}

/* effMenu.h: queues the browser's preview for drawing. */
static __inline void effMenuAppendPreview(EffMenuBrowser *menu)
{
    asdDebugTrace("../Source/Gfx/Effect/effMenu.h", 787);
    EffMenuRenderNode *node = (EffMenuRenderNode *)memAlloc(0x10000, 0x100, 0, sizeof(EffMenuRenderNode), 0x10, 1);
    node->unk04 = 11;
    node->unk08 = (u32)menu;
    effMenuListAppendInline(node, 3);
}

extern "C" {

/* One frame of the browser: steps the cursor with the d-pad (and pages with the shoulder buttons), takes the
 * choose and cancel buttons, rebuilds the preview of the entry the cursor rests on and queues it, then draws the
 * frame and the window's rows. Returns the browser's state. */
u32 effMenuBrowserStep(EffMenuBrowser *menu)
{
    char path[100];

    if (menu->wait != 0) {
        menu->wait--;
    } else if (menu->first == NULL) {
        if (padButtonIsPressed(1) != 0 || padButtonIsPressed(0x16) != 0) {
            menu->state = BROWSER_STATE_CANCELLED;
        }
    } else if (menu->state == BROWSER_STATE_BROWSING) {
        if (padButtonRepeat(5) != 0 || padButtonRepeat(0x10) != 0) {
            browserSelectPrevious(menu);
        } else if (padButtonRepeat(6) != 0 || padButtonRepeat(0x1d) != 0) {
            browserSelectNext(menu);
        } else if (padButtonRepeat(8) != 0 || padButtonRepeat(0x1c) != 0) {
            for (s32 i = 0; i < BROWSER_ROWS; i++) {
                browserSelectPrevious(menu);
            }
        } else if (padButtonRepeat(7) != 0 || padButtonRepeat(0x18) != 0) {
            for (s32 i = 0; i < BROWSER_ROWS; i++) {
                browserSelectNext(menu);
            }
        } else if (padButtonIsPressed(1) != 0 || padButtonIsPressed(0x16) != 0) {
            menu->state = BROWSER_STATE_CANCELLED;
        } else if (padButtonIsPressed(0) != 0 || padButtonIsPressed(0x14) != 0) {
            menu->state = BROWSER_STATE_CHOSEN;
        } else {
            if (menu->shown != menu->current) {
                if (menu->texture != NULL) {
                    asdTextureRelease(menu->texture);
                    menu->texture = NULL;
                }
                if (menu->spriteGroup != NULL) {
                    handleBlockRefDrop(menu->spriteGroup);
                    menu->spriteGroup = NULL;
                }
                EffMenuTextNode *entry = menu->current;
                switch (entry->kind) {
                case BROWSER_PREVIEW_TEXTURE:
                    if (entry->value == 0) {
                        browserEntryPath(menu, entry, path);
                        browserLoadTexture(menu, path);
                    } else {
                        browserSetTexture(menu, (const void *)entry->value);
                    }
                    menu->previewKind = BROWSER_PREVIEW_TEXTURE;
                    menu->hasPreview = 1;
                    break;
                case BROWSER_PREVIEW_SPRITES:
                    if (entry->value == 0) {
                        browserEntryPath(menu, entry, path);
                        browserLoadSpriteGroup(menu, path);
                    } else {
                        menu->spriteGroup = spriteGroupCreateFromFile((const void *)entry->value);
                    }
                    menu->previewKind = BROWSER_PREVIEW_SPRITES;
                    menu->hasPreview = 1;
                    break;
                case BROWSER_PREVIEW_TABLE:
                    menu->tableWord = sysGetTableWord((u16)entry->resource);
                    menu->previewKind = BROWSER_PREVIEW_TABLE;
                    menu->hasPreview = 1;
                    break;
                default:
                    menu->hasPreview = 0;
                    break;
                }
                menu->shown = menu->current;
            }
            if (menu->hasPreview != 0) {
                effMenuAppendPreview(menu);
            }
        }
    }

    effMenuAppendDefaultColorRect(menu->x, menu->y, 0xcc, 0xe8);
    if (menu->hasPreview != 0) {
        effMenuAppendColorRect(menu->x, menu->y + 0xea, 0x80, 0x80, menu->previewAlpha, 0);
    }
    s32 count = 0;
    s32 y = menu->y + 2;
    if (menu->source->unk04 != 0) {
        effMenuDebugDrawText(menu->x + 2, y, 5, (const char *)menu->source->unk04);
        y += BROWSER_ROW_HEIGHT;
    }
    for (EffMenuTextNode *entry = menu->first; entry != NULL; entry = entry->next) {
        effMenuDebugDrawText(menu->x + 2, y, entry == menu->current ? 4 : 0, entry->name);
        y += BROWSER_ROW_HEIGHT;
        if (++count >= BROWSER_ROWS) {
            break;
        }
    }
    return menu->state;
}

} /* extern "C" */
