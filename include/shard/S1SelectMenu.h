/* A scrolling selection menu (its item list and view are embedded or referenced). */
#ifndef SHARD_S1SELECTMENU_H
#define SHARD_S1SELECTMENU_H

#include "common.h"

/* The object that displays the list; its vtable's fifth slot takes the list id. */
struct MenuView;

typedef struct MenuViewVtbl {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ void (*setList)(struct MenuView *view, u32 listId);
} MenuViewVtbl;

typedef struct MenuView {
    /* 0x00 */ MenuViewVtbl *vtbl;
} MenuView;

/* The menu's list of choices. */
typedef struct MenuList {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ s32 marked;      /* number of marked entries */
} MenuList;

enum {
    MENU_REFRESH = 0x100,
    MENU_CANCEL = 0x200,
    MENU_CONFIRM = 0x400,
    MENU_SCROLL = 0x800,
    MENU_CLOSE = 0x1000
};

typedef struct SelectMenu {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u8 unk0004[4];
    /* 0x0008 */ s32 mode;               /* 4: pick mode */
    /* 0x000C */ u8 unk000C[0x370];
    /* 0x037C */ u32 listId;
    /* 0x0380 */ u8 cursor[0x4DC];       /* cursor state (FUN_00230cc0) */
    /* 0x085C */ MenuView *view;
    /* 0x0860 */ u8 unk0860[0x9448];
    /* 0x9CA8 */ MenuList list;
} SelectMenu;

#endif
