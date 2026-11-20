/* NON_MATCHING: the first lock's address loads one instruction later, and both
 * CriticalSection constructors set the call argument before clearing the state. */
#include "nn/cec/MessageBoxModule.h"
#include "nn/os/CriticalSection.h"

extern "C" {

/* Constructs the CEC message-box state and its two locks. */
CecMessageBoxModuleState g_asdCecModuleFlags(-1);
CecMessageBoxModuleWords DAT_004656e0;
nn::os::CriticalSection g_asdCecMessageBoxCriticalSection;
nn::os::CriticalSection g_asdCecMessageBoxStateCriticalSection;

} /* extern "C" */
