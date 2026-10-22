/* NON_MATCHING: list-member return chaining matches; node-iteration registers and link-clear store order differ. */
#include "classes/Obj420f70.h"

extern "C" void asdFatalError();

/* Reports outstanding users before unlinking the non-owning list member. */
Obj420f70::~Obj420f70()
{
    if (outstanding != 0) {
        asdFatalError();
    }
    if (links.first != NULL) {
        asdFatalError();
    }
}
