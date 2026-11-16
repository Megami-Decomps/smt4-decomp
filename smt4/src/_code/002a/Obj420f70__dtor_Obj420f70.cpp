/* NON_MATCHING: list clearing now has retail's instruction sequence; only the node/zero registers differ (retail node r1, zero r0). */
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
