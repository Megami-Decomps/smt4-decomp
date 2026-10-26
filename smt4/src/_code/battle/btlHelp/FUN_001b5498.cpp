/* NON_MATCHING: layout, switches, flag tests and calls now match; retail loads the kind-2 flag words separately (B then A, no ldrd) and re-reads flagsA for the player-name test, and places two `mov r0,r6/r4` differently. */
#include "common.h"

/* One queued help message (Shin Megami Tensei IV layout, observed fields). */
struct BtlHelpEntry {
    /* 0x000 */ s16 kind;          /* 0 plain, 1 with an info window, 2 with a text slot */
    /* 0x002 */ s16 phase;         /* 0 waiting, 1 shown */
    /* 0x004 */ u16 value;
    /* 0x006 */ u8 unk006[2];
    /* 0x008 */ u32 messageId;
    /* 0x00C */ u32 infoWindow;
    /* 0x010 */ u32 flagsA;        /* bit 1: use the player name */
    /* 0x014 */ u32 flagsB;
    /* 0x018 */ u8 unk018[0xC6];
    /* 0x0DE */ u16 nameId;
    /* 0x0E0 */ u8 unk0E0[0x1B8];
    /* 0x298 */ s8 dialogIndex;
    /* 0x299 */ u8 unk299[3];
    /* 0x29C */ s32 textSlot;
    /* 0x2A0 */ s16 shownCount;
    /* 0x2A2 */ s16 timer;         /* negative: finished, the entry is removed */
    /* 0x2A4 */ BtlHelpEntry *next;
    /* 0x2A8 */ BtlHelpEntry *prev;
};

struct BtlHelpList {
    /* 0x00 */ BtlHelpEntry *head;
    /* 0x04 */ BtlHelpEntry *tail;
    /* 0x08 */ s32 count;
};

extern "C" {

extern BtlHelpList *DAT_00435d78;

void jobGetWork(void);
void asdMemFree(void *block);
void memClear(void *buffer, s32 size);
s32 dialogIsActive(void);
s32 FUN_002b6b04(void);
const char *gameGetPlayerName(void);
const char *FUN_002bd06c(u32 id);
char *libc_strcpy(char *destination, const char *source);
void textEncodeFontSlot(s32 slot, const char *text);
void infoWinSetMessage(u32 window, u32 message);
void dialogOpen(s32 index, s32 flag);
void FUN_00212120(u16 value);

/* Per-frame update of the battle help queue: drops finished messages from the front, then starts
 * the first waiting one (opening its dialog) and counts the frames the others have shown. */
u32 FUN_001b5498(void)
{
    char name[100];
    BtlHelpEntry *entry;
    BtlHelpEntry *next;

    jobGetWork();
    if (DAT_00435d78 == NULL) {
        return 0;
    }
    u32 result = 0;
    entry = DAT_00435d78->head;
    while (entry != NULL) {
        next = entry->next;
        if (entry->timer >= 0) {
            switch (entry->phase) {
            case 0:
                if (FUN_002b6b04() == 0 && dialogIsActive() == 0) {
                    memClear(name, 0x60);
                    switch (entry->kind) {
                    case 1:
                        if (*reinterpret_cast<u64 *>(&entry->flagsA) != 0 && entry->textSlot >= 0) {
                            if ((entry->flagsA & 2) != 0) {
                                libc_strcpy(name, gameGetPlayerName());
                            } else {
                                libc_strcpy(name, FUN_002bd06c(entry->nameId));
                            }
                            textEncodeFontSlot(entry->textSlot, name);
                        }
                        /* fall through */
                    case 0:
                        infoWinSetMessage(entry->infoWindow, entry->messageId & 0xffff);
                        dialogOpen(entry->dialogIndex, 1);
                        break;
                    case 2:
                        if ((entry->flagsB | entry->flagsA) != 0 && entry->textSlot >= 0) {
                            if ((entry->flagsA & 2) != 0) {
                                libc_strcpy(name, gameGetPlayerName());
                            } else {
                                    libc_strcpy(name, FUN_002bd06c(entry->nameId));
                            }
                            textEncodeFontSlot(entry->textSlot, name);
                        }
                        FUN_00212120(entry->value);
                        break;
                    }
                    entry->timer = 1;
                    entry->phase = 1;
                } else {
                    entry->timer = 1;
                }
                break;
            case 1:
                if (FUN_002b6b04() != 0) {
                    entry->timer = 1;
                }
                break;
            }
            entry->timer--;
            entry->shownCount++;
            return result;
        }
        BtlHelpList *list = DAT_00435d78;

        if (entry->prev == NULL) {
            list->head = next;
        } else {
            entry->prev->next = next;
        }
        if (entry->next == NULL) {
            list->tail = entry->prev;
        } else {
            entry->next->prev = entry->prev;
        }
        list->count--;
        asdMemFree(entry);
        entry = next;
    }
    return result;
}

}
