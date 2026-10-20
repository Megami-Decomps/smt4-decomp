/* NON_MATCHING: register allocation and constant scheduling only: retail keeps the source in r5 and the argument in r4, loads 18 before 2 for the stack arguments and ends without the extra branch. */
#include "common.h"

/* An archive/stream object; only the read method (vtable slot 13) is used here. */
class ReadSource {
public:
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual u32 read(void *buffer, u32 size, s32 *received, u32 arg, s32 mode, s32 flags);
};

extern "C" {

extern void sysMemClear(void *block, s32 size);

/* Reads a 0x60-byte record into `buffer` through the source; a short result without any received data becomes a not-found error. */
u32 FUN_00501b9c(ReadSource *source, void *buffer, u32 arg)
{
    s32 received = 0;
    u32 result;

    sysMemClear(buffer, 0x60);
    result = source->read(buffer, 0x60, &received, arg, 2, 0x12);
    if ((result & 0x3FF) != 0x3F7) {
        if (received == 0) {
            result = 0xC8810BEF;
        }
    }
    return result;
}

} /* extern "C" */
