#include "classes/AsdNodeList.h"
#include "nn/os/CriticalSection.h"
#include "nn/os/Handle.h"
#include "nn/os/Thread.h"

nn::os::CriticalSection g_modelWorkCriticalSection;
NnOsHandle g_modelWorkHandle;
NnOsThread g_modelWorkThread;
AsdNodeList g_modelWorkList;
