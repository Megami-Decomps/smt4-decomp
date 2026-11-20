#include "common.h"
extern "C" {
struct MapCounter {
    u32 selection;
    u32 progress;
};
extern struct {
    u8 unk00[0x28];
    MapCounter current;
    u8 unk30[0x38];
    u8 widget;
} *g_naviMain;
void naviSwitchTextureSetForMap(void *widget, u32 value);

/* Changes navigation selection and resets its progress counter. */
void naviMainSetSelectionResetProgress(u32 value)
{
    MapCounter current = {value, 0};
    g_naviMain->current = current;
    naviSwitchTextureSetForMap(&g_naviMain->widget, value);
}
}
