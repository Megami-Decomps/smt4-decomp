#include "common.h"
#include "game/GameState.h"


extern "C" {

void eventQueueAddUnique(u32 event);

/* Queues the event associated with the current game selection. */
void eventQueueAddSelected()
{
    switch (g_gameState.selectedKind) {
    case 0: eventQueueAddUnique(0x1000207); break;
    case 1: eventQueueAddUnique(0x100020c); break;
    case 2: eventQueueAddUnique(0x1000211); break;
    case 3: eventQueueAddUnique(0x1000216); break;
    case 4: eventQueueAddUnique(0x1000225); break;
    }
}

}
