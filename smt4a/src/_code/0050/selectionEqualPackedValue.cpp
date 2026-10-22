#include "classes/SelectionState.h"

/* Compare the selection identity and all fields of its packed value. */
extern "C" bool selectionEqualPackedValue(const SelectionValueRecord *object, const SelectionValueRecord *other)
{
    return other->active == object->active && other->kind == object->kind &&
           other->value.packed.flags == object->value.packed.flags &&
           other->value.packed.first == object->value.packed.first &&
           other->value.packed.second == object->value.packed.second &&
           other->value.packed.third == object->value.packed.third &&
           other->value.packed.fourth == object->value.packed.fourth &&
           other->value.packed.fifth == object->value.packed.fifth &&
           other->value.packed.sixth == object->value.packed.sixth;
}
