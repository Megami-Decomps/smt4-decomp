#include "common.h"

extern "C" {

u32 scrGetArg(u32 index);
f32 scriptReadStackValueAsFloat(u32 index);
s32 eventTexHasMissingValue(void);
u32 FUN_0039b0f8(u32 id, f32 first, f32 second);
void eventTexSetJobParam(void);
void eventTexStoreHandle(u32 handle);
void scrSetResult(u32 value);

/* Script command: creates the event texture job for the id with two float arguments (when the event has no missing value) and returns its handle, else 0. */
u32 FUN_002e5618(void)
{
    u32 id = scrGetArg(0);
    f32 first = scriptReadStackValueAsFloat(1);
    f32 second = scriptReadStackValueAsFloat(2);
    u32 result;

    if (eventTexHasMissingValue() != 0) {
        id = FUN_0039b0f8(id, first, second);
        eventTexSetJobParam();
        eventTexStoreHandle(id);
        result = id;
    } else {
        result = 0;
    }
    scrSetResult(result);
    return 1;
}

} /* extern "C" */
