/* NON_MATCHING: native constructors/destructors in retail order match except one scheduling swap: the critical-section constructor's `mov r0,r4` is hoisted above the zero store (same near miss as FUN_003eb734). */
#include "classes/AsdNodeList.h"
#include "nn/os/CriticalSection.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"

nn::os::CriticalSection g_modelWorkCriticalSection;
NnOsHandle g_modelWorkHandle;
NnOsThread g_modelWorkThread;
AsdNodeList g_modelWorkList;
