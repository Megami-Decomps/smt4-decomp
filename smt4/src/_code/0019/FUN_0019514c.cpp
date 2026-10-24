/* NON_MATCHING: readable rewrite from retail disassembly compiles (215 vs 200 rows); retail hoists the 0x424 literal and keeps the per-row loops as separate counters */
#include "common.h"

// One animated row widget (0x8c bytes each).
struct RowWidget {
    u8 unk00[0x8c];
};

// Data table 0x37 record: only the leading id halfword (negative = unlocked flavour).
struct TableRecord {
    s16 id;                 // 0x00
    u8 unk02[0x3e];
};

extern "C" {

#define SCREEN_FRAME(s) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(s) + 0x340))
#define SCREEN_STATE(s) (*reinterpret_cast<s32*>(reinterpret_cast<u8*>(s) + 0x344))

void FUN_002b8ee0(void* widget, s32 arg);
u16 FUN_002b8584(u32 group, u32 index);
s32 FUN_0029ee54(void* list);
s32 FUN_0029efc0(void* list);
s32 FUN_0029efa8(void* list);
s32 FUN_0029efd8(void* list, s32 arg);
u32 dataTableGet(u32 table, u32 index);
TableRecord* dataTableGetEntries(void);
u32 dataTableGetCount(u32 table);
u32 FUN_002907a8(void);
u32 FUN_002bf4f8(u32 group, u32 index);
s32 uiScrollHandleActionsOrTouch(void* list, u32 a, s32 b, s32 c, s32 d, s32 e, u8* flags, s32 f, s32 g);
s32 eventQueueAddUniqueIfValid(u32 event);
s32 FUN_002c1658(s32 a, s32 b);
void timerStart(void* widget, s32 a, s32 b);
void FUN_002bf818(void* widget);

// Per-frame update of the animated scroll list: row fade-in, list input handling with
// cursor events, then row fade-out when the list is dismissed.
void FUN_0019514c(u8** screenRef)
{
    u8* screen = *screenRef;
    RowWidget* rows = reinterpret_cast<RowWidget*>(screen + 0x20);
    void* list = screen + 0x2dc;
    s8 ready = *reinterpret_cast<s8*>(screen + 0x2da);
    s32 frame = SCREEN_FRAME(screen);
    switch (SCREEN_STATE(screen)) {
    case 0:
        for (s32 i = 0; i < 5; i++) {
            if (i <= frame) FUN_002b8ee0(&rows[i], 0);
        }
        if (ready != 0) {
            *reinterpret_cast<u16*>(screen + 0x348) = FUN_002b8584(0x30, 0x1a);
            *reinterpret_cast<u16*>(screen + 0x34a) = FUN_002b8584(0x30, 0x1b);
            *reinterpret_cast<u16*>(screen + 0x34c) = FUN_002b8584(0x30, 0x1c);
            *reinterpret_cast<u16*>(screen + 0x358) += 3;
            SCREEN_STATE(screen) = 1;
        }
        break;
    case 1: {
        s32 count = FUN_0029ee54(list);
        for (s32 i = 0; i < count; i = i + 1, count = FUN_0029ee54(list)) {
            u32 id = reinterpret_cast<s16*>(screen + 0x424)[i];
            u32 table = dataTableGet(0x37, 0);
            TableRecord* entries = dataTableGetEntries();
            if (id < dataTableGetCount(table) && &entries[id] != NULL && entries[id].id < 0) {
                reinterpret_cast<u32*>(screen + 0x35c)[i] = FUN_002907a8();
            }
        }
        u8 flags = 0;
        s32 previous = FUN_0029efc0(list);
        s32 handled = uiScrollHandleActionsOrTouch(list, FUN_002bf4f8(0x30, 0x1c), 0,
            *reinterpret_cast<s16*>(screen + 0x34c), *reinterpret_cast<s16*>(screen + 0x348),
            *reinterpret_cast<s16*>(screen + 0x34a), &flags, 0, 0);
        if (handled == 0) {
            if (FUN_0029efd8(list, 0) != 0) {
                if (FUN_0029ee54(list) > 5) {
                    while (FUN_0029efc0(list) == previous) {
                        if (FUN_0029efc0(list) != 0 && FUN_0029efa8(list) == 0) break;
                        if (FUN_0029efc0(list) == FUN_0029ee54(list) - 5 && FUN_0029efa8(list) == 4) break;
                        FUN_0029efd8(list, 0);
                    }
                }
            } else {
                if (FUN_002c1658(1, 1) != 0) {
                    eventQueueAddUniqueIfValid(0x0100016e);
                    for (s32 i = 0; i < 5; i++) timerStart(&rows[i], 1, 0);
                    SCREEN_STATE(screen) = 2;
                }
                break;
            }
        }
        if (FUN_0029efc0(list) != previous) eventQueueAddUniqueIfValid(0x0100016e);
        break;
    }
    case 2:
        for (s32 i = 0; i < 5; i++) FUN_002bf818(&rows[i]);
        if (ready != 0) SCREEN_STATE(screen) = 3;
        break;
    default:
        break;
    }
    SCREEN_FRAME(screen) = SCREEN_FRAME(screen) + 1;
}

} /* extern "C" */
