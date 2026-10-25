/* NON_MATCHING: recovered HandleOwner member; owner initialization addressing and translated-result copy width still differ. */
#include "classes/WindowStatus.h"

/* Clears the extra selection state and translated result. */
Obj422278::Obj422278()
{
    result = WindowStatusResult(reserved = 0);
}
