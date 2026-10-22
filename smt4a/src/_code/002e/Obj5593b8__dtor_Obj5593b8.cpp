/* NON_MATCHING: native reference-base destruction is integrated; vptr/reference store scheduling remains to be matched. */
#include "classes/Obj55b104.h"

/* Marks the shared-reference prefix as no longer owning references. */
Obj5593b8::~Obj5593b8()
{
    references = 0;
}
