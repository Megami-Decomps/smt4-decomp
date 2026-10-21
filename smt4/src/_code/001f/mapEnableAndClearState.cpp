#include "common.h"
extern "C" {
struct MapBlockView { u8 unk00[0xDC0]; u32 enabled; f32 value; u8 pending; };
MapBlockView *gameGetMapBlock(void);
/* Enable the map state while clearing its scalar and pending flag. */
void mapEnableAndClearState(void) { MapBlockView *block=gameGetMapBlock(); block->enabled=1; block->value=0.0f; block->pending=0; }
}
