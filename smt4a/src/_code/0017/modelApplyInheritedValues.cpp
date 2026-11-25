#include "gfx/InheritedValues.h"

extern "C" InheritedValueCollection::Appender DAT_00544d14[2];

extern "C" s32 objectGetCategoryTwo(void);

/* Applies inherited scalar values and replays the source's two append lists. */
extern "C" void modelApplyInheritedValues(InheritedValueDestinationOwner *destination,
    const InheritedValueSourceOwner *source, u32 value, u32 index)
{
    InheritedValueCollection *values = &destination->data->values;
    InheritedValueSource *inherited = source->data;
    values->slots[index] = value;
    u32 id = objectGetCategoryTwo();
    values->slots[id] = FUN_00183468(id);
    if (inherited->firstValue.begin != inherited->firstValue.end)
        values->firstValue = *inherited->firstValue.begin;
    if (inherited->secondValue.begin != inherited->secondValue.end)
        values->secondValue = *inherited->secondValue.begin;
    values->appendRange(inherited->firstList, DAT_00544d14[0]);
    values->appendRange(inherited->secondList, DAT_00544d14[1]);
    if (inherited->defaults.begin != inherited->defaults.end)
        *values->defaultValue = *inherited->defaults.begin;
}
