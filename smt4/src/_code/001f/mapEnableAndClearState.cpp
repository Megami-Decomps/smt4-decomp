#include "gamedata/MapSaveBlock.h"
extern "C" {
/* Enable the map state while clearing its scalar and pending flag. */
void mapEnableAndClearState(void) { MapSaveBlock *block=gameGetMapBlock(); block->eventEnabled=1; block->eventTime=0.0f; block->eventPending=0; }
}
