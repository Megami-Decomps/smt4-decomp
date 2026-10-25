/* NON_MATCHING: indexed slot update and cached member-pointer dispatch scheduling differ. */
#include "gfx/InheritedValues.h"
#include "shard/FUN_002c5be8.h"

extern "C" InheritedValueCollection::Appender DAT_0041064c[2];

// Apply inherited scalar values and replay the source's two append lists.
extern "C" void FUN_001325c4(InheritedValueDestinationOwner *destination,
    const InheritedValueSourceOwner *source, u32 value, u32 index)
{
    InheritedValueCollection *values = &destination->data->values;
    InheritedValueSource *inherited = source->data;
    values->slot(index) = value;
    values->slot(2) = FUN_002c5be8(2);
    if (inherited->firstValue.begin != inherited->firstValue.end)
        values->firstValue = *inherited->firstValue.begin;
    if (inherited->secondValue.begin != inherited->secondValue.end)
        values->secondValue = *inherited->secondValue.begin;
    values->appendRange(inherited->firstList, DAT_0041064c[0]);
    values->appendRange(inherited->secondList, DAT_0041064c[1]);
    if (inherited->defaults.begin != inherited->defaults.end)
        *values->defaultValue = *inherited->defaults.begin;
}
