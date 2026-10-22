/* NON_MATCHING: native base/member construction is integrated; temporary frames and returned-member pointer reuse still differ. */
#include "classes/Obj55ac68.h"

/* Resets the derived state after constructing all owned member resources. */
Obj55ac68::Obj55ac68()
{
    state = 0;
    name = Obj55aff4("");
    first = Obj5596ac(3, WordVector());
    second = Obj5596ac(3, WordVector());
    timeout = 90;
    strings = Obj55aff4Vector();
    sharedState.reset();
    counter = 0;
    pending = 0;
    result = 0;
}
