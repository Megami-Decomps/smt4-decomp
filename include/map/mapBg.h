/* Asynchronous map background resource loading. */
#ifndef MAP_MAPBG_H
#define MAP_MAPBG_H
#include "common.h"
extern "C" {
/* Returns one when loading is inactive or the requested archives are ready. */
u32 mapBgLoadArchivesStep(void);
}
#endif
