/* NON_MATCHING: retail walks the elements with an iterator-distance counter loop that steps two at a time (RogueWave range destroy); built uses a pointer loop */
#include "classes/Obj4213b0.h"

void Obj4213b0Array::clear()
{
    for (Obj4213b0Element *element = begin; element != end; ++element) {
        element->~Obj4213b0Element();
    }
    end = begin;
}

/* Empties the array and gives its storage back to its allocator. */
Obj4213b0Array::~Obj4213b0Array()
{
    clear();
    if (allocator != NULL && begin != NULL) {
        allocator->release(begin);
    }
}

/* The array member does all the work. */
Obj4213b0::~Obj4213b0()
{
}
