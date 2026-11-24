#include "classes/Obj2fd02a.h"
#include "nn/os/CriticalSection.h"

/* Constructs the voice worker's thread record and its deferred lock. */
Obj2fd02a g_threadRecordA;
nn::os::CriticalSection g_soundVoiceCriticalSection(nn::os::CRITICAL_SECTION_DEFERRED);
