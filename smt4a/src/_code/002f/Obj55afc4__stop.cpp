#include "classes/Obj55afc4.h"

/* Stops the child once: nothing to do if already stopped or there is no child. */
void Obj55afc4::stop()
{
    if (state != 3 && child != NULL) {
        child->stop();
        state = 3;
    }
}
