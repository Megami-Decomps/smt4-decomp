/* NON_MATCHING: the vptr and cleared state-halfword stores are scheduled in reverse order. */
#include "classes/Obj422594.h"

/* Starts with a cleared touch-owner state. */
Obj422594::Obj422594() : state(0)
{
}
