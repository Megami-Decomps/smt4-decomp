#include "common.h"

extern "C" {

/* Packed request: two ids, a scale at 8 and three more words. */
typedef struct {
    u32 idA;            /* 0x00 */
    u32 idB;            /* 0x04 */
    f32 scale;          /* 0x08 */
    u32 unk0c;          /* 0x0c */
    u32 unk10;          /* 0x10 */
    u32 unk14;          /* 0x14 */
} Request;

int efctSetSpeed(f32 scale);
int FUN_001835b4(int a, int b, int c, u32 idA, u32 idB, int d);
int FUN_00344cd0(u32 context, u32 idA, u32 idB, int a, int b, int c, int d, int e, int f, int g, int h, u32 w0, u32 w1, u32 w2, int i, int j);

/* Submits the request when a context is given: applies its scale, issues the two FUN_001835b4/FUN_00344cd0 commands, then resets the scale to 1.0. */
void effectRequestSubmit(Request *request, u32 context)
{
    if (context != 0) {
        efctSetSpeed(request->scale);
        FUN_001835b4(2, 0x2b, 0xe, request->idA, request->idB, 2);
        FUN_00344cd0(context, request->idA, request->idB, 0x2b, 8, 9, 10, 4, 6, 5, 7, request->unk0c, request->unk10, request->unk14, 2, 0);
        efctSetSpeed(1.0f);
    }
}

} /* extern "C" */
