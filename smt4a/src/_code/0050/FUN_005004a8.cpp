/* NON_MATCHING: same layout and calls; retail loads the stack argument pair with `ldm {r2, r6}` and the id with `ldm {r0, ip}`, built uses ldrd/different temporaries for the stack pair */
#include "classes/WindowStatus.h"

extern "C" {

struct WindowRange {
    u32 c;
    u32 d;
};

u32 FUN_004267dc(u32 a, u32 b, u32 c, u32 d, u64 id, u32 e);

/* Starts the status operation for `id`; an empty id gives the fixed error code. */
WindowStatusResult FUN_005004a8(const u64 &id, u32 a, u32 b, WindowRange r)
{
    if (id == 0) {
        return WindowStatusResult(0xe0a13882);
    }
    return WindowStatusResult(FUN_004267dc(a, b, r.c, 1, id, r.d + 1));
}

} /* extern "C" */
