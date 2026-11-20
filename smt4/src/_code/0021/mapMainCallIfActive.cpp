#include "map/mapMain.h"

extern "C" {

void mapAmbientAudioUpdate(void);

extern MapMain *g_mapMain;

void mapMainCallIfActive(void)
{
    if (g_mapMain != NULL) {
        mapAmbientAudioUpdate();
    }
}

} /* extern "C" */
