/* NON_MATCHING: rewritten from the raw draft (effect-editor file browser step); callee argument lists follow the draft's intent and the result is not compared with retail beyond compiling. */
#include "AsdSDK/Source/Gfx/Effect/effMenu.h"
#include "AsdSDK/AsdLoadFileSyncDefault.h"
#include "sys/RuntimeObjects.h"

struct AsdTexture;

/* The effect-editor file browser: a window of 18 rows over the linked list of file entries. */
struct EffMenuBrowser {
    /* 0x00 */ u32 x;
    /* 0x04 */ u32 y;
    /* 0x08 */ u32 state;             /* 0 browsing, 1 choose, 2 cancel */
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
    /* 0x44 */ u16 previewKind;
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
void handleBlockRefDrop(void **reference);
s32 textFormatBuffer(char *output, const char *format, ...);
void FUN_002b3fd8(u32 x, u32 y, u32 width, u32 height);
void FUN_002cf28c(u32 x, u32 y, u32 width, u32 height, u32 alpha, u32 flags);
extern EffMenuLists DAT_006471a0;
extern const char DAT_00544ac0[]; /* "%s" */
}

static const s32 kWindowRows = 0x11;

static __inline void browserSelectPrevious(EffMenuBrowser *menu)
{
    EffMenuTextNode *previous = menu->current->previous;
    if (previous != NULL) {
        menu->current = previous;
        if (menu->row != 0) {
            menu->row--;
        }
        menu->index--;
        if (previous == menu->first && menu->first->previous != NULL) {
            menu->first = menu->first->previous;
            menu->row = 1;
        }
    }
}

static __inline void browserSelectNext(EffMenuBrowser *menu)
{
    EffMenuTextNode *next = menu->current->next;
    if (next != NULL) {
        menu->current = next;
        menu->row++;
        menu->index++;
        if (menu->row == kWindowRows && menu->first->next != NULL) {
            menu->first = menu->first->next;
            menu->row = 0x10;
        }
    }
}

/* Builds "<prefix><name>" for the entry, or just its name without a prefix. */
static __inline void browserEntryPath(EffMenuBrowser *menu, EffMenuTextNode *entry, char *path)
{
    if (entry != NULL) {
        if (menu->source->unk04 != 0) {
            textFormatBuffer(path, "%s%s", menu->source->unk04, entry->name);
        } else {
            textFormatBuffer(path, DAT_00544ac0, entry->name);
        }
    }
}

static __inline void browserDropTexture(EffMenuBrowser *menu)
{
    if (menu->texture != NULL && menu->previewKind == 1) {
        asdTextureRelease(menu->texture);
        menu->texture = NULL;
    }
}

extern "C" {

/* One frame of the browser: steps the cursor with the d-pad (and pages with the shoulder buttons),
 * rebuilds the preview of the selected entry, queues the preview command, and draws the frame. Returns
 * the state in the low word and the draw position of the last listed row in the high word. */
u64 FUN_00381874(EffMenuBrowser *menu)
{
    if (menu->wait != 0) {
        menu->wait--;
    } else if (menu->first != NULL) {
        if (menu->state == 0) {
            if (padButtonRepeat(5) != 0 || padButtonRepeat(0x10) != 0) {
                browserSelectPrevious(menu);
            } else if (padButtonRepeat(6) != 0 || padButtonRepeat(0x1d) != 0) {
                browserSelectNext(menu);
            } else if (padButtonRepeat(8) != 0 || padButtonRepeat(0x1c) != 0) {
                for (s32 i = 0; i < 0x12; i++) {
                    browserSelectPrevious(menu);
                }
            } else if (padButtonRepeat(7) != 0 || padButtonRepeat(0x18) != 0) {
                for (s32 i = 0; i < 0x12; i++) {
                    browserSelectNext(menu);
                }
            } else if (padButtonIsPressed(1) != 0 || padButtonIsPressed(0x16) != 0) {
                menu->state = 2;
            } else if (padButtonIsPressed(0) != 0 || padButtonIsPressed(0x14) != 0) {
                menu->state = 1;
            } else {
                if (menu->shown != menu->current) {
                    if (menu->texture != NULL) {
                        asdTextureRelease(menu->texture);
                        menu->texture = NULL;
                    }
                    if (menu->spriteGroup != NULL) {
                        handleBlockRefDrop(&menu->spriteGroup);
                        menu->spriteGroup = NULL;
                    }
                    EffMenuTextNode *entry = menu->current;
                    if (entry->kind == 1) {
                        if (entry->value != 0) {
                            browserDropTexture(menu);
                            menu->texture = textureCreateFromImage((const void *)entry->value);
                        } else {
                            char path[100];
                            browserEntryPath(menu, entry, path);
                            browserDropTexture(menu);
                            void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
                            browserDropTexture(menu);
                            menu->texture = textureCreateFromImage(file);
                            asdMemFree(file);
                        }
                        menu->previewKind = 1;
                        menu->hasPreview = 1;
                    } else if (entry->kind == 2) {
                        if (entry->value != 0) {
                            menu->spriteGroup = spriteGroupCreateFromFile((const void *)entry->value);
                        } else {
                            char path[100];
                            browserEntryPath(menu, entry, path);
                            if (menu->spriteGroup != NULL) {
                                handleBlockRefDrop(&menu->spriteGroup);
                                menu->spriteGroup = NULL;
                            }
                            void *file = asdLoadFileSyncNoContext(path, NULL, 1, 0x80);
                            if (menu->spriteGroup != NULL) {
                                handleBlockRefDrop(&menu->spriteGroup);
                                menu->spriteGroup = NULL;
                            }
                            menu->spriteGroup = spriteGroupCreateFromFile(file);
                            asdMemFree(file);
                        }
                        menu->previewKind = 2;
                        menu->hasPreview = 1;
                    } else if (entry->kind == 8) {
                        menu->tableWord = sysGetTableWord(entry->resource & 0xffff);
                        menu->previewKind = 8;
                        menu->hasPreview = 1;
                    } else {
                        menu->hasPreview = 0;
                    }
                    menu->shown = menu->current;
                }
                if (menu->hasPreview != 0) {
                    EffMenuNode *command = (EffMenuNode *)memAlloc(0x10000, 0x100, 0, 0x68, 0x10, 1);
                    command->unk04 = 0xb;
                    command->unk08 = (u32)menu;
                    EffMenuNode *head = command;
                    if (DAT_006471a0.head[0] != NULL) {
                        DAT_006471a0.tail[0]->next = command;
                        head = DAT_006471a0.head[0];
                    }
                    DAT_006471a0.head[0] = head;
                    DAT_006471a0.tail[0] = command;
                    command->next = NULL;
                }
            }
        } else if (padButtonIsPressed(1) != 0 || padButtonIsPressed(0x16) != 0) {
            menu->state = 2;
        }
    }

    FUN_002b3fd8(menu->x, menu->y, 0xcc, 0xe8);
    if (menu->hasPreview != 0) {
        FUN_002cf28c(menu->x, menu->y + 0xea, 0x80, 0x80, menu->previewAlpha, 0);
    }
    u32 drawY = (u32)menu->source;
    u32 rowY = menu->y + 2;
    u32 nextY = rowY;
    if (menu->source->unk04 != 0) {
        nextY = menu->y + 0xe;
        drawY = rowY;
    }
    s32 count = 0;
    for (EffMenuTextNode *entry = menu->first; entry != NULL; entry = entry->next) {
        count++;
        drawY = nextY;
        if (count >= 0x12) {
            break;
        }
        nextY += 0xc;
    }
    return ((u64)drawY << 32) | menu->state;
}

} /* extern "C" */
