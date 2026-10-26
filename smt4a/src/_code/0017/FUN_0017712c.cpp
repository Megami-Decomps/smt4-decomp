/* NON_MATCHING: indexed slot update and cached member-pointer dispatch scheduling differ. */
#include "gfx/InheritedValues.h"

extern "C" InheritedValueCollection::Appender DAT_00544d14[2];

extern "C" s32 objectGetCategoryTwo(void);

// Apply inherited scalar values and replay the source's two append lists.
extern "C" void FUN_0017712c(InheritedValueDestinationOwner *destination,
    const InheritedValueSourceOwner *source, u32 value, u32 index)
{
    InheritedValueCollection *values = &destination->data->values;
    InheritedValueSource *inherited = source->data;
    values->slot(index) = value;
    u32 id = objectGetCategoryTwo();
    values->slot(id) = FUN_00183468(id);
    if (inherited->firstValue.begin != inherited->firstValue.end)
        values->firstValue = *inherited->firstValue.begin;
    if (inherited->secondValue.begin != inherited->secondValue.end)
        values->secondValue = *inherited->secondValue.begin;
    values->appendRange(inherited->firstList, DAT_00544d14[0]);
    values->appendRange(inherited->secondList, DAT_00544d14[1]);
    if (inherited->defaults.begin != inherited->defaults.end)
        *values->defaultValue = *inherited->defaults.begin;
}
