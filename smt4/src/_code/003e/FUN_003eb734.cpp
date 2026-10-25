/* NON_MATCHING: native module constructors differ in lock-address and zero-store scheduling. */
#include "nn/os/CriticalSection.h"

struct ArchiveModuleState {
    explicit ArchiveModuleState(s64 initialArchiveId) : archiveId(initialArchiveId) {}
    /* 0x00 */ u32 initialized;
    /* 0x04 */ u32 references;
    /* 0x08 */ s64 archiveId;
};
struct ArchiveModuleCounters {
    ArchiveModuleCounters(u32 initialRequests, u32 initialCompletions)
        : requests(initialRequests), completions(initialCompletions) {}
    u32 requests;
    u32 completions;
};
typedef char ArchiveModuleStateSizeCheck[sizeof(ArchiveModuleState) == 0x10 ? 1 : -1];
typedef char ArchiveModuleCountersSizeCheck[sizeof(ArchiveModuleCounters) == 8 ? 1 : -1];

ArchiveModuleState g_archiveModuleState(-1);
ArchiveModuleCounters g_archiveModuleCounters(0, 0);
nn::os::CriticalSection g_archiveModuleCriticalSection;
