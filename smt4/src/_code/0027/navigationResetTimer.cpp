#include "common.h"
extern "C" {
struct MapInterfaceTimer { u32 active,counter; };
extern MapInterfaceTimer *g_mapIfTimer;
void mapIfClearActivity(void);
/* Stop the active interface timer, then clear interface activity. */
void navigationResetTimer(void) { if (g_mapIfTimer->active!=0) { g_mapIfTimer->active=0; g_mapIfTimer->counter=0; } mapIfClearActivity(); }
}
