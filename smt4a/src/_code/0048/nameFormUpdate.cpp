#include "shard/W6_W6Match3_NameFormStateA.h"

extern "C" void nameFormUpdate(NameFormStateA* form)
{
    (form->*form->handlers[form->phase])();
    ++form->frame;
    if (form->countdown > 0) {
        --form->countdown;
    }
}
