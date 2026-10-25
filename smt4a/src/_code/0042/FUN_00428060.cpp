/* NON_MATCHING: output/text saved registers and the preliminary failure-result move differ. */
#include "classes/WindowStatus.h"
#include "ui/FormattedNumericEntry.h"
#include "nn/Result.h"

struct ResolvedNumericEntry {
    u8 unk00[0x54];
    NumericEntryFormat format;
};

extern "C" {
u32 FUN_0016ccfc(void);
s32 tokenResolveAddress(u32 context, ResolvedNumericEntry **address, u32 token);
u32 FUN_004285d4(FormattedNumericEntry *output, const char *text, const NumericEntryFormat *format);

// Resolve the owner's token, parse the entry text, and validate the translated outcome.
WindowStatusResult FUN_00428060(void *owner, void *output, const void *identifier)
{
    s32 ownerStatus = FUN_004283cc(owner);
    if (nnResultIsFailure(ownerStatus))
        return WindowStatusResult(static_cast<u32>(ownerStatus));

    ResolvedNumericEntry *entry;
    s32 status = tokenResolveAddress(FUN_0016ccfc(), &entry, *static_cast<u32 *>(owner));
    if (!nnResultIsFailure(status)) {
        status = static_cast<s32>(FUN_004285d4(static_cast<FormattedNumericEntry *>(output),
            static_cast<const char *>(identifier), &entry->format));
        if (!nnResultIsFailure(status))
            status = 0;
    }
    WindowStatusResult result(static_cast<u32>(status));
    recordValidatePair(owner, result);
    return result;
}
}
