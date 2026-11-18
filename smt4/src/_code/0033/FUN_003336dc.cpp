/* NON_MATCHING: retail counts the used slots with a two-iteration loop over interleaved halfword pairs and lays the per-count returns out differently; the id selection is the same. */
#include "common.h"
#include "quest_center/QuestRecord.h"
#include "quest_center/QuestRuntime.h"
#include "quest_center/QuestStatus.h"

extern "C" {

/* The message id describing quest record `id`: by its kind, the id of its first slot and how many
 * of its four slots are used. Returns -1 when there is none. */
s32 FUN_003336dc(u32 id, u8 mask)
{
    const QuestRuntimeStatus *entry = questGetRuntimeStatus(id);
    QuestRecord *record = questDataGetRecord(id);

    if (record == NULL) {
        return -1;
    }
    if ((entry->stateFlags & mask) == 0 && (record->flags & 0x20) != 0) {
        return 0x11;
    }
    if ((record->flags & 0x10) != 0) {
        return -1;
    }
    u16 first = record->requirements[0].id;
    s32 used = first != 0;

    for (s32 i = 1; i < 4; i++) {
        if (record->requirements[i].id != 0) {
            used++;
        }
    }
    u8 kind = record->kind;

    if (kind != 0) {
        if (kind == 1) {
            if (used == 1) {
                return 0x16;
            }
            if (used == 2) {
                return 0x17;
            }
            if (used == 3) {
                return 0x18;
            }
            if (used == 4) {
                return 0x19;
            }
            return -1;
        }
        if (kind != 3) {
            if (kind != 7) {
                return -1;
            }
            if (used == 1) {
                return 0x34;
            }
            if (used == 2) {
                return 0x35;
            }
            if (used != 3) {
                if (used == 4) {
                    return 0x37;
                }
                return -1;
            }
            return 0x36;
        }
        if (first == 1 || first == 7) {
            if (used == 1) {
                return 0x1A;
            }
            if (used == 2) {
                return 0x1B;
            }
            if (used == 3) {
                return 0x1C;
            }
            if (used == 4) {
                return 0x1D;
            }
            return -1;
        }
        if (first == 2) {
            if (used == 1) {
                return 0x1E;
            }
            if (used == 2) {
                return 0x1F;
            }
            if (used == 3) {
                return 0x20;
            }
            if (used == 4) {
                return 0x21;
            }
            return -1;
        }
    } else {
        if (first == 1 || first == 7) {
            if (used == 1) {
                return 0x12;
            }
            if (used == 2) {
                return 0x13;
            }
            if (used == 3) {
                return 0x14;
            }
            if (used == 4) {
                return 0x15;
            }
            return -1;
        }
        if (first == 2) {
            if (used == 1) {
                return 0x2E;
            }
            if (used == 2) {
                return 0x2F;
            }
            if (used == 3) {
                return 0x30;
            }
            if (used == 4) {
                return 0x31;
            }
            return -1;
        }
    }
    if (first == 6) {
        return 0x29;
    }
    if (first == 5) {
        if (used == 1) {
            return 0x2A;
        }
        if (used == 2) {
            return 0x2B;
        }
        if (used == 3) {
            return 0x2C;
        }
        if (used == 4) {
            return 0x2D;
        }
    }
    return -1;
}

}
