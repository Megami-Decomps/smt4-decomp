/* NON_MATCHING: retail loads the counters' address from its own pool word. armcc groups the
 * two initialized data objects and forms their addresses from one pool word instead. */
#include "gfx/EffectEditorStorage.h"
#include "AsdSDK/EffectEditorDefaults.h"

/* Unit-local: the editor's independently addressed startup counters. */
struct EffectEditorCounters {
    EffectEditorCounters(u32 first, u32 second) : first(first), second(second) {}
    u32 first;
    u32 second;
};
typedef char EffectEditorCountersSizeCheck[sizeof(EffectEditorCounters) == 8 ? 1 : -1];

extern "C" {
extern EffectEditorDefaultSlot g_effectEditorState;

/* Fixed defaults in .data, followed by the startup selection and camera constructors. */
EffectEditor g_effectEditor = {
    /* 0x00: mode fields */
    0, 0, 0, 0, 0, 1, 0, 0, 0, 0, {0},
    /* 0x0C: record selection and resources */
    0, NULL, NULL, NULL, NULL, NULL, NULL, 0, 0, NULL,
    (EffectEditorSelection *)&g_effectEditorState,
    /* 0x38: display and text request */
    NULL, NULL, NULL, NULL, NULL, 0, 0, 1, 0, ~0u, 0, 0, 0, {0}, 1,
    "NEW", "EXIT", NULL, EffectEditorInitialSelection(-1)
};
static EffectEditorCounters s_effectEditorStartupCounters(0, 0);
EffectEditorCamera g_effectEditorCamera;
} /* extern "C" */
