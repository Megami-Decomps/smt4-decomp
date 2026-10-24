/* NON_MATCHING: the final stores to _C_start/_C_finish/_C_end_of_storage are scheduled one instruction differently (retail reloads the new capacity after storing _C_start). */
#include "stl/Obj55aff4Values.h"

/* std::vector<Obj55aff4>::_C_insert_aux(position, count, value): inserts `count` copies of `value`, growing the storage when needed. */
template class std::vector<Obj55aff4, AsdAllocator<Obj55aff4> >;
