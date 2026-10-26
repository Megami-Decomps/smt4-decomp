/* NON_MATCHING: retail's stack frame places `value` in the argument struct's slot (48 bytes) and loads the callback addresses as raw pool words (no
 * relocation, they are not symbols); built has the LAB_ externs as relocations and a different frame and sign-test code. */
#include "common.h"

extern "C" {

/* Callback table handed to FUN_002bcc60: a count and the function addresses. */
typedef struct CallbackList {
    u32 count;      /* 0x0 */
    void *funcs[3]; /* 0x4 */
} CallbackList;

typedef struct RegisterInfo {
    u8 *flag;     /* 0x0 */
    u32 id;       /* 0x4 */
    s32 priority; /* 0x8 */
    u32 unused;   /* 0xc */
} RegisterInfo;

extern u32 *g_modelWorkHandle;
extern u32 g_modelWorkThread;
extern u8 DAT_004e9db8;
extern u8 FUN_00123cb0;
extern u8 LAB_00123c78;
extern u8 sysCopyWordIfOutputPresent;
extern u8 FUN_0011bd5c;

extern s32 FUN_0011cec8(u32 **out);
extern u32 FUN_002bcc60(u32 *dst, CallbackList *callbacks, void *main, void **context, RegisterInfo info);
extern void FUN_002c526c(void);
extern void FUN_0011cd24(void);

/* Fetches g_modelWorkHandle, then registers the callbacks for g_modelWorkThread. */
s32 FUN_0010ffdc(void)
{
    u32 *value = NULL;
    s32 result = FUN_0011cec8(&value);
    void *context;
    CallbackList callbacks;
    RegisterInfo info;

    if ((s32)(result & 0x80000000) >= 0) {
        g_modelWorkHandle = value;
    }
    if ((s32)(result & 0x80000000) >= 0) {
        context = (void *)FUN_0011cd24;
        callbacks.count = 4;
        callbacks.funcs[0] = &LAB_00123c78;
        callbacks.funcs[1] = &FUN_0011bd5c;
        callbacks.funcs[2] = &sysCopyWordIfOutputPresent;
        info.flag = &DAT_004e9db8;
        info.id = 0x5109d500;
        info.priority = -2;
        info.unused = 0;
        if (FUN_002bcc60(&g_modelWorkThread, &callbacks, &FUN_00123cb0, &context, info) < 0) {
            FUN_002c526c();
        }
    }
    return result;
}

} /* extern "C" */
