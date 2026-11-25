/* NON_MATCHING: only the destructor relocation differs until the unit at 0x522df0 is named
 * Obj557b68WordVector::~Obj557b68WordVector() (build/w93_names.txt). */
#include "classes/Obj557b68.h"

extern "C" void FUN_00406a1c(Obj557b68 *owner);

/* Releases the scene's resources before its colour slots and lists are destroyed. */
Obj557b68::~Obj557b68()
{
    FUN_00406a1c(this);
}
