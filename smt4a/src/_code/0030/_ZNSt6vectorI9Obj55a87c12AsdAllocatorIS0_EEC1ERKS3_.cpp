/* NON_MATCHING: the final size computation differs: retail reloads the buffer start for each of the two pointer sums and stores the capacity end first; the compiler keeps one load and stores the used end first (three instructions longer). */
#include "stl/Obj55a87cValues.h"
#include "stl/OutOfLineMax.h"

/* Retail keeps these library helpers as calls. */
namespace _RW {
template <> u32 __rw_new_capacity(u32, const Obj55a87cValues *);
}
namespace std {
template <> Obj55a87c *uninitialized_copy(const Obj55a87c *, const Obj55a87c *, Obj55a87c *, AsdAllocator<Obj55a87c> &);
}
template <> u32 Obj55a87cValues::size() const;
template <> Obj55a87c *AsdAllocator<Obj55a87c>::allocate(u32, const void *);

/* std::vector<Obj55a87c>::vector(const vector &): allocates max(size, new capacity) and copy-constructs the elements. */
template <>
Obj55a87cValues::vector(const Obj55a87cValues &other)
    : AsdAllocator<Obj55a87c>(other.get_allocator()), _C_start(0), _C_finish(0), _C_end_of_storage(0)
{
    u32 capacity = std::max(other.size(), (u32)_RW::__rw_new_capacity(0, this));
    _C_start = AsdAllocator<Obj55a87c>::allocate(capacity, 0);
    std::uninitialized_copy(other.begin(), other.end(), begin(), static_cast<AsdAllocator<Obj55a87c> &>(*this));
    _C_finish = _C_start + other.size();
    _C_end_of_storage = _C_start + capacity;
}
