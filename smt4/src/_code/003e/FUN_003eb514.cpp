/* NON_MATCHING: scanner owner recovery and thread-member writeback differ after module-state initialization. */
#include "classes/ThreadedTextScanner.h"

struct TextScannerModuleState {
    explicit TextScannerModuleState(s64 initialState) : state(initialState) {}
    u32 flags;
    u32 count;
    s64 state;
};
struct TextScannerModuleCounters {
    TextScannerModuleCounters(u32 first, u32 second) : first(first), second(second) {}
    u32 first;
    u32 second;
};
typedef char TextScannerModuleStateSizeCheck[sizeof(TextScannerModuleState) == 0x10 ? 1 : -1];
typedef char TextScannerModuleCountersSizeCheck[sizeof(TextScannerModuleCounters) == 8 ? 1 : -1];

TextScannerModuleState g_textScannerModuleState(-1);
TextScannerModuleCounters g_textScannerModuleCounters(0, 0);
ThreadedTextScanner g_asdNgc;
