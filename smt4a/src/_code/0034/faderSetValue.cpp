#include "shard/Shard0034.h"
#include "ui/UiControl_Shard0034.h"

extern "C" {

/* Stores `value`; with a positive count scales it by `scale` into the targets. */
void faderSetValue(Fader *fader, f32 value)
{
    f32 scaled;

    fader->value = value;
    if (0 < fader->count) {
        scaled = fader->scale * value;
        if (fader->targetA != NULL) {
            fader->targetA->value = scaled;
            if (fader->targetB != NULL) {
                fader->targetB->value = scaled;
            }
        }
    }
}

} /* extern "C" */
