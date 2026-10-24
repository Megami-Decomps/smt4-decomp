#ifndef NW_UT_RUNTIMETYPEINFO_H
#define NW_UT_RUNTIMETYPEINFO_H

#include "common.h"

namespace nw {
namespace ut {

/* The engine's own run-time type tag (the game is built without C++ RTTI): one static node per
 * class, linked to its base class's node. Polymorphic objects return their node from vtable slot 2. */
struct RuntimeTypeInfo {
    /* 0x00 */ const RuntimeTypeInfo *base;

    bool isDerivedFrom(const RuntimeTypeInfo *wanted) const
    {
        for (const RuntimeTypeInfo *type = this; type != NULL; type = type->base) {
            if (type == wanted) {
                return true;
            }
        }
        return false;
    }
};

/* The object as a T when its type tag derives from T's node, else NULL. */
template <class T, class Object>
T *DynamicCast(Object *object, const RuntimeTypeInfo *type)
{
    return (object != NULL && object->getRuntimeTypeInfo()->isDerivedFrom(type)) ? static_cast<T *>(object) : NULL;
}

/* Same cast, tested through the converted pointer. */
template <class T, class Object>
T *CheckedCast(Object *object, const RuntimeTypeInfo *type)
{
    T *result = static_cast<T *>(object);
    if (result != NULL && !result->getRuntimeTypeInfo()->isDerivedFrom(type)) {
        result = NULL;
    }
    return result;
}

} /* namespace ut */
} /* namespace nw */

#endif
