/* NON_MATCHING: native static initialization restores both destructor registrations; the clock's zero store, pooled addresses and registration argument scheduling still differ. */
#include "sound/AudioStreamWorker.h"
#include "nn/fnd/TimeSpan.h"
#include "nn/os/Thread.h"
#include "nn/os/CriticalSection.h"

/* Constructs the audio worker, its clock and thread, and its initially uninitialized lock. */
AudioStreamWorker g_soundVoicePool(-1);
nn::fnd::TimeSpan g_audioWorkerClock = nn::fnd::TimeSpan::FromNanoSeconds(0);
NnOsThread g_audioWorkerThread;
nn::os::CriticalSection g_audioWorkerLock(nn::os::CRITICAL_SECTION_DEFERRED);
