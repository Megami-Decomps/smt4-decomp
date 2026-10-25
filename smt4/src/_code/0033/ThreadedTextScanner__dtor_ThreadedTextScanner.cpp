/* NON_MATCHING: native thread/handle ownership matches; the cleared handle uses a different zero register. */
#include "classes/ThreadedTextScanner.h"

/* The destructor of ThreadedTextScanner: finalizes the thread, then the scanner state. */
ThreadedTextScanner::~ThreadedTextScanner()
{
}
