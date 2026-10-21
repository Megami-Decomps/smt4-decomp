#include "shard/W6_W6Match3_NameFormState.h"

extern "C" void nameFormUpdate(NameFormState* form)
{
    (form->*form->handlers[form->phase])();
    ++form->frame;
    if (form->countdown > 0) {
        --form->countdown;
    }
}
