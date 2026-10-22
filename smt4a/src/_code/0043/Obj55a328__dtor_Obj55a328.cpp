/* NON_MATCHING: retail inlines base destruction; canonical base destructor is out of line and its visible-body form has different vcall scheduling. */
#include "classes/Obj55a328.h"

/* The base releases the owned string array. */
Obj55a328::~Obj55a328()
{
}
