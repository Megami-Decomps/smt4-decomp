/* NON_MATCHING: native constructors; armcc hoists the -1 constant and the module-handle literal above the deferred lock's first store */
#include "classes/Obj2fd02a.h"
#include "nn/os/CriticalSection.h"

Obj2fd02a g_threadRecordA;
nn::os::CriticalSection g_soundVoiceCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
