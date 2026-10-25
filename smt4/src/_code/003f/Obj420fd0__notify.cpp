#include "classes/Obj420fd0.h"

extern "C" void nn_os_LightEvent_Signal(LightEvent *event);

// Wake the event waiting for this completion notification.
void Obj420fd0::notify()
{
    nn_os_LightEvent_Signal(event);
}
