/* NON_MATCHING: retail's jump table starts at 0 (no `sub r0, r0, #9`) and the u16 list loads keep the low constant in the LDRH offset (add #0x1d00; ldrh [r0,#0xb4]) where this build adds the whole constant before the load. */
#include "ui/GridNavigation.h"
#include <stddef.h>

/* The camp menu's selectable lists: one grid per list, and the table of entry ids each grid indexes. */
struct CampLists {
    /* 0x0000 */ u8 unk0000[0xB0];
    /* 0x00B0 */ GridNavigation grids[12];
    /* 0x0560 */ u8 unk0560[0xE3C - 0x560];
    /* 0x0E3C */ struct { u32 id; u32 unk04; } skills[200];
    /* 0x147C */ u16 listB[60];
    /* 0x14F4 */ u16 listC[1000];
    /* 0x1CC4 */ u16 listD[120];
    /* 0x1DB4 */ u16 listE[100];
    /* 0x1E7C */ u16 listF[120];
    /* 0x1F6C */ u16 listG[120];
    /* 0x205C */ u16 listH[50];
    /* 0x20C0 */ u16 listI[120];
    /* 0x21B0 */ u16 listJ[120];
    /* 0x22A0 */ u16 listK[120];
    /* 0x2390 */ u16 listL[120];
};
typedef char CampListsOffsets[
    offsetof(CampLists, grids) == 0xB0 && sizeof(GridNavigation) * 12 == 0x4B0 &&
    offsetof(CampLists, skills) == 0xE3C && offsetof(CampLists, listB) == 0x147C &&
    offsetof(CampLists, listC) == 0x14F4 && offsetof(CampLists, listD) == 0x1CC4 &&
    offsetof(CampLists, listE) == 0x1DB4 && offsetof(CampLists, listF) == 0x1E7C &&
    offsetof(CampLists, listG) == 0x1F6C && offsetof(CampLists, listH) == 0x205C &&
    offsetof(CampLists, listI) == 0x20C0 && offsetof(CampLists, listJ) == 0x21B0 &&
    offsetof(CampLists, listK) == 0x22A0 && offsetof(CampLists, listL) == 0x2390 ? 1 : -1];

extern "C" {
extern CampLists *g_camp;
u32 FUN_0029efc0(const GridNavigation *grid);
u32 FUN_0029efa8(const GridNavigation *grid);
void buttonHelpShowSkillDetails(u32 id);
void FUN_0029212c(u32 id);
u32 FUN_00288e68(void);
void FUN_0029ee6c(s32 mode, u32 color);

/* The index of the grid's highlighted entry. */
static __inline u32 selectedIndex(const GridNavigation *grid)
{
    u32 row = FUN_0029efc0(grid);
    return FUN_0029efa8(grid) + row;
}

/* Shows the help for the highlighted entry of the camp list identified by `list`. */
void FUN_00299900(u32 list)
{
    CampLists *camp = g_camp;
    switch (list) {
    case 9:
        buttonHelpShowSkillDetails(camp->skills[selectedIndex(&camp->grids[3])].id);
        break;
    case 10:
        if (camp->listE[selectedIndex(&camp->grids[4])] != 0) {
            buttonHelpShowSkillDetails(FUN_00288e68());
        } else {
            FUN_0029ee6c(0, 0x323232FF);
        }
        break;
    case 11:
        FUN_0029212c(camp->listB[selectedIndex(&camp->grids[0])]);
        break;
    case 12:
        FUN_0029212c(camp->listC[selectedIndex(&camp->grids[1])]);
        break;
    case 13:
        FUN_0029212c(camp->listD[selectedIndex(&camp->grids[2])]);
        break;
    case 17:
        FUN_0029212c(camp->listF[selectedIndex(&camp->grids[5])]);
        break;
    case 18:
        FUN_0029212c(camp->listG[selectedIndex(&camp->grids[6])]);
        break;
    case 19:
        FUN_0029212c(camp->listH[selectedIndex(&camp->grids[7])]);
        break;
    case 20:
        FUN_0029212c(camp->listI[selectedIndex(&camp->grids[8])]);
        break;
    case 21:
        FUN_0029212c(camp->listJ[selectedIndex(&camp->grids[9])]);
        break;
    case 22:
        FUN_0029212c(camp->listK[selectedIndex(&camp->grids[10])]);
        break;
    case 23:
        FUN_0029212c(camp->listL[selectedIndex(&camp->grids[11])]);
        break;
    }
}

} /* extern "C" */
