#include "map/MapIfTimer.h"
extern "C" {

void mapIfClearActivity(void);
/* Stop the active interface timer, then clear interface activity. */
void navigationResetTimer(void) { if (g_mapIfTimer->state!=0) { g_mapIfTimer->state=0; g_mapIfTimer->frames=0; } mapIfClearActivity(); }
}
