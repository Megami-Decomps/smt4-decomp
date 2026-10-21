#include "shard/W5_W5Match7_SceneState.h"

extern "C" {

void eventQueueAddUnique(u32 event);

void gameQueueKindEvent(void)
{
    switch (g_gameState.eventKind) {
    case 0: eventQueueAddUnique(0x010002b0); break;
    case 1: eventQueueAddUnique(0x010002b5); break;
    case 2: eventQueueAddUnique(0x010002ba); break;
    case 3: eventQueueAddUnique(0x010002bf); break;
    case 4: eventQueueAddUnique(0x010002ce); break;
    case 5: eventQueueAddUnique(0x010002db); break;
    }
}

} /* extern "C" */
