/* Static initializer of the text scanner module: its state, counters and the global scanner g_asdNgc. */
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
