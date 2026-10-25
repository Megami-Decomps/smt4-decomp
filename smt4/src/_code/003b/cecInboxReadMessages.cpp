#include "common.h"
#include "shard/W6_W6Match8_BattleDebug.h"

extern "C" {

int asdCecReadInboxMessage(int index, void *message);
extern int asdCecInboxGetMessageCount(void);

/* Reads up to `count` inbox messages starting at `first` into the 0x4C-byte message slots at `messages`. */
void cecInboxReadMessages(u32 unused, u8 *messages, int first, int count)
{
    int total;
    int i;

    total = asdCecInboxGetMessageCount();
    i = 0;
    if (i < count) {
        do {
            if (total <= i + first) {
                return;
            }
            asdCecReadInboxMessage(i + first, messages + i * 0x4c);
            i = i + 1;
        } while (i < count);
    }
}

} /* extern "C" */
