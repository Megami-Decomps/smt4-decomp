/* If the object has a pending request, looks up the 0x207 setting and forwards the request to FUN_001373f0. */
#include "common.h"

extern "C" {

typedef struct Request {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 first;
    /* 0x18 */ u32 second;
} Request;

extern void FUN_002bc7f4(s32 id, s32 *value);
extern void FUN_001373f0(s32 value, u32 first, u32 second);
extern void nngxGetError(void);

void FUN_002c4e98(Request *request)
{
    s32 setting;

    if (request->first != 0) {
        FUN_002bc7f4(0x207, &setting);
        FUN_001373f0(setting, request->first, request->second);
        nngxGetError();
    }
}

}
