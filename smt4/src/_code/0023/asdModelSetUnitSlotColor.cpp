#include "common.h"
#include "code/Code0023_Smt4.h"

extern "C" {

struct Obj003c7f08;
void objModelSlotSetColor(Obj003c7f08 *o, f32 red, f32 green, f32 blue);

extern Obj003c7f08 *DAT_004398d4;

/* Gives the model slot of the global unit, when there is one, the colour; the caller's own first argument is not used. */
void asdModelSetUnitSlotColor(void *unused, f32 red, f32 green, f32 blue)
{
    if (DAT_004398d4 != NULL) {
        objModelSlotSetColor(DAT_004398d4, red, green, blue);
    }
}

} /* extern "C" */
