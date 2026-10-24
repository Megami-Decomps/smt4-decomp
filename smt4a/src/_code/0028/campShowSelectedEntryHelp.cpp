#include "common.h"

/* One page of the camp menu (0x64 bytes, the list state its cursor code works on). */
struct CampPage {
    /* 0x00 */ u8 unk00[0x64];
};

struct CampSummonEntry {
    /* 0x00 */ u32 id;
    /* 0x04 */ u32 unk04;
};

/* The camp menu block: its pages and the help message ids of each page. */
struct CampView {
    /* 0x0000 */ u8 unk0000[0xC0];
    /* 0x00C0 */ CampPage pages[12];
    /* 0x0570 */ u8 unk0570[0x1B70 - 0x570];
    /* 0x1B70 */ CampSummonEntry summons[200];
    /* 0x21B0 */ u16 messages0[124];
    /* 0x22A8 */ u16 messages1[1000];
    /* 0x2A78 */ u16 messages2[120];
    /* 0x2B68 */ u16 messages5[120];
    /* 0x2C58 */ u16 messages6[120];
    /* 0x2D48 */ u16 messages7[50];
    /* 0x2DAC */ u16 messages8[120];
    /* 0x2E9C */ u16 messages9[120];
    /* 0x2F8C */ u16 messages10[120];
    /* 0x307C */ u16 messages11[120];
};

extern "C" {
extern CampView *g_camp;

s32 resourceRunOperationIfUnblocked(CampPage *page);
s32 FUN_002a4894(CampPage *page);
void screenShowMessage(s32 id);
void FUN_00359b6c(s32 id);

/* Shows the help message of the selected entry on the camp menu page `page`. */
void campShowSelectedEntryHelp(s32 page)
{
    CampView *camp = g_camp;
    switch (page) {
    case 0:
    case 10:
        break;
    case 9:
        FUN_00359b6c(camp->summons[resourceRunOperationIfUnblocked(&camp->pages[3]) + FUN_002a4894(&camp->pages[3])].id);
        break;
    case 0xb:
        screenShowMessage(camp->messages0[resourceRunOperationIfUnblocked(&camp->pages[0]) + FUN_002a4894(&camp->pages[0])]);
        break;
    case 0xd:
        screenShowMessage(camp->messages1[resourceRunOperationIfUnblocked(&camp->pages[1]) + FUN_002a4894(&camp->pages[1])]);
        break;
    case 0xe:
        screenShowMessage(camp->messages2[resourceRunOperationIfUnblocked(&camp->pages[2]) + FUN_002a4894(&camp->pages[2])]);
        break;
    case 0x13:
    case 0x48:
        screenShowMessage(camp->messages5[resourceRunOperationIfUnblocked(&camp->pages[5]) + FUN_002a4894(&camp->pages[5])]);
        break;
    case 0x14:
    case 0x49:
        screenShowMessage(camp->messages6[resourceRunOperationIfUnblocked(&camp->pages[6]) + FUN_002a4894(&camp->pages[6])]);
        break;
    case 0x15:
    case 0x4a:
        screenShowMessage(camp->messages7[resourceRunOperationIfUnblocked(&camp->pages[7]) + FUN_002a4894(&camp->pages[7])]);
        break;
    case 0x16:
    case 0x4b:
        screenShowMessage(camp->messages8[resourceRunOperationIfUnblocked(&camp->pages[8]) + FUN_002a4894(&camp->pages[8])]);
        break;
    case 0x17:
    case 0x4c:
        screenShowMessage(camp->messages9[resourceRunOperationIfUnblocked(&camp->pages[9]) + FUN_002a4894(&camp->pages[9])]);
        break;
    case 0x18:
    case 0x4d:
        screenShowMessage(camp->messages10[resourceRunOperationIfUnblocked(&camp->pages[10]) + FUN_002a4894(&camp->pages[10])]);
        break;
    case 0x19:
    case 0x4e:
        screenShowMessage(camp->messages11[resourceRunOperationIfUnblocked(&camp->pages[11]) + FUN_002a4894(&camp->pages[11])]);
        break;
    }
}
}
