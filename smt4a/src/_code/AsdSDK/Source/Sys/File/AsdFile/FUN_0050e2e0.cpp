/* NON_MATCHING: native static initialiser matches except that for the last registration (g_asdFileEvent) retail loads the atexit arguments (r2, r1) after the event's two zero stores; the build loads them first. */
#include "classes/Obj2fd02a.h"
#include "classes/Obj42cd08.h"
#include "classes/Obj42d340.h"

Obj2fd02a g_asdFileWorkerThread;
Obj42d340 g_asdFileMutex;
Obj42cd08 g_asdFileEvent;
