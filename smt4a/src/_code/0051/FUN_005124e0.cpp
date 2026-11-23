/* NON_MATCHING: native constructors; only the deferred lock's -1 is materialised before its (volatile) zero store, retail after it. */
#include "classes/Obj2fd02a.h"
#include "nn/os/CriticalSection.h"

Obj2fd02a g_threadRecordA;
nn::os::CriticalSection g_soundVoiceCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
