/* If the object has a pending request, looks up the 0x207 setting and forwards the request to FUN_001373f0. */
#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
} Request;

extern void FUN_0017d920(s32 id, s32 *value);
extern void FUN_0017db14(s32 value, u32 first, u32 second);
extern void nngxGetError(void);

void FUN_00167eb0(Request *request)
{
    s32 setting;

    if (request->first != 0) {
        FUN_0017d920(0x207, &setting);
        FUN_0017db14(setting, request->first, request->second);
        nngxGetError();
    }
}

}
