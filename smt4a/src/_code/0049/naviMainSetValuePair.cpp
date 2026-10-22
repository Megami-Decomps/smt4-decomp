#include "shard/NaviMain.h"
#include "common.h"

extern "C" {
extern NaviMainA *g_naviMain;

/* Updates the navigation value pair. */
void naviMainSetValuePair(u32 unused, const NaviValuePair *value) { g_naviMain->value=*value; }
}
