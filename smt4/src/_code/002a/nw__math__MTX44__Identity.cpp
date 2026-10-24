#include "nw/math/MTX44.h"

/* nw::math::MTX44::Identity(): the shared identity matrix, built on first use (function-local static with a guard).
 * Referenced through a pointer so the compiler emits the out-of-line copy. */
extern const nw::math::MTX44 &(*const g_mtx44Identity)();
const nw::math::MTX44 &(*const g_mtx44Identity)() = &nw::math::MTX44::Identity;
