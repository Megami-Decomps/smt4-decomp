/* NON_MATCHING: inline base-prefix/vtable stores and the zero-argument register setup are scheduled differently. */
#include "classes/WindowStatus.h"

/* Clears the concrete window's state and translated result. */
Obj422230::Obj422230()
{
    reserved = 0;
    result = WindowStatusResult(0);
}
