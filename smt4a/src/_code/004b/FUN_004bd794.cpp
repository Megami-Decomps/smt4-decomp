/* NON_MATCHING: the entry-count quarter rounding, the partner-slot scan and the sound selection branches are scheduled and laid out differently; the setup sequence is the same. */
#include "common.h"

extern "C" {

/* A party record (only the fields read here): its id is the halfword at 0x12C and its flags the word at 0x130. */
typedef struct PartnerUnit {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ s16 id;
    /* 0x12E */ u8 unk12e[2];
    /* 0x130 */ u32 flags;
} PartnerUnit;

/* The partner screen's work block (only the fields touched here). */
typedef struct PartnerScreen {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ u8 mode;            /* 1: view only, 2: with the help line */
    /* 0x005 */ u8 unk005[3];
    /* 0x008 */ s32 state;
    /* 0x00C */ u8 unk00c[4];
    /* 0x010 */ u8 params[0x250];
    /* 0x260 */ u8 list[0x64];
    /* 0x2C4 */ s32 partners[12];
    /* 0x2F4 */ u8 unk2f4[0x20];
    /* 0x314 */ u32 helpFile;
    /* 0x318 */ u32 messageFile;
    /* 0x31C */ u32 scriptFile;
    /* 0x320 */ u8 unk320[4];
    /* 0x324 */ s32 partnerCount;
    /* 0x328 */ s32 current;
    /* 0x32C */ s32 initial;
    /* 0x330 */ u8 unk330[4];
    /* 0x334 */ s32 unk334;
    /* 0x338 */ u32 fill[3];
    /* 0x344 */ s32 unk344;
} PartnerScreen;

extern const u8 DAT_0052d780[];
extern const u8 DAT_0052d7e0[];
extern u8 g_callbackOwnerSlots;

void fillThreeWordsWithByte(u32 *words, u8 value);
PartnerUnit *saveSlotFindSelected(void);
void __aeabi_memset4(void *destination, u32 size, s32 value);
PartnerUnit *FUN_00187068(s32 index);
PartnerUnit *FUN_003e4d68(u16 index);
void asdLoadFileAsyncSimple(const char *path, u32 *out, s32 arg);
void FUN_00203b40(void *list, s32 count, s32 rows, s32 columns, s32 a, s32 b);
void FUN_002c8538(s32 arg);
void FUN_00215bd0(void);
void sysPlaySe(u32 id);
void FUN_00183f58(s32 a, s32 b, s32 c);
void paramsClearPacket(void *packet);
void paramsInit(void *packet, const void *a, u32 aSize, const void *b, u32 bSize, const void *c, u32 cSize, u32 d, u32 e,
                const void *f, u32 fSize);
void FUN_0014e188(void *sprite, s32 a, s32 b, void *packet, s32 c);
void FUN_004be990(PartnerScreen *screen, s32 a, s32 b);
u8 FUN_002857b8(void);

/* Starts the partner screen in `mode`: lists the owned partners (their party slot, 0 when not in
 * the party), finds the selected one, loads the help/message/script files, builds the list and
 * plays the matching sound. */
void FUN_004bd794(PartnerScreen *screen, u8 mode)
{
    screen->unk334 = 0;
    screen->mode = mode;
    fillThreeWordsWithByte(screen->fill, 1);
    s32 count = 0;
    s16 selectedId = 0;
    PartnerUnit *selected = saveSlotFindSelected();

    if (selected != NULL) {
        selectedId = selected->id;
    }
    screen->current = -1;
    __aeabi_memset4(screen->partners, 0x30, -1);
    for (s32 i = 0; i < 12; i++) {
        PartnerUnit *unit = FUN_00187068(i);

        if ((unit->flags & 1) == 0) {
            continue;
        }
        if (unit->id == selectedId && selectedId != 0) {
            screen->current = count;
        }
        s32 slot = 0;

        for (s32 j = 0; j < 12; j++) {
            if (FUN_003e4d68((u16)j)->id == unit->id) {
                slot = j;
                break;
            }
        }
        screen->partners[count++] = slot;
    }
    screen->partnerCount = count;
    asdLoadFileAsyncSimple("camp/partnerHelpMsg.mbm", &screen->helpFile, 0);
    asdLoadFileAsyncSimple("camp/partnerMsg.mbm", &screen->messageFile, 0);
    asdLoadFileAsyncSimple("camp/partnerScr.bf", &screen->scriptFile, 0);
    if (screen->mode != 1) {
        s32 rows = count / 4;

        if (count % 4 > 0) {
            rows++;
        }
        FUN_00203b40(screen->list, count, rows, 4, 1, 1);
        FUN_002c8538(1);
        FUN_00215bd0();
        if (screen->mode != 2) {
            if (screen->partnerCount >= 1) {
                if (screen->partners[screen->initial] != screen->partners[screen->current]) {
                    sysPlaySe(0xF0);
                } else {
                    sysPlaySe(0x11B);
                }
            } else {
                sysPlaySe(0x118);
            }
        } else if (screen->partnerCount >= 1) {
            sysPlaySe(0xF0);
            FUN_00183f58(5, 1, 1);
        } else {
            sysPlaySe(0x118);
        }
        paramsClearPacket(screen->params);
        paramsInit(screen->params, DAT_0052d780, 0x60, DAT_0052d7e0, 0x18, NULL, 0, 0, 0, NULL, 0);
        for (s32 i = 0; i < 4; i++) {
            FUN_0014e188((u8 *)screen + 0x30 + i * 0x8C, 0x11, 0, screen->params, 0x6A);
        }
        FUN_004be990(screen, 0, -1);
        screen->unk344 = 0;
    } else {
        FUN_00203b40(screen->list, count, count, 1, 1, 1);
        sysPlaySe(0x11F);
    }
    screen->state = 1;
    g_callbackOwnerSlots = FUN_002857b8();
}

}
