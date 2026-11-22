/* NON_MATCHING: 131 lines (118 vs 101 rows): if/else-if action dispatch and for-loop scan match; duplicate character reads are merged and byte assembly differs. */
#include "ui/GridNavigation.h"
struct NameConfirmationWork {
    u8 unk000[8];
    u8 changed;
    u8 unk009[0x19];
    s8 cursor;
    u8 unk023[0x8D];
    s8 text[18];
    u8 unk0C2[0x13A];
    GridNavigation actions;
    u8 enabled;
    u8 unk261[0x307];
    u32 silent;
};
typedef char NameConfirmationOffsets[(offsetof(NameConfirmationWork, text) == 0xB0 && offsetof(NameConfirmationWork, actions) == 0x1FC && offsetof(NameConfirmationWork, enabled) == 0x260 && offsetof(NameConfirmationWork, silent) == 0x568) ? 1 : -1];
static __inline s16 nameCharacter(const NameConfirmationWork *work, s8 index)
{
    const s8 *text = &work->text[index * 2];
    return (s16)(((u16)(u8)text[0] << 8) + (u8)text[1]);
}
static __inline bool nameIsSpace(const NameConfirmationWork *work, s8 index)
{
    bool space = true;
    if (index >= 0)
        space = nameCharacter(work, index) == (s16)0x8140;
    return space;
}
static __inline bool nameIsEmpty(const NameConfirmationWork *work, s8 index)
{
    return index >= 0 && nameCharacter(work, index) == 0;
}
extern "C" {
s32 flaggedEntryGetValueB(const GridNavigation *actions);
void stateSetterEnterState(NameConfirmationWork *work, s32 state);
void sendEvent100020D(void);
void sendEvent100020E(void);

u32 FUN_0048408c(NameConfirmationWork *work)
{
    if (work->enabled) {
        if (flaggedEntryGetValueB(&work->actions) == 1) {
            if (work->cursor > 0) {
                --work->cursor;
                if (!work->silent)
                    sendEvent100020D();
            }
        } else if (flaggedEntryGetValueB(&work->actions) == 2) {
            if (work->cursor < 7) {
                ++work->cursor;
                if (!work->silent)
                    sendEvent100020D();
            }
        } else if (flaggedEntryGetValueB(&work->actions) == 3) {
            s32 index;
            for (index = 0; index < 8; ++index) {
                if (!nameIsSpace(work, index) && !nameIsEmpty(work, index))
                    break;
            }
            if (index == 8)
                return 1;
            for (s32 tail = 8; tail > 0; --tail) {
                if (!nameIsEmpty(work, tail) && !nameIsSpace(work, tail))
                    break;
                s8 position = tail;
                work->text[position * 2] = 0;
                work->text[position * 2 + 1] = 0;
            }
            work->changed = 1;
            stateSetterEnterState(work, 4);
            sendEvent100020E();
        } else {
            return 0;
        }
        return 1;
    }
    return 0;
}
}
