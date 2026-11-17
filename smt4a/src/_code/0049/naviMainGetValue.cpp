#include "mapnavi/NaviMainGlobals.h"
extern "C" {
/* Returns the navigation object's current value. */
f32 naviMainGetValue() { return g_naviMain->scale; }
}
