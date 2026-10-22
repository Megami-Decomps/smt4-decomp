/* NON_MATCHING: native shared-reference field initialization still differs in store scheduling. */
#include "classes/Obj55b104.h"

/* Creates the first shared reference in the inactive state. */
Obj5593b8::Obj5593b8() : references(1), state(0)
{
}
