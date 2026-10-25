/* NON_MATCHING: retail copies outgoing date components and the returned date with integer ldm/stm; this source uses VFP argument copies and ldrd/strd. */
#include "nn/fnd/DateTime.h"

extern "C" nn::fnd::DateTime nn_fnd_DateTime_FromParameters(
    s32 year, s32 month, s32 day, s32 hour, s32 minute, s32 second, s32 millisecond);

nn::fnd::DateTime::DateTime(s32 year, s32 month, s32 day,
    s32 hour, s32 minute, s32 second, s32 millisecond)
{
    *this = nn_fnd_DateTime_FromParameters(year, month, day, hour, minute, second, millisecond);
}
