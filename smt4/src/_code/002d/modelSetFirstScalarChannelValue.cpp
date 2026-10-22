#include "shard/Shard0034.h"

/* Update the selected property channel, keeping the unscaled value on the controller. */
extern "C" void modelSetFirstScalarChannelValue(ModelPropertyController *controller, f32 value)
{
    if (controller->count > 0) {
        controller->value = value;
        value = controller->scale * value;
        Target40 *target = (Target40 *)modelPropertyScalarChannel(controller->node, 0);
        if (target != NULL) {
            target->value = value;
        }
    }
}
