#ifndef MAP_MAPINTERFACEAPI_A_H
#define MAP_MAPINTERFACEAPI_A_H
#include "common.h"
extern "C" {
/* Display supplied text, opening the map dialog when requested. */
void mapIfStart(const char *text);
void mapIfStartNavigation(u32 speaker, const char *text, s32 openDialog,
                          u32 optionA, u32 optionB);
}
#endif
